# Iot-pushbutton-esp32

Alat untuk menyalakan perangkat elektronik dengan integrasi IoT

perangkat yang digunakan:
1.Esp 32
2.relay 5v
3.kabel jumper
4.blynk desktop
5.blynk mobile

source code ada di repo ini.

Cara Setting di Blynk
1.Masuk pada tab Developer Zone > My Templates, +New Templates
  Beri nama,pilih Hardwaew,pilih Conection,tambahkan Deskripsi(Opsional) Save.
2.Masuk pada tab Devices
  +New Devices > From Templates, Pilih Templates yang telah dibuat diatas. > Create
3.Copy Templates ID
4.Masuk pada DataStreams
  +New Datastreams,Sesuaikan dengan kebutuhan.
  berinama pin,pilih pin yang akan digunakan(sesuaian dengan hardware yang digunakan),Pilih PinMode
5.Masuk pada pilihan Web Dashboard
  Seting sesuai dengan kegunaan hardware.
  klik icon gir pada fungsi yang di gunakan
  pilih datastreams yang telah dibuat,Off Value 1, On Value 0, save
  > Save and aply
6.Buat Sketch seperti source code.

