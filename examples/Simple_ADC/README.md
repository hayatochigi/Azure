# Azure Sphere Simple ADC Example

[���x�ȃA�v���P�[�V������ ADC ���g�p���� | Microsoft Azure](
https://docs.microsoft.com/ja-jp/azure-sphere/app-development/adc)

## 1. ���\�z

### 1. �n�[�h�E�F�A��`�w�b�_�[�t�@�C�����쐬����
1. �v���W�F�N�g��"Hardware"�t�H���_���쐬����
2. Hardware�t�H���_���ɁA"hardware_definition.json"�t�@�C�����쐬����
3. [�n�[�h�E�F�A��`](https://docs.microsoft.com/ja-jp/azure-sphere/hardware/hardware-abstraction)���Q�l�ɁAJSON�t�@�C����ҏW����
4. Azure Sphere Developer Command Prompt ����ȉ��̃R�}���h�����s����
```
azsphere hardware-definition generate-header --input hardware_definition.json
```
5. Hardware > inc > hw �t�H���_�ɁA�n�[�h�E�F�A��`�w�b�_�[�t�@�C�����������ꂽ���Ƃ��m�F����


### 2. �A�v���P�[�V�����}�j�t�F�X�g���L�q����
1. app_manifest.json���J��
2. "Capabilities"���ڂ�ADC��`��ǉ�����BAdc�̖��O�́A�n�[�h�E�F�A��`�w�b�_�[�t�@�C���ɒ�`�������̂��g�p����B
```
{
  "SchemaVersion": 1,
  "Name": "AzureSphere_Simple_ADC",
  "ComponentId": "xxx4a18b-e6e6-44a2-91cd-730e1210adce",
  "EntryPoint": "/bin/app",
  "CmdArgs": [],
  "Capabilities": {
    "Adc": [ "$ADC" ],
    "AllowedApplicationConnections": []
  },
  "ApplicationType": "Default"
}
```


### 3. CMakeLists.txt��ҏW����
CMakeLists.txt�Ɉȉ��̈ꕶ��ǋL����B
�� ���ꂪ�Ȃ��ƁAmain.c����n�[�h�E�F�A��`�w�b�_�[�t�@�C�����Q�Ƃł��Ȃ�...
```
azsphere_target_hardware_definition(${PROJECT_NAME} TARGET_DIRECTORY "Hardware" TARGET_DEFINITION "hardware_definition.json")
```


## 2. �R�[�f�B���O����
�Ⴆ�Έȉ��̂悤�ɋL�q���āA�G���[�Ȃ�����l���o�͂���邱�Ƃ��m�F����B
```
#include <applibs/log.h>
#include <applibs/adc.h>
#include "hw/hardware_definition.h"


int main(void)
{
    // Please see the extensible samples at: https://github.com/Azure/azure-sphere-samples
    // for examples of Azure Sphere platform features
    Log_Debug("High Level Application\n");

    int adcfd = ADC_Open(ADC);
    int BitDepth = ADC_GetSampleBitCount(adcfd, AI0);
    
    uint32_t value = 0;
    int result = ADC_Poll(adcfd, 0, &value);

    float voltage = ((float)value * 2.5) / (float)((1 << BitDepth) - 1);

    Log_Debug("Voltage is %.6f\n", voltage);
    return 0;
}
```

<p align="center">
  <img width="600" src="https://github.com/hayatochigi/images/blob/master/Azure%20Sphere%20Example/Azure%20Sphere%20-%20ADC%20Result.png">
</p>

