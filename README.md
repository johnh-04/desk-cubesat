# desk-cubesat

Un "CubeSat da scrivania" costruito su **Arduino UNO Q**: l'STM32U585 fa da computer di bordo
(sensori, telemetria, radio LoRa, supervisore FDIR), il QRB2210 con Linux fa da payload,
e una stazione a terra decodifica i pacchetti in stile CCSDS ricevuti a 433 MHz.

```
sensori → pacchetto CCSDS → LoRa 433 MHz → modem a terra → decodifica → database → cruscotto
```

## Stato delle tappe

| Tappa | Tag | Contenuto | Stato |
|---|---|---|---|
| 0 | `t0-setup` | Banco, strumenti, prima app, repository | 🟡 in corso |
| 1 | `t1-sensors` | Sensori a ritmo fisso senza bloccare, housekeeping | ⚪ da fare |
| 2 | `t2-bridge` | Dialogo MCU ↔ Linux con il Bridge | ⚪ da fare |
| 3 | `t3-ccsds` | Pacchetti Space Packet CCSDS + CRC-16 | ⚪ da fare |
| 4 | `t4-lora` | Radio LoRa 433 MHz (RFM96W + LilyGO T3) | ⚪ da fare |
| 5 | `t5-ground` | Stazione a terra Python + cruscotto | ⚪ da fare |
| 6 | `t6-obc` | Computer di bordo: modi, telecomandi, eventi | ⚪ da fare |
| 7 | `t7-fdir` | Supervisore FDIR e iniezione di guasti | ⚪ da fare |
| 8 | `t8-zephyr` | Firmware Zephyr nativo | ⚪ da fare |
| 9 | — | Verso un CubeSat vero (facoltativa) | ⚪ da fare |

## Architettura

Vedi [docs/architecture.md](docs/architecture.md).

## Struttura

```
docs/            architettura, ICD dei pacchetti, tabella FDIR
spec/            definizione macchina dei pacchetti (packets.yaml)
apps/            app Arduino App Lab (sketch MCU + Python Linux)
ground/          firmware del modem di terra e stazione a terra Python
firmware-zephyr/ firmware Zephyr nativo (tappa 8)
```

## Hardware

- Arduino UNO Q
- Alimentatore USB-C PD 5 V / 3 A
- Breadboard, ponticelli, potenziometro 10 kΩ
- Moduli LoRa 433 MHz: RFM96W (bordo) e LilyGO T3 LoRa32 (terra)
- RTL-SDR per osservare il segnale

## Licenza

MIT, vedi [LICENSE](LICENSE).
