# Temeletry Communication
Azure IoT Hub��Azure Sphere MT3620��ڑ����A�f�o�C�Xto�N���E�h(D2C)�܂��̓N���E�gto�f�o�C�X(C2D)�ɂ���đ��݂Ƀe�����g��(���b�Z�[�W)�̂������s���B
�ڑ��ɂ�DPS�͎g�p�����A�f�o�C�X�𒼐�IoT Hub�֐ڑ�����BDPS���g�p����ꍇ�͂����� [Azure Sphere IoT Hub Example](https://github.com/hayatochigi/Azure-Sphere/tree/master/examples/IoT%20Hub)

[IoT Hub �� device-to-cloud ����� cloud-to-device ���b�Z�[�W�𑗐M����](https://docs.microsoft.com/ja-jp/azure/iot-hub/iot-hub-devguide-messaging)  
[�e�����g���𑗐M����ю�M����R�[�h���L�q����](https://docs.microsoft.com/ja-jp/learn/modules/remotely-monitor-devices-with-azure-iot-hub/3-write-code-device-telemetry)

MT3620����IoT Hub�ւ̓e�����g�������b�Z�[�W������Ƃ���MQTT�v���g�R���ő��M����BIoT Hub����MT3620�ւ́APortal��̃}�j���A������Ńe�����g�������b�Z�[�W������Ƃ��āA������Key-Value�`���̃v���p�e�B�𑗐M����B

<p align="center">
  <img width="400" src="https://github.com/hayatochigi/images/blob/master/IoT%20Hub%20Example/IoT%20Hub%20TelComm%20-%20C2D%20message.PNG">
</p>

�T���v�������s����ƁAC2D���b�Z�[�W�ƃv���p�e�B���m�F�ł���BD2C���b�Z�[�W��[ServiceBusExplorer](https://github.com/paolosalvatori/ServiceBusExplorer/releases)��p����ƊȒP�Ɋm�F�ł���B

<p align="center">
  <img width="800" src="https://github.com/hayatochigi/images/blob/master/IoT%20Hub%20Example/IoT%20Hub%20TelComm%20Result.png">
</p>
