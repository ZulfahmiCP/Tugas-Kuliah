package main

import "fmt"

func main() {
	var BilanganA, BilanganB float64
	fmt.Scanln(&BilanganA)
	fmt.Scan(&BilanganB)

	fmt.Println(BilanganA + BilanganB)
	fmt.Println(BilanganA - BilanganB)
	fmt.Println(BilanganA * BilanganB)
	fmt.Println(BilanganA / BilanganB)
}
