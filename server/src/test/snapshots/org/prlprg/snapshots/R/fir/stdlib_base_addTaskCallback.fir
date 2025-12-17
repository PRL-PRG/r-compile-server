fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1855615084;
    st addTaskCallback = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1855615084(f, data, name) {
  (reg f:*, reg data:*, reg name:*) -+> V { var f:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg f1:*, reg f2:V, reg is_function:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg _C_R_addTaskCallback:*, reg _C_R_addTaskCallback1:V, reg f3:*, reg f4:V, reg data1:*, reg data2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg _C_R_addTaskCallback4:V, reg f7:V, reg data5:V, reg r11:V, reg missing:cls, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg _C_R_addTaskCallback7:V, reg f10:V, reg data8:V, reg r17:V, reg r18:V, reg name1:*, reg name2:V, reg as_character:cls, reg r19:V, reg vargs:dots, reg r20:V, reg val:*, reg val1:V, reg r21:V |
    mkenv;
    st f = f;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    name_isMissing = missing.0(name);
    if name_isMissing then L1() else L2(name);
  L1():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L2(p);
  L2(name_orDefault):
    st name = name_orDefault;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L3(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L13() else L4();
  L9():
    f1 = ld f;
    check L11() else D0();
  L10():
    r2 = dyn base(<sym f>);
    goto L3(r2);
  D0():
    deopt 2 [f1];
  L4():
    goto L5();
  L5():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L11():
    f2 = force? f1;
    checkMissing(f2);
    is_function = ldf `is.function` in base;
    r4 = dyn is_function(f2);
    check L12() else D1();
  L13():
    stop = ldf stop;
    check L14() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 8 [];
  L6(r9):
    st val = r9;
    val = ld val;
    check L28() else D9();
  L12():
    goto L3(r4);
  L14():
    r6 = dyn stop("handler must be a function");
    check L15() else D3();
  L17():
    _C_R_addTaskCallback = ld `.C_R_addTaskCallback`;
    check L19() else D4();
  L18():
    r8 = dyn base1(<sym .C_R_addTaskCallback>, <sym f>, <sym data>, <lang `!`(missing(data))>, <lang as.character(name)>);
    goto L6(r8);
  D3():
    deopt 10 [r6];
  D4():
    deopt 14 [_C_R_addTaskCallback];
  D9():
    deopt 28 [val];
  L15():
    goto L5();
  L19():
    _C_R_addTaskCallback1 = force? _C_R_addTaskCallback;
    checkMissing(_C_R_addTaskCallback1);
    f3 = ld f;
    check L20() else D5();
  L28():
    val1 = force? val;
    checkMissing(val1);
    r21 = `+`(val1, 1);
    popenv;
    return r21;
  D5():
    deopt 15 [_C_R_addTaskCallback1, f3];
  L20():
    f4 = force? f3;
    checkMissing(f4);
    data1 = ld data;
    check L21() else D6();
  D6():
    deopt 16 [_C_R_addTaskCallback1, f4, data1];
  L21():
    data2 = force? data1;
    checkMissing(data2);
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L7(_C_R_addTaskCallback4, f7, data5, r11):
    r13 = `!`(r11);
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L22():
    missing = ldf missing in base;
    r12 = dyn missing(<sym data>);
    goto L7(_C_R_addTaskCallback1, f4, data2, r12);
  L23():
    r10 = dyn base2(<sym data>);
    goto L7(_C_R_addTaskCallback1, f4, data2, r10);
  L8(_C_R_addTaskCallback7, f10, data8, r17, r18):
    vargs = dots[f10, data8, r17, r18];
    r20 = `.Call`(_C_R_addTaskCallback7, vargs, <missing>);
    goto L6(r20);
  L24():
    name1 = ld name;
    check L26() else D7();
  L25():
    r16 = dyn base3(<sym name>);
    goto L8(_C_R_addTaskCallback4, f7, data5, r13, r16);
  D7():
    deopt 22 [_C_R_addTaskCallback4, f7, data5, r13, name1];
  L26():
    name2 = force? name1;
    checkMissing(name2);
    as_character = ldf `as.character` in base;
    r19 = dyn as_character(name2);
    check L27() else D8();
  D8():
    deopt 25 [_C_R_addTaskCallback4, f7, data5, r13, r19];
  L27():
    goto L8(_C_R_addTaskCallback4, f7, data5, r13, r19);
  }
}