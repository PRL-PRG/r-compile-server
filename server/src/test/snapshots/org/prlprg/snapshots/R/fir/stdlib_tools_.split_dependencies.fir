fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.split_dependencies` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg unlist:cls, reg strsplit:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r10:V, reg p1:p(V +), reg r12:V, reg sub:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r14:V, reg unique:cls, reg sub1:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg sub2:cls, reg x9:*, reg x10:V, reg p5:p(V +), reg r20:V, reg l:*, reg names__:cls, reg r21:V, reg lapply:cls, reg x11:*, reg x12:V, reg p6:p(V +), reg _split_op_version:*, reg _split_op_version1:V, reg p7:p(V +), reg r24:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    unlist = ldf unlist;
    check L14() else D3();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L7() else D1();
  L8():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D1():
    deopt 5 [r2];
  D3():
    deopt 15 [];
  L2(r5):
    popenv;
    return r5;
  L7():
    goto L0(r2);
  L9():
    list = ldf list in base;
    r6 = dyn list();
    check L11() else D2();
  L10():
    r4 = dyn base1();
    goto L2(r4);
  L14():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r10 = dyn strsplit(p, ",");
      return r10;
    };
    r12 = dyn unlist(p1);
    check L15() else D4();
  D2():
    deopt 10 [r6];
  D4():
    deopt 17 [r12];
  L11():
    goto L2(r6);
  L15():
    st x = r12;
    sub = ldf sub;
    check L16() else D5();
  D5():
    deopt 20 [];
  L16():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r14 = dyn sub("[[:space:]]+$", "", p2);
    check L17() else D6();
  D6():
    deopt 24 [r14];
  L17():
    st x = r14;
    unique = ldf unique;
    check L18() else D7();
  D7():
    deopt 27 [];
  L18():
    p4 = prom<V +>{
      sub1 = ldf sub;
      p3 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r16 = dyn sub1("^[[:space:]]*(.*)", "\\1", p3);
      return r16;
    };
    r18 = dyn unique(p4);
    check L19() else D8();
  D8():
    deopt 29 [r18];
  L19():
    st x = r18;
    sub2 = ldf sub;
    check L20() else D9();
  D9():
    deopt 32 [];
  L20():
    p5 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r20 = dyn sub2("^([[:alnum:].]+).*$", "\\1", p5);
    check L21() else D10();
  D10():
    deopt 36 [r20];
  L21():
    l = ld x;
    names__ = ldf `names<-`;
    check L22() else D11();
  D11():
    deopt 38 [r20, l, r20];
  L22():
    r21 = dyn names__(l, NULL, r20);
    check L23() else D12();
  D12():
    deopt 40 [r20, r21];
  L23():
    st x = r21;
    lapply = ldf lapply;
    check L24() else D13();
  D13():
    deopt 43 [];
  L24():
    p6 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p7 = prom<V +>{
      _split_op_version = ld `.split_op_version`;
      _split_op_version1 = force? _split_op_version;
      checkMissing(_split_op_version1);
      return _split_op_version1;
    };
    r24 = dyn lapply(p6, p7);
    check L25() else D14();
  D14():
    deopt 46 [r24];
  L25():
    popenv;
    return r24;
  }
}