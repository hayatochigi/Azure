# Azure Sphere TCP Example
���̃T���v����Azure Sphere��TCP�T�[�o�[�Ƃ��āAWindows�N���C�A���g�Ƃ̊Ԃ�TCP�ɂ��f�[�^�̑���M���s��

Azure Sphere��TCP�̎�M�������邽�߂ɂ́A"AllowedTcpServerPorts"�Ń|�[�g�ւ̎�M�g���t�B�b�N��������K�v������B
���l�ɃN���C�A���gPC��IP�A�h���X���A"AllowedConnections"�œo�^����K�v������B

[�A�v���P�[�V���� �}�j�t�F�X�g
](https://docs.microsoft.com/ja-jp/azure-sphere/app-development/app-manifest)
```
"Capabilities": {
    "AllowedApplicationConnections": [],
    "AllowedConnections": [ "192.168.11.57" ],
    "AllowedTcpServerPorts": [ 61551]
  },
```

TCP�N���C�A���g�A�v���ɂ́ANonSoft�l��TCP/IP�e�X�g�c�[�����g�p�����B�V���v���Ŏg���₷��!

[TCP/IP�e�X�g�c�[��](http://nonsoft.la.coocan.jp/Download/SocketTool/index.html)

<p align="center">
  <img width="500" src="https://github.com/hayatochigi/images/blob/master/Azure%20Sphere%20Example/TCP-result.png">
</p>
