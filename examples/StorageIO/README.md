# Azure Sphere Storage Example
���̃T���v���́AAzure Sphere�̕ύX�\�X�g���[�W���\�����āA�t�@�C���̍쐬/��������/�ǂݎ��/����̈�A�̗�����s���B

[Azure Sphere �ł̃X�g���[�W�̎g�p](https://docs.microsoft.com/ja-jp/azure-sphere/app-development/storage)

Azure Sphere�̕ύX�\�X�g���[�W���g�p���邽�߂ɂ́A�A�v���P�[�V�����}�j�t�F�X�g�Ɉȉ��̋L�q���s���B

[�A�v���P�[�V���� �}�j�t�F�X�g
](https://docs.microsoft.com/ja-jp/azure-sphere/app-development/app-manifest)
```
"Capabilities": {
    "AllowedApplicationConnections": [],
    "MutableStorage": { "SizeKB": 8 }
  },
```

�X�g���[�W�g�p�̃w���v�ɂ��L�ڂ���ʂ�A���̕ύX�\�X�g���[�W�̓A�v���P�[�V�����̃R���|�[�l���gID�ɕR�Â����Ă��āA�ق��̃A�v���P�[�V��������̓A�N�Z�X�ł��Ȃ��_�ɒ��ӁB

```
azsphere device app show-quota
```
�R�}���h�Ŋm�F����ƁA�R���|�[�l���gID�ƃX�g���[�W���R�Â����Ă���l�q���m�F�ł���B���̃T���v�������s���āA�v���O�����ŏI�s�ɂ���X�g���[�W�̍폜�֐������s���Ȃ��ꍇ�́A���}�̂悤�ɃX�g���[�W�̎g�p�ʕω����m�F�ł���B

<p align="center">
  <img width="800" src="https://github.com/hayatochigi/images/blob/master/Azure%20Sphere%20Example/show-quota.png">
</p>

## ���s����
<p align="center">
  <img width="800" src="https://github.com/hayatochigi/images/blob/master/Azure%20Sphere%20Example/storage-result.PNG">
</p>

