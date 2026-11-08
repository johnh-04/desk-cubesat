# t0-hello

Prima app: il LED rosso lampeggia (200 ms acceso, 800 ms spento) e l'MCU scrive
`tick` sulla console Monitor; il lato Linux stampa `linux: vivo` ogni 5 s.

## Come provarla

1. In App Lab crea una nuova app chiamata `t0-hello`.
2. Sostituisci `sketch/sketch.ino` e `python/main.py` con quelli di questa cartella.
3. Premi **Run** e guarda le due console.
4. Copia qui anche `app.yaml` e `sketch/sketch.yaml` generati da App Lab, così l'app è completa nel repo.

Da riga di comando, via SSH sulla scheda:

```bash
arduino-app-cli app start ~/ArduinoApps/t0-hello
arduino-app-cli monitor
```
