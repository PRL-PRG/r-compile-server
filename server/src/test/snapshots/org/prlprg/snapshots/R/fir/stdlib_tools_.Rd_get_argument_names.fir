fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_argument_names` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg _Rd_get_section:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg character:cls, reg r6:V, reg _Rd_get_item_tags:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r10:V, reg unlist:cls, reg strsplit:cls, reg txt:*, reg txt1:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg gsub:cls, reg txt2:*, reg txt3:V, reg p4:p(V +), reg r16:V, reg gsub1:cls, reg txt4:*, reg txt5:V, reg p5:p(V +), reg r18:V, reg trimws:cls, reg txt6:*, reg txt7:V, reg p6:p(V +), reg r20:V |
    mkenv;
    st x = x;
    _Rd_get_section = ldf `.Rd_get_section`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn _Rd_get_section(p, "arguments");
    check L4() else D1();
  D1():
    deopt 4 [r1];
  L4():
    st x = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L9() else L1();
  L5():
    x3 = ld x;
    check L7() else D2();
  L6():
    r2 = dyn base(<sym x>);
    goto L0(r2);
  D2():
    deopt 8 [x3];
  L1():
    _Rd_get_item_tags = ldf `.Rd_get_item_tags`;
    check L14() else D6();
  L7():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r4 = dyn length(x4);
    check L8() else D3();
  L9():
    character = ldf character;
    check L10() else D4();
  D3():
    deopt 11 [r4];
  D4():
    deopt 14 [];
  D6():
    deopt 20 [];
  L8():
    goto L0(r4);
  L10():
    r6 = dyn character();
    check L11() else D5();
  L14():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r10 = dyn _Rd_get_item_tags(p1);
    check L15() else D7();
  D5():
    deopt 15 [r6];
  D7():
    deopt 22 [r10];
  L11():
    popenv;
    return r6;
  L15():
    st txt = r10;
    unlist = ldf unlist;
    check L16() else D8();
  D8():
    deopt 25 [];
  L16():
    p3 = prom<V +>{
      strsplit = ldf strsplit;
      p2 = prom<V +>{
        txt = ld txt;
        txt1 = force? txt;
        checkMissing(txt1);
        return txt1;
      };
      r12 = dyn strsplit(p2, ", *");
      return r12;
    };
    r14 = dyn unlist(p3);
    check L17() else D9();
  D9():
    deopt 27 [r14];
  L17():
    st txt = r14;
    gsub = ldf gsub;
    check L18() else D10();
  D10():
    deopt 30 [];
  L18():
    p4 = prom<V +>{
      txt2 = ld txt;
      txt3 = force? txt2;
      checkMissing(txt3);
      return txt3;
    };
    r16 = dyn gsub("\\\\l?dots", "...", p4);
    check L19() else D11();
  D11():
    deopt 34 [r16];
  L19():
    st txt = r16;
    gsub1 = ldf gsub;
    check L20() else D12();
  D12():
    deopt 37 [];
  L20():
    p5 = prom<V +>{
      txt4 = ld txt;
      txt5 = force? txt4;
      checkMissing(txt5);
      return txt5;
    };
    r18 = dyn gsub1[, , , fixed]("\\_", "_", p5, TRUE);
    check L21() else D13();
  D13():
    deopt 43 [r18];
  L21():
    st txt = r18;
    trimws = ldf trimws;
    check L22() else D14();
  D14():
    deopt 46 [];
  L22():
    p6 = prom<V +>{
      txt6 = ld txt;
      txt7 = force? txt6;
      checkMissing(txt7);
      return txt7;
    };
    r20 = dyn trimws(p6);
    check L23() else D15();
  D15():
    deopt 48 [r20];
  L23():
    popenv;
    return r20;
  }
}