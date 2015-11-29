# Git -- podstawy

![Git logo](http://static.blog.wirone.info/2012/02/Git-logo.png)

# Jak sklonować repo:

```sh
git clone git@github.com:jkowalska/jp.git
```
# Push na Github:

```sh
git status
git add PodstawyGita.md

git status
git commit -m "Update PodstawyGita.md"

git push
```
# Jak zmienić nazwę użytkownika:

```sh
git config --global user.name "jkowalska"
```
# Przesuwanie pliku w GitHubie.

```sh
git mv nazwapliku.c katalog/
```
# Pull request:

```sh
$ git clone https://github.com/tonychacon/blink 1
Cloning into 'blink'...

$ cd blink
$ git checkout -b slow-blink 2
Switched to a new branch 'slow-blink'

$ sed -i '' 's/1000/3000/' blink.ino 3

$ git diff --word-diff 4
diff --git a/blink.ino b/blink.ino
index 15b9911..a6cc5a5 100644
--- a/blink.ino
+++ b/blink.ino
@@ -18,7 +18,7 @@ void setup() {
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  [-delay(1000);-]{+delay(3000);+}               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  [-delay(1000);-]{+delay(3000);+}               // wait for a second
}

$ git commit -a -m 'three seconds is better' 5
[slow-blink 5ca509d] three seconds is better
 1 file changed, 2 insertions(+), 2 deletions(-)

$ git push origin slow-blink 6
Username for 'https://github.com': tonychacon
Password for 'https://tonychacon@github.com':
Counting objects: 5, done.
Delta compression using up to 8 threads.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 340 bytes | 0 bytes/s, done.
Total 3 (delta 1), reused 0 (delta 0)
To https://github.com/tonychacon/blink
 * [new branch]      slow-blink -> slow-blink
```
```sh
1 Clone our fork of the project locally
2 Create a descriptive topic branch
3 Make our change to the code
4 Check that the change is good
5 Commit our change to the topic branch
6 Push our new topic branch back up to our GitHub fork
```

[Git Book](https://git-scm.com/book/en/v2)



