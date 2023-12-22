package main

import "fmt"

func main() {
	Bulan := [12]string{"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli",
		"Agustus", "September", "Oktober", "November", "Desember"}

	var bulan int = -1
	fmt.Print("Masukkan angka 1 - 12 : ")
	fmt.Scanln(&bulan)
	for !(1 <= bulan && bulan <= 12) {
		fmt.Print("Inputanmu tidak valid\nMohon masukkan angka di rentang 1 - 12 : ")
		fmt.Scanln(&bulan)
	}

	fmt.Printf("Bulan ke-%d ialah %s", bulan, Bulan[bulan-1])
}
