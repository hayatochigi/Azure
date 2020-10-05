# Azure Sphere IoT Hub Example
���̃T���v���́ADevice Provisioning Service�����IoT Hub�֐ڑ����AMQTT�v���g�R����p����5�b���Ƀ��b�Z�[�W��IoT Hub�֑��M����B

## 1. Azure�Z�b�g�A�b�v
Azure IoT Hub��Device Provisioning Service (DPS)���Z�b�g�A�b�v����B
���̃T���v���ł́A�����I�ȗ��֐����l��IoT Hub�ւ̒��ڐڑ��ł͂Ȃ��ADPS������ڑ����s���B

DPS�̃����b�g�ɂ��Ă͂�����̕��̐������킩��₷���čD���B
[IoT Hub Device Provisioning Service �Ƃ́H���T�v](https://qiita.com/mstakaha1113/items/231c859d7427b466d4ad)

### 1. IoT Hub��DPS�̍쐬
���̎����̒ʂ�s�������B�����킩��₷���ď�����܂��B

[�N�C�b�N �X�^�[�g:Azure Portal �� IoT Hub Device Provisioning Service ��ݒ肷��](https://docs.microsoft.com/ja-jp/azure/iot-dps/quick-setup-auto-provision)

�R�[�h���Ŏg�p����̂�IoTHub�̃z�X�g���ƁADPS�̃X�R�[�vID���T�v�y�[�W����m�F���čT���Ă����B


### 2. �ؖ�������̐���
���̎����̒ʂ�s�������B

[Azure Sphere �p�� Azure IoT �n�u��ݒ肷��](https://docs.microsoft.com/ja-jp/azure-sphere/app-development/setup-iot-hub)


### 3. �e�i���gID���m�F����
```
azsphere tenant list
```
�R�[�h���Ŏg�p����̂ŁA�e�i���gID���T���Ă����B


## 2. �R�[�h���C������
- main.c����"scopeId"��`
- �A�v���P�[�V�����}�j�t�F�X�g����IoT Hub�z�X�g���ƃe�i���gID

��L2�_���C�����ăR�[�h�����s����

## 3. ���b�Z�[�W���m�F����
[Service Bus Explorer](https://github.com/paolosalvatori/ServiceBusExplorer/releases)
���g�p���邱�Ƃő��M�������b�Z�[�W���ȒP�Ɋm�F�ł���B

Actions >> Create IoT Hub Listner

����AIoT Hub�̐ڑ���������g�p����IoT Hub�֐ڑ��ł���B���s����Ƃ���Ȋ���

<p align="center">
  <img width="800" src="https://github.com/hayatochigi/images/blob/master/Azure%20Sphere%20Example/Service%20Bus%20Explorer%20Result.png">
</p>

IoT Hub�̃r���A�[������ƁA������ƃ��b�Z�[�W�������Ă�����ڑ��f�o�C�X�����ω����Ă��邱�Ƃ��m�F�ł���B

<p align="center">
  <img width="800" src="https://github.com/hayatochigi/images/blob/master/Azure%20Sphere%20Example/IoT%20Hub%20Viewer.PNG">
</p>

