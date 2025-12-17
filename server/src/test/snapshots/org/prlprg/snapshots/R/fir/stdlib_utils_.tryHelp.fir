fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner126442589;
    st `.tryHelp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner126442589(topic, package) {
  (reg topic:*, reg package:*) -+> V { var topic:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, reg tryCatch:cls, reg do_call:cls, reg help:*, reg help1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg topic1:*, reg topic2:V, reg package1:*, reg package2:V, reg list:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg identity:*, reg identity1:V, reg p3:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg h:*, reg h1:V, reg inherits:cls, reg r11:V, reg c:L, reg c1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg c5:L, reg r13:V, reg h2:*, reg h3:V, reg length:cls, reg r14:V, reg r15:V, reg c6:L, reg c7:V, reg c9:L, reg h4:*, reg h5:V |
    mkenv;
    st topic = topic;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    tryCatch = ldf tryCatch;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p2 = prom<V +>{
      do_call = ldf `do.call`;
      p = prom<V +>{
        help = ld help;
        help1 = force? help;
        checkMissing(help1);
        return help1;
      };
      p1 = prom<V +>{
        sym = ldf list;
        base = ldf list in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        topic1 = ld topic;
        topic2 = force? topic1;
        checkMissing(topic2);
        package1 = ld package;
        package2 = force? package1;
        checkMissing(package2);
        list = ldf list in base;
        r3 = dyn list(topic2, package2);
        goto L0(r3);
      L2():
        r1 = dyn base[, package](<sym topic>, <sym package>);
        goto L0(r1);
      };
      r5 = dyn do_call(p, p1);
      return r5;
    };
    p3 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r8 = dyn tryCatch[, error](p2, p3);
    check L6() else D1();
  D1():
    deopt 5 [r8];
  L6():
    st h = r8;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L1(r10):
    c = `as.logical`(r10);
    if c then L2(c) else L11();
  L7():
    h = ld h;
    check L9() else D2();
  L8():
    r9 = dyn base1(<sym h>, "error");
    goto L1(r9);
  D2():
    deopt 9 [h];
  L2(c1):
    c9 = `as.logical`(c1);
    if c9 then L17() else L4();
  L9():
    h1 = force? h;
    checkMissing(h1);
    inherits = ldf inherits in base;
    r11 = dyn inherits(h1, "error", FALSE);
    check L10() else D3();
  L11():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  D3():
    deopt 14 [r11];
  L3(c5, r13):
    r15 = `!`(r13);
    c6 = `as.logical`(r15);
    c7 = `||`(c5, c6);
    goto L2(c7);
  L4():
    h4 = ld h;
    check L19() else D6();
  L10():
    goto L1(r11);
  L12():
    h2 = ld h;
    check L14() else D4();
  L13():
    r12 = dyn base2(<sym h>);
    goto L3(c, r12);
  L17():
    popenv;
    return NULL;
  D4():
    deopt 17 [c, h2];
  D6():
    deopt 25 [h4];
  L14():
    h3 = force? h2;
    checkMissing(h3);
    length = ldf length in base;
    r14 = dyn length(h3);
    check L15() else D5();
  L19():
    h5 = force? h4;
    checkMissing(h5);
    popenv;
    return h5;
  D5():
    deopt 20 [c, r14];
  L15():
    goto L3(c, r14);
  }
}