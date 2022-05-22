Se da urmatoarea structura de clase:

class Piesa {
	protected: char cod[4];
		     int pret;
}
din care sunt derivate clasele Piesa_A care are in plus atributul int gauri, si Piesa_B care are in plus atributul culoare.

Piesele de tip A si B sunt folosite pentru a realiza un Ansamblu (agregare) in felul urmator: se va folosi o piesa de tip A (prelucrata prin gaurire) – care are un anumit nr. de gauri si o serie de piese de tip B (prelucrate prin vopsire)  care vor fi montate in gaurile piesei de tip A.
 
Se realizeaza un vector care sa contina obiecte de tip Piesa_A, Piesa_B si Ansamblu, care este apoi sortat dupa pret si afisat in fisierul evidenta.out

