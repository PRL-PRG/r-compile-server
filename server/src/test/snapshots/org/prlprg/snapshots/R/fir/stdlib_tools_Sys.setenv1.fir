fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2888872854;
    st `Sys.setenv1` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2888872854(var, value) {
  (reg var:*, reg value:*) -+> V { var var:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Sys_getenv:cls, reg var1:*, reg var2:V, reg p:p(V +), reg r3:V, reg nzchar:cls, reg r4:V, reg r5:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg var3:*, reg var4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg value1:*, reg value2:V, reg as_character:cls, reg r10:V, reg Sys_setenv:cls, reg r11:V |
    mkenv;
    st var = var;
    st value = value;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r5 = `!`(r1);
    c = `as.logical`(r5);
    if c then L9() else L1();
  L4():
    Sys_getenv = ldf `Sys.getenv`;
    check L6() else D0();
  L5():
    r = dyn base(<lang Sys.getenv(var)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L6():
    p = prom<V +>{
      var1 = ld var;
      var2 = force? var1;
      checkMissing(var2);
      return var2;
    };
    r3 = dyn Sys_getenv(p);
    check L7() else D1();
  L9():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D1():
    deopt 5 [r3];
  L2(r7):
    popenv;
    return r7;
  L7():
    nzchar = ldf nzchar in base;
    r4 = dyn nzchar(r3);
    check L8() else D2();
  L10():
    var3 = ld var;
    check L12() else D3();
  L11():
    r6 = dyn base1(<lang Sys.setenv(var, as.character(value))>);
    goto L2(r6);
  D2():
    deopt 7 [r4];
  D3():
    deopt 11 [var3];
  L8():
    goto L0(r4);
  L12():
    var4 = force? var3;
    checkMissing(var4);
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L3(r9):
    Sys_setenv = ldf `Sys.setenv` in base;
    r11 = dyn Sys_setenv(var4, r9);
    check L17() else D6();
  L13():
    value1 = ld value;
    check L15() else D4();
  L14():
    r8 = dyn base2(<sym value>);
    goto L3(r8);
  D4():
    deopt 15 [value1];
  D6():
    deopt 20 [r11];
  L15():
    value2 = force? value1;
    checkMissing(value2);
    as_character = ldf `as.character` in base;
    r10 = dyn as_character(value2);
    check L16() else D5();
  L17():
    goto L2(r11);
  D5():
    deopt 18 [r10];
  L16():
    goto L3(r10);
  }
}