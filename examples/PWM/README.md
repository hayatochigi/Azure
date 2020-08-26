# Azure Sphere PWM Example
PWM�𐧌䂵��MT3620�Ɏ������ꂽLED��������_��������B

[���x�ȃA�v���P�[�V������ PWM ���g�p���� | Microsoft Azure](https://docs.microsoft.com/ja-jp/azure-sphere/app-development/pwm)

[Applibs pwm.h](https://docs.microsoft.com/ja-jp/azure-sphere/reference/applibs-reference/applibs-pwm/pwm-overview)

#### PWM�R���g���[��
MT3620�̏ꍇ�APWM�R���g���[���͈ȉ��̃t�@�C���Œ�`����Ă���B
```
C:\Program Files (x86)\Microsoft Azure Sphere SDK\HardwareDefinitions\mt3620_rdb.json
```
```
{"Name": "MT3620_RDB_PWM_CONTROLLER0", "Type": "Pwm", "Mapping": "MT3620_PWM_CONTROLLER0", "Comment": "PWM CONTROLLER 0 channel 0 is exposed on header 1 pin 4, channel 1 is exposed on on header 1 pin 6, channel 2 is exposed header 1 pin 8, channel 3 is exposed header 1 pin 10. Pins for this controller are shared with MT3620_GPIO0, MT3620_GPIO1, MT3620_GPIO2, MT3620_GPIO3. If this PWM Controller is requested, none of these GPIOs can be used."},
{"Name": "MT3620_RDB_PWM_CONTROLLER1", "Type": "Pwm", "Mapping": "MT3620_PWM_CONTROLLER1", "Comment": "PWM CONTROLLER 1 channel 0 is exposed on header 1 pin 12, channel 1 is exposed on on header 2 pin 4, channel 2 is exposed header 2 pin 6, channel 3 is exposed header 2 pin 8. Pins for this controller are shared with MT3620_GPIO4, MT3620_GPIO5, MT3620_GPIO6, MT3620_GPIO7. If this PWM Controller is requested, none of these GPIOs can be used."},
{"Name": "MT3620_RDB_LED_PWM_CONTROLLER2", "Type": "Pwm", "Mapping": "MT3620_PWM_CONTROLLER2", "Comment": "LED PWM CONTROLLER 2 channel 0 is used by LED1 Red channel, channel 1 is used by LED1 Green channel, channel 2 is used by LED1 Blue channel, channel 3 is used by NETWORKING LED. Pins for this controller are shared with MT3620_GPIO8, MT3620_GPIO9, MT3620_GPIO10, MT3620_GPIO11. If this PWM Controller is requested, none of these GPIOs can be used."},
 ```
 
 �n�[�h�E�F�A��`�w�b�_�[�t�@�C���ł̓R���g���[�����w�肵�āA�ǂ̃s������o�͂��邩��PWM_Apply�֐��Ŏw�肷��B
 