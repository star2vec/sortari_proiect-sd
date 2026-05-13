# ⋆.˚✮ DOCUMENTAȚIE TESTE ✮˚.⋆ 

. ݁₊ ⊹ .link teste zip: https://www.transfernow.net/dl/20260513Ktrehd4K ݁  ݁ . ⊹ ₊ ݁.

ᯓ★ TEST #1
⚝ random
⚝ baseline pentru performanța medie

ᯓ★ TEST #2a
⚝ numere ordonate crescător (cu salturi aleatorii)
⚝ best case: insertion, bubble, gnome (O(n))
⚝ worst case: quicksort cu pivot la capăt

ᯓ★ TEST #2b
⚝ numere ordonate descrescător (cu salturi aleatorii)
⚝ worst case: insertion, bubble, gnome (O(n^2))
⚝ worst case: patience (va crea foarte multe stive => mult spațiu ocupat)

ᯓ★ TEST #3
⚝ numere egale
⚝ poate fi worst case pentru anumite implementări (cum ar fi unele de la quicksort)

ᯓ★ TEST #4
⚝ numere aproape egale (foarte puține valori diferite)
⚝ poate fi worst case pentru anumite implementări (cum ar fi unele de la quicksort)

ᯓ★ TEST #5
⚝ numere aproape sortate
⚝ evidențiază algoritmii care se adaptează, cum ar fi insertion sort (în plus, nu această caracteristică nu ar fi deloc relevantă pentru agoritmi ca și radix, pentru care nu ar conta acest avantaj)
⚝ rezultate bune pentru algoritmi care preferă numere sortate crescător, ca și bubble sort

ᯓ★ TEST #6
⚝ blocuri de elemente sortate descrescător
⚝ caz interesant pentru algoritmi bazați pe interclasare, cum ar fi mergesort (care ar funcționa eficient)

ᯓ★ TEST #7
⚝ numerele sortate de la 1 la n
⚝ baseline bun pentru a verifica timpul minim de execuție 

ᯓ★ TEST #8
⚝ valori care alternează drastic
⚝ afectează branch prediction => va încetini anumiți algoritmi pentru că condițiile de comparare nu o să mai fie prezise corect de CPU

ᯓ★ TEST #9
⚝ va face ca pivoții de la quicksort să fie aleși prost în anumite implementări => va evidenția diferența dintre quicksort și introsort (care se adaptează)
⚝ worst case quicksort

ᯓ★ TEST #10
⚝ blocuri de elemente egale
⚝ great case pentru algoritmi bazați pe interclasare, cum ar fi mergesort
⚝ great case pentru quicksort 3-way partitioning, bad case pentru quickosrt 2-way implementat prost

ᯓ★ TEST #11
⚝ numere cu primii biți identici
⚝ worst case pentru radix

ᯓ★ TEST #12
⚝ “munte”: elementele cresc, după descresc (de la mijloc aici)
⚝ caz interesant pentru alegerile de pivoți (mai ales quicksort cu pivot la mijloc)
⚝ worst case mergesort
⚝ nu are efecte asupra heapsortului



