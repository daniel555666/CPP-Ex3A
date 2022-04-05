<div dir="rtl" lang="he">

# מחשבון מטריצות - שלב א

במהלך תואר במדעי המחשב, נדרשים הסטודנטים לעבור קורס באלגברה לינארית. ככל הנראה, כבר בשנה הבאה תצטרכו לבנות מטריצות משלכם שיעזרו לכם לכתוב תכניות העוסקות בלמידת מכונה, ניווט רובוטים אוטונומיים, בינה מלאכותית, ועוד.

הגדירו מחלקה בשם `Matrix` עם הפעולות הבאות (ראו בקובץ המצורף [Demo.cpp](Demo.cpp)):

* שישה אופרטורים חשבוניים: חיבור (+) הוספה (+=) פלוס אונרי (+), ושלושת האופרטורים המקבילים לחיסור (-). כאמור, חיבור/חיסור של שתי מטריצות מוגדר רק על מטריצות מאותו סדר גודל nXm. ניסיון לחבר/לחסר שתי מטריצות שלא מקיימות תנאי זה יגרום לזריקת שגיאה.
* שישה אופרטורי השוואה: גדול, גדול-או-שווה, קטן, קטן-או-שווה, שווה, לא-שווה. לשם מטלה זו כללי השוואת מטריצות הם כדלקמן:  
   1. מטריצות יקראו שוות אם ורק אם כל האיברים בהן שווים.
   2. מטריצה A גדולה ממטריצה B אם ורק אם סכום איברי A גדול מסכום איברי B.

   יתר האופרטורים העוסקים בהשוואה מוגדרים באופן טבעי הנגזר משני החוקים הנ"ל. כאמור, גם פעולות ההשוואה מוגדרות רק עבור מטריצות מאותו סדר גודל וניסיון להשוות מטריצות שלא מקיימות תנאי זה יגרום לזריקת שגיאה.
* הגדלה ב-1 (++) והקטנה ב-1 (--) לפני ואחרי המספר. פעולה זו תגדיל או תקטין ב-1 את כל אברי המטריצה.
* הכפלה בסקלר ממשי (`double`) באופן הטבעי והמוכר לכם מאלגברה לינארית.

* הכפלת מטריצה במטריצה, באופן הטבעי והמוכר לכם מאלגברה לינארית. ניסיון לבצע את פעולת כפל מטריצות על מטריצות בינהן הכפל לא מוגדר תגרום לזריקת שגיאה.
* אופרטור קלט ואופרטור פלט.

הערות לגבי קלט ופלט:

* פורמט הפלט של מטריצה הוא: סוגריים מרובעים עבור כל שורה במטריצה, אברי השורה מופרדים בינהם ברווח יחיד. השורות מופרדות בינהן ע"י שבירת שורה (התו `'n\'`).
* פורמט הקלט הוא דומה אבל השורות מופרדות בינהן בפסיק ורווח בודד.


בשלב א עליכם לכתוב: 

* קובץ כותרת הכולל את כל הפונקציות הדרושות (ללא מימוש). שימו לב: הכותרות צריכות להיות נכונות בהתאם למה שנלמד בהרצאות - מומלץ לחזור על החומר לפני שמתחילים לכתוב.
* בדיקות מקיפות לכל הפונקציות הדרושות.



כיתבו את כל הקבצים הדרושים כך שהפקודות הבאות יעבדו ללא שגיאות:

<div dir='ltr'>

    make demo && ./demo
	make test && ./test

</div>

מומלץ גם להריץ `make tidy`.

אין לשנות את הקבצים הנתונים, אלא רק להוסיף קבצים חדשים.

יש לפתור את המטלה באופן עצמאי.

* מותר להתייעץ עם סטודנטים אחרים או לחפש מידע באינטרנט;
אסור להעתיק קטעי-קוד שלמים מסטודנטים אחרים או מהאינטרנט.
* יש לדווח על כל עזרה שקיבלתם, מסטודנטים אחרים או מהאינטרנט, בהתאם ל[תקנון היושר של המחלקה](https://www.ariel.ac.il/wp/cs/wp-content/uploads/sites/88/2020/08/Guidelines-for-Academic-Integrity.pdf).

</div>
#   C P P - E x 3 A  
 