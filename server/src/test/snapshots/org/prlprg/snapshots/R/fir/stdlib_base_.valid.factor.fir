fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1955226784;
    st `.valid.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1955226784(object) {
  (reg object:*) -+> V { var object:*, reg levels:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg levs:*, reg levs1:V, reg c:L, reg r4:V, reg c1:L, reg anyDuplicated:cls, reg levs2:*, reg levs3:V, reg p1:p(V +), reg r8:V, reg c2:L, reg sprintf:cls, reg d:*, reg d1:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st object = object;
    levels = ldf levels;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn levels(p);
    check L6() else D1();
  D1():
    deopt 3 [r1];
  L6():
    st levs = r1;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r3):
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L10() else L1();
  L7():
    levs = ld levs;
    check L9() else D2();
  L8():
    r2 = dyn base(<sym levs>);
    goto L0(r2);
  D2():
    deopt 6 [levs];
  L1():
    anyDuplicated = ldf anyDuplicated;
    check L13() else D3();
  L9():
    levs1 = force? levs;
    checkMissing(levs1);
    c = `is.character`(levs1);
    goto L0(c);
  L10():
    popenv;
    return "factor levels must be \"character\"";
  D3():
    deopt 16 [];
  L13():
    p1 = prom<V +>{
      levs2 = ld levs;
      levs3 = force? levs2;
      checkMissing(levs3);
      return levs3;
    };
    r8 = dyn anyDuplicated(p1);
    check L14() else D4();
  D4():
    deopt 18 [r8];
  L14():
    st d = r8;
    c2 = `as.logical`(r8);
    if c2 then L15() else L3();
  L3():
    popenv;
    return TRUE;
  L15():
    sprintf = ldf sprintf;
    check L16() else D5();
  D5():
    deopt 21 [];
  L16():
    p2 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    r10 = dyn sprintf("duplicated level [%d] in factor", p2);
    check L17() else D6();
  D6():
    deopt 24 [r10];
  L17():
    popenv;
    return r10;
  }
}