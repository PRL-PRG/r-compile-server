fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1508225857;
    st `.Rd_find_nodes_with_tags` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1508225857(x, tags) {
  (reg x:*, reg tags:*) -+> V { var x:*, var tags:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg r3:cls, reg lapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg recurse:*, reg recurse1:V, reg p1:p(V +), reg r6:V, reg nodes:*, reg nodes1:V |
    mkenv;
    st x = x;
    st tags = tags;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st nodes = r1;
    r3 = clos inner3708401697;
    st recurse = r3;
    lapply = ldf lapply;
    check L4() else D1();
  L1():
    list = ldf list in base;
    r2 = dyn list();
    check L3() else D0();
  L2():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 9 [];
  L3():
    goto L0(r2);
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r6 = dyn lapply(p, p1);
    check L5() else D2();
  D2():
    deopt 12 [r6];
  L5():
    nodes = ld nodes;
    check L6() else D3();
  D3():
    deopt 13 [nodes];
  L6():
    nodes1 = force? nodes;
    checkMissing(nodes1);
    popenv;
    return nodes1;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg e1:*, reg e2:V, reg attr:cls, reg r4:V, reg tags:*, reg tags1:V, reg r5:V, reg any:cls, reg r6:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg nodes:*, reg nodes1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg e3:*, reg e4:V, reg list:cls, reg r11:V, reg c1:cls, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg e5:*, reg e6:V, reg is_list:cls, reg r16:V, reg c2:L, reg lapply:cls, reg e7:*, reg e8:V, reg p:p(V +), reg recurse:*, reg recurse1:V, reg p1:p(V +), reg r19:V |
    mkenv;
    st e = e;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    c = `as.logical`(r1);
    if c then L16() else L2();
  L8():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L9():
    r = dyn base(<lang `==`(attr(e, "Rd_tag"), tags)>);
    goto L0(r);
  L1(r3):
    tags = ld tags;
    check L14() else D2();
  L2():
    goto L5();
  L5():
    sym4 = ldf `is.list`;
    base4 = ldf `is.list` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L26() else L27();
  L10():
    e1 = ld e;
    check L12() else D0();
  L11():
    r2 = dyn base1(<sym e>, "Rd_tag");
    goto L1(r2);
  L16():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  D0():
    deopt 4 [e1];
  D2():
    deopt 8 [r3, tags];
  L3(r8):
    sst nodes = r8;
    goto L5();
  L6(r15):
    c2 = `as.logical`(r15);
    if c2 then L30() else L7();
  L12():
    e2 = force? e1;
    checkMissing(e2);
    attr = ldf attr in base;
    r4 = dyn attr(e2, "Rd_tag");
    check L13() else D1();
  L14():
    tags1 = force? tags;
    checkMissing(tags1);
    r5 = `==`(r3, tags1);
    any = ldf any in base;
    r6 = dyn any(r5);
    check L15() else D3();
  L17():
    nodes = ld nodes;
    check L19() else D4();
  L18():
    r7 = dyn base2(<sym nodes>, <lang list(e)>);
    goto L3(r7);
  L26():
    e5 = ld e;
    check L28() else D8();
  L27():
    r14 = dyn base4(<sym e>);
    goto L6(r14);
  D1():
    deopt 8 [r4];
  D3():
    deopt 12 [r6];
  D4():
    deopt 15 [nodes];
  D8():
    deopt 30 [e5];
  L7():
    invisible.0();
    popenv;
    return NULL;
  L13():
    goto L1(r4);
  L15():
    goto L0(r6);
  L19():
    nodes1 = force? nodes;
    checkMissing(nodes1);
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L28():
    e6 = force? e5;
    checkMissing(e6);
    is_list = ldf `is.list` in base;
    r16 = dyn is_list(e6);
    check L29() else D9();
  L30():
    lapply = ldf lapply;
    check L31() else D10();
  D9():
    deopt 33 [r16];
  D10():
    deopt 35 [];
  L4(r10):
    c1 = ldf c in base;
    r12 = dyn c1(nodes1, r10);
    check L24() else D7();
  L20():
    e3 = ld e;
    check L22() else D5();
  L21():
    r9 = dyn base3(<sym e>);
    goto L4(r9);
  L29():
    goto L6(r16);
  L31():
    p = prom<V +>{
      e7 = ld e;
      e8 = force? e7;
      checkMissing(e8);
      return e8;
    };
    p1 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r19 = dyn lapply(p, p1);
    check L32() else D11();
  D5():
    deopt 19 [e3];
  D7():
    deopt 24 [r12];
  D11():
    deopt 38 [r19];
  L22():
    e4 = force? e3;
    checkMissing(e4);
    list = ldf list in base;
    r11 = dyn list(e4);
    check L23() else D6();
  L24():
    goto L3(r12);
  L32():
    popenv;
    return r19;
  D6():
    deopt 22 [r11];
  L23():
    goto L4(r11);
  }
}