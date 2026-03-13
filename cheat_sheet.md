# WSL & Docker 環境構築チートシート

## 1. Dockerの起動と動作確認手順
VS Codeを開き、WSLに接続されたターミナルで以下のコマンドを順に実行する。

- **Dockerのデーモン（システム）を起動する**
  ```bash
  sudo service docker start
  ```
  ※ここでWSLのパスワードを求められる。

- **Dockerが起動しているか状態を確認する**
  ```bash
  sudo service docker status
  ```
  ※ `* Docker is running` と表示されればOK。

- **テスト用コンテナ（hello-world）を実行する**
  ```bash
  docker run hello-world
  ```
  ※ `Hello from Docker!` と表示されれば環境構築・動作確認は完了！

---

## 2. 【トラブルシューティング】WSLのパスワードを忘れた場合
`sudo` コマンド実行時にパスワードを忘れてしまった場合は、Windows側からroot権限で入り、パスワードを強制的に再設定する。

1. Windowsのスタートメニューから「**Windows PowerShell**」を開く。
2. 以下のコマンドで、rootユーザー（管理者）としてWSLに入る。
  ```powershell
  wsl -u root
  ```
3. ターミナルが `root@~` に変わったら、以下のコマンドで指定ユーザーのパスワードを変更する。
  ```bash
  passwd <自分のユーザー名>
  ```
4. 新しいパスワードの入力を求められるので入力し、Enter。（※セキュリティ上、画面には何も表示されないので注意）
5. 確認のためにもう一度同じパスワードを入力し、Enter。
6. `passwd: password updated successfully` と表示されたら成功。
7. 以下のコマンドでPowerShellを閉じる。
  ```bash
  exit
  ```
8. VS Codeのターミナルに戻り、新しいパスワードで `sudo` コマンドを実行する。