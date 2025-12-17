fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner509519364;
    st `.functions_to_be_ignored_from_usage` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner509519364(package_name) {
  (reg package_name:*) -+> V { var package_name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg package_name1:*, reg package_name2:V, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg r6:V, reg package_name3:*, reg package_name4:V, reg r7:V, reg c2:L, reg r8:V, reg package_name5:*, reg package_name6:V, reg r9:V, reg c3:L, reg r10:V, reg c4:cls, reg r11:V |
    mkenv;
    st package_name = package_name;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    popenv;
    return r1;
  L8():
    package_name1 = ld package_name;
    check L10() else D0();
  L9():
    r = dyn base("<-", "=", <lang if(`==`(package_name, "base"), c("(", "{", "function", "if", "for", "while", "repeat", "Math", "Ops", "Summary", "Complex", "matrixOps"))>, <lang if(`==`(package_name, "utils"), "?")>, <lang if(`==`(package_name, "methods"), "@")>);
    goto L0(r);
  D0():
    deopt 4 [package_name1];
  L10():
    package_name2 = force? package_name1;
    checkMissing(package_name2);
    r2 = `==`(package_name2, "base");
    c = `as.logical`(r2);
    if c then L11() else L1();
  L1():
    goto L3(NULL);
  L3(r6):
    package_name3 = ld package_name;
    check L16() else D2();
  L11():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D2():
    deopt 26 [package_name3];
  L2(r4):
    goto L3(r4);
  L12():
    c1 = ldf c in base;
    r5 = dyn c1("(", "{", "function", "if", "for", "while", "repeat", "Math", "Ops", "Summary", "Complex", "matrixOps");
    check L14() else D1();
  L13():
    r3 = dyn base1("(", "{", "function", "if", "for", "while", "repeat", "Math", "Ops", "Summary", "Complex", "matrixOps");
    goto L2(r3);
  L16():
    package_name4 = force? package_name3;
    checkMissing(package_name4);
    r7 = `==`(package_name4, "utils");
    c2 = `as.logical`(r7);
    if c2 then L17() else L4();
  D1():
    deopt 23 [r5];
  L4():
    goto L5(NULL);
  L5(r8):
    package_name5 = ld package_name;
    check L19() else D3();
  L14():
    goto L2(r5);
  L17():
    goto L5("?");
  D3():
    deopt 34 [package_name5];
  L19():
    package_name6 = force? package_name5;
    checkMissing(package_name6);
    r9 = `==`(package_name6, "methods");
    c3 = `as.logical`(r9);
    if c3 then L20() else L6();
  L6():
    goto L7(NULL);
  L7(r10):
    c4 = ldf c in base;
    r11 = dyn c4("<-", "=", r6, r8, r10);
    check L22() else D4();
  L20():
    goto L7("@");
  D4():
    deopt 43 [r11];
  L22():
    goto L0(r11);
  }
}