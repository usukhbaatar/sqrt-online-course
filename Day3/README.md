# Салаалсан алгоритм
> Тодорхой нөхцлөөс хамаарч өөр, өөр үйлдэл хийдэг алгоритмыг салаалсан алгоритм гэдэг. Өөрөөх хэлбэл тухайн нөхцөл биелж байхад нэг үйлдэл хийдэг, биелэхгүй байхад өөр үйлдэл хийдэг алгоритм.

## Жиших болон харьцуулах үйлдэл.
Програмчлалын `C++` хэлэнд аливаа хувьсагч эсвэл утгуудыг харьцуулах үйлдэл хийж болдог. Ингэхдээ бидний мэдэх математикийн жиших, харьцуулах үйлдлүүдийг ашигладаг.

| Нэршил | Тэмдэгт  | Жишээ 1  | Жишээ 2  |
|---|---|---|---|
| Бага  | `<`  | `1 < 2 : true`  | `1 < 0 : false`  |
| Их  |  `>` |   `1 > 2 : false`  | `1 > 0 : true`  |
| Бага буюу тэнцүү  |  `<=` | `1 <= 2 : true`  | `1 <= 0 : false`  |
| Их буюу тэнцүү  |  `>=` | `3 >= 2 : true`  | `1 >= 1 : true`  |
| Тэнцүү  | `==`  | `10 == 10 : true`  | `9 == 7 : false`  |
| Ялгаатай  | `!=`  | `10 != 10: false`  | `10 != 11 : true`  |

{ .table .table-bordered }

Эндээс аливаа харьцуулах үйлдлийн үр дүн `true` эсвэл `false` гэсэн хариултын аль нэгээр илэрхийлэгдэж болно. Үүнийг програмчлалын `C++` хэлэнд `false: 0, true: 1` гэсэн утгаар төлөөлүүлдэг.

Дээрх үйлдлүүдийг үгээр тайлбарлан бичвэл
1. `a < b`: `a` тоо `b` тооноос бага уу?
2. `a > b`: `a` тоо `b` тооноос их үү?
3. `a <= b`: `a` тоо `b` тооноос ихгүй юу?, `a` тоо `b` тооноос бага буюу тэнцүү юу?
4. `a >= b`: `a` тоо `b` тооноос багагүй юу?, `a` тоо `b` тооноос их буюу тэнцүү юу?
5. `a == b`: `a` тоо `b` тоотой тэнцүү юу?
6. `a != b`: `a` тоо `b` тооноос ялгаатай юу?

`a = 10, b = 10` байсан бол дээрх асуултуудын `3, 4, 5` дугаартай асуултууд `true`, `1, 2, 6` дугаартай асуултууд `false` гэсэн хариулттай байна.
Харин `a = 10, b = 20` байсан бол асуултуудын `1, 3, 6` дугаартай асуултууд `true`, `2, 4, 5` дугаартай асуултууд `false` гэсэн хариулттай байна.

Дээрх асуултуудыг эсрэгцүүлбэл:
- `1` эсрэг `4`
- `2` эсрэг `3`
- `5` эсрэг `6`
байна.

## Boolean (bool) өгөгдлийн төрөл
Мөн `true` эсвэл `false` гэсэн хоёр утгуудыг авч чаддаг өгөгдлийн төрөл гэж байдаг ба түүнийг `bool` гэж нэрлэдэг. Энэ нь тийм эсвэл үгүй гэсэн хариулт бүхий асуултын хариултыг хадгалах зориулалттай өгөгдлийн төрөл гэж ойлгож болно. Тэгвэл `bool` өгөгдлийн төрлөөс `true` эсвэл `false` гэсэн хоёр утгын аль нэгийг хадгалах боломжтой хувьсагч заралж болдог.

Жишээлбэл:
```cpp
bool x = true;
```
эсвэл
```cpp
bool y = false;
```
гэх мэт.

Мөн энэ төрлийн хувьсагчид бидний өмнө тодорхойлсон жиших, харьцуулах үйлдлүүдийн үр дүнг хадгалж болдог.
Дараах кодын хэсгийг ажиглаарай:
```cpp
int x = 10, y = 20;
bool x = (a > b);  // false
bool y = (a <= y); // true
bool z = (a != b); // true
cout << x << ", " << y << ", " << z;  // үр дүн: 0, 1, 1
```

## Логик холбоос
Монгол хэлэнд бөгөөд, ба, эсвэл гэсэн логик холбоос үгүүд байдаг. Үүнтэй яг адилхан англи хэлэнд `and, or` гэсэн логик холбоос үгүүд байдаг гэдгийг бид мэднэ.

Эдгээр холбоос үгүүдээр олон логик өгүүлбэрүүдийг холбож ярихад ч мөн бид төвөггүй ойлгодог.

Жишээ болгож Баяраа $28$ настай эрэгтэй ба дараах ажлийн заруудад тохирох үгүйг шалгацгаая.

| Зар | Тохирох эсэх | Нөхцөл |
|-----|--------------|--------|
| Насанд хүрсэн бөгөөд эрэгтэй хүнийг ... | Тийм | `age >= 10 and gender="male"` |
| Ядаж 38 нас хүрсэн хүнийг ... | Тийм | `age >= 38` |
| Яг 37 настай хүнийг ... | Үгүй | `age == 37` |
| Эрэгтэй эсвэл 40 нас хүрсэн эмэгтэй хүнийг ... | Тийм | `gender == "male" or (gender == "female" and age > 40)` |
| 25 хүртэлх насны охид залуусыг ... | Үгүй | `age <= 25` |

{ .table .table-bordered }

Үүнтэй яг адилхан логик үйлдлүүдийг холбох логик холбоос байдаг.

| Холбоос | Тайлбар (mn) | Тайлбар (en) |
| ------- | ------------ | ------------ |
| `&&`    | ба, бөгөөд   | `and`        |
| `\|\|`  | эсвэл, буюу  | `or`         |

{ .table .table-bordered }

Жишээлбэл
```cpp
int a = 10, b = 20, c = 30;
bool x = (a == 10) && (b > 15);               // false
bool y = (a + b == c) || a < 10;              // true
bool z = (a == 10) && (b == 20) && (c == 40); // false
cout << x << ", " << y << ", " << z;          // үр дүн: 0, 1, 0
```

Логик холбоосуудын утгын хүснэгтийн байгуулбал

### Эсвэл, буюу, or
| Логик өгүүлбэр   | Үр дүн  |
| ---------------- | ------- |
| `false or false` | `false` |
| `false or true`  | `true`  |
| `true or false`  | `true`  |
| `true or true`   | `true`  |

{ .table .table-bordered }

### Ба, бөгөөд, and
| Логик өгүүлбэр    | Үр дүн  |
| ----------------- | ------- |
| `false and false` | `false` |
| `false and true`  | `false` |
| `true and false`  | `false` |
| `true and true`   | `true`  |

{ .table .table-bordered }

## Нөхцөл шалгах үйлдэл
> Програмчлалын `C++` хэл дээр бичсэн програм ажиллаж байх үедээ нөхцлүүдийг шалгаад шийдвэр гаргаж ялгаатой үйлдлүүдийг хийж болох ба ингэхдээ `if` түлхүүр үгийг ашигладаг.

### if
```cpp
	// үйлдэл 0.
	if (<асуулт>) {
		// үйлдэл 1.
	}
	// үйлдэл 2.
	// үйлдэл 3.
```
Дээрх кодын ажиллах дарааллыг үгээр илэрхийлвэл
- `үйлдэл 0.`
- асуулт
	- Хэрэв асуулт `тийм` гэсэн хариулттай бол `үйлдэл 1.`
- `үйлдэл 2.`
- `үйлдэл 3.`

### if, else
```cpp
	// үйлдэл 0.
	if (<асуулт>) {
		// үйлдэл 1.
	} else {
		// үйлдэл 2.
	}
	// үйлдэл 3.
	// үйлдэл 4.
```
Дээрх кодын ажиллах дарааллыг үгээр илэрхийлвэл
- `үйлдэл 0.`
- асуулт
	- Хэрэв асуулт `тийм` гэсэн хариулттай бол `үйлдэл 1.`
	- Хэрэв асуулт `үгүй` гэсэн хариулттай бол `үйлдэл 2.`
- `үйлдэл 3.`
- `үйлдэл 4.`

### if, else if
```cpp
	// үйлдэл 0.
	if (<асуулт 1>) {
		// үйлдэл 1.
	} else if (<асуулт 2>) {
		// үйлдэл 2.
	} else {
		// үйлдэл 3.
	}
	// үйлдэл 4.
	// үйлдэл 5.
```
Дээрх кодын ажиллах дарааллыг үгээр илэрхийлвэл
- `үйлдэл 0.`
- асуулт 1
	- Хэрэв асуулт 1 `тийм` гэсэн хариулттай бол `үйлдэл 1.` хийгээд асуулт 2-ыг алгасна.
	- Хэрэв асуулт 1 `үгүй` гэсэн хариулттай бол асуулт 2-ыг асуух ба хариулт нь `тийм` бол `үйлдэл 2.`
	- Хэрэв асуулт 1 болон асуулт 2 бүгд `үгүй` гэсэн хариулттай бол `үйлдал 3`
- `үйлдэл 4.`
- `үйлдэл 5.`

Жишээ болгож дараах кодыг авч үзье.

```cpp
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a > 0) {
		cout << "a is positive number!" << endl;
	} else {
		cout << "a isn't positive number!" << endl;
	}
	cout << "Bye!";
	return 0;
}
```
Дээрх програмыг мөр мөрөөр нь тайлбарлан бичвэл.
1. Оролт гаралтын урсгалтай ажиллах санг холболоо.
2. Стандарт орчинг тохирууллаа.
3. Програмын эхлэл `эх` функцыг тодорхойллоо.
4. Бүхэл тоо хадгалах (`int` төрлийн) `a` хувьсагчийг зарлалаа.
5. Стандарт оролтоос орж ирэх утгыг `a` хувьсагчид утга онооно.
6. `a` хувьсагчийн утга `0`-ээс их үү? гэсэн асуултыг асууна.
	- Хэрэв тийм бол `a is positive number!` гэж хэвлээд дараагийн мөрөнд шилжинэ (endl).
	- Үгүй бол `a isn't positive number!` гэж хэвлээд дараагийн мөрөнд шилжинэ
- `Bye!` гэдэг үгийг хэвлэнэ.
- Програм дуусна.

Програмыг оролт `10` бол үр дүн:
```plaintext
a is positive number!
Bye!
```
Програмыг оролт `-1` бол үр дүн:
```plaintext
a isn't positive number!
Bye!
```
Програмыг оролт `0` бол үр дүн ямар байх вэ гэдэг а гэдгийг уншигч танд үлдээе.

## Үгүйсгэл
> Аливаа логик утга болон асуултыг үгүйсгэж болдог ба ингэхдээ өмнө нь `!` тавьдаг. Би 17 насай биш гэдэг өгүүлбэрийг `!(age == 17)` гэж илэрхийлж болно гэсэн үг. Ерөнхийлбөл `!true == false, !false == true` юм.

```cpp
int x = 10, y = 20;
if (!(x > y)) {
	cout << "Hello, ";
}
cout << "Bye!";
```plaintext
кодын үр дүн
```
Hello, Bye!
```
байна.
Учир нь `x > y` гэсэн асуулт нь `10 > 20` байх ба худлаа гэсэн үр дүнтэй байх ч үгүйсгээд үнэн гэсэн үр дүнтэй болно.
