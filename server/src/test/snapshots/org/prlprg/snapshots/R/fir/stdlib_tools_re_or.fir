fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner611699407;
    st re_or = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner611699407(s, group) {
  (reg s:*, reg group:*) -+> V { var s:*, var group:*, reg group_isMissing:L, reg group_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg s1:*, reg s2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg group1:*, reg group2:V, reg c1:L, reg re_group:cls, reg paste:cls, reg s3:*, reg s4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg paste1:cls, reg s5:*, reg s6:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st s = s;
    group_isMissing = missing.0(group);
    if group_isMissing then L0(TRUE) else L0(group);
  L0(group_orDefault):
    st group = group_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L2();
  L4():
    s1 = ld s;
    check L6() else D0();
  L5():
    r = dyn base(<sym s>);
    goto L1(r);
  D0():
    deopt 2 [s1];
  L2():
    group1 = ld group;
    check L12() else D4();
  L6():
    s2 = force? s1;
    checkMissing(s2);
    length = ldf length in base;
    r2 = dyn length(s2);
    check L7() else D1();
  L8():
    character = ldf character;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 10 [group1];
  L7():
    goto L1(r2);
  L9():
    r4 = dyn character();
    check L10() else D3();
  L12():
    group2 = force? group1;
    checkMissing(group2);
    c1 = `as.logical`(group2);
    if c1 then L13() else L3();
  D3():
    deopt 9 [r4];
  L3():
    paste1 = ldf paste;
    check L17() else D7();
  L10():
    popenv;
    return r4;
  L13():
    re_group = ldf re_group;
    check L14() else D5();
  D5():
    deopt 13 [];
  D7():
    deopt 17 [];
  L14():
    p1 = prom<V +>{
      paste = ldf paste;
      p = prom<V +>{
        s3 = ld s;
        s4 = force? s3;
        checkMissing(s4);
        return s4;
      };
      r6 = dyn paste[, collapse](p, "|");
      return r6;
    };
    r8 = dyn re_group(p1);
    check L15() else D6();
  L17():
    p2 = prom<V +>{
      s5 = ld s;
      s6 = force? s5;
      checkMissing(s6);
      return s6;
    };
    r10 = dyn paste1[, collapse](p2, "|");
    check L18() else D8();
  D6():
    deopt 15 [r8];
  D8():
    deopt 21 [r10];
  L15():
    popenv;
    return r8;
  L18():
    popenv;
    return r10;
  }
}