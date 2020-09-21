# Azure Sphere UDP Example
���̃T���v���́AAzure Sphere��Windows�̊Ԃ�UDP�ɂ��f�[�^�̑���M���s��

Azure Sphere��UDP�̎�M�������邽�߂ɂ́A"AllowedUdpServerPorts"�Ń|�[�g�ւ̎�M�g���t�B�b�N��������K�v������B
���l�ɑ��M�̏ꍇ�́A"AllowedConnections"�ő��M���PC��o�^����K�v������B

[�A�v���P�[�V���� �}�j�t�F�X�g
](https://docs.microsoft.com/ja-jp/azure-sphere/app-development/app-manifest)
```
"Capabilities": {
    "AllowedConnections" : [ "192.168.1.2" ],
    "AllowedUdpServerPorts": [ 1024, 50000 ]
  },
```

���̃T���v���ł́AWindows����UDP�A�v���P�[�V������LabVIEW��p�����B

- Azure Sphere -- ("ABC") --> Windows
- Windows -- ("EFG") --> Azure Sphere

<p align="center">
  <img width="800" src="https://github.com/hayatochigi/images/blob/master/Azure%20Sphere%20Example/UDP-result.PNG">
</p>
