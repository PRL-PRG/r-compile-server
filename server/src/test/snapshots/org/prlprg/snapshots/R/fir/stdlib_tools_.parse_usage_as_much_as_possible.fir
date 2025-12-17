fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.parse_usage_as_much_as_possible` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg expression:cls, reg r6:V, reg _Rd_drop_nodes_with_tags:cls, reg x3:*, reg x4:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg l:*, reg attr__:cls, reg r15:V, reg as_character_Rd:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r17:V, reg l1:*, reg c2:L, reg r19:S, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg txt:*, reg txt1:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg c3:cls, reg r25:V, reg p4:p(V +), reg r27:V, reg ___:cls, reg r28:V, reg paste:cls, reg txt2:*, reg txt3:V, reg p5:p(V +), reg r30:V, reg _dquote_method_markup:cls, reg txt4:*, reg txt5:V, reg p6:p(V +), reg _S3_method_markup_regexp:*, reg _S3_method_markup_regexp1:V, reg p7:p(V +), reg r33:V, reg _dquote_method_markup1:cls, reg txt6:*, reg txt7:V, reg p8:p(V +), reg _S4_method_markup_regexp:*, reg _S4_method_markup_regexp1:V, reg p9:p(V +), reg r36:V, reg gsub:cls, reg txt8:*, reg txt9:V, reg p10:p(V +), reg r38:V, reg gsub1:cls, reg txt10:*, reg txt11:V, reg p11:p(V +), reg r40:V, reg _parse_text_as_much_as_possible:cls, reg txt12:*, reg txt13:V, reg p12:p(V +), reg r42:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L9() else L1();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    _Rd_drop_nodes_with_tags = ldf `.Rd_drop_nodes_with_tags`;
    check L14() else D2();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L8() else D1();
  L9():
    sym1 = ldf expression;
    base1 = ldf expression in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D1():
    deopt 5 [r2];
  D2():
    deopt 14 [];
  L2(r5):
    popenv;
    return r5;
  L8():
    goto L0(r2);
  L10():
    expression = ldf expression in base;
    r6 = dyn expression();
    goto L2(r6);
  L11():
    r4 = dyn base1();
    goto L2(r4);
  L14():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c1 = ldf c in base;
      r12 = dyn c1("COMMENT", "\\special");
      goto L0(r12);
    L2():
      r10 = dyn base2("COMMENT", "\\special");
      goto L0(r10);
    };
    r14 = dyn _Rd_drop_nodes_with_tags(p, p1);
    check L15() else D3();
  D3():
    deopt 17 [r14];
  L15():
    st x = r14;
    l = ld x;
    attr__ = ldf `attr<-`;
    check L16() else D4();
  D4():
    deopt 22 ["Rd", l, "Rd"];
  L16():
    r15 = dyn attr__(l, NULL, "Rd_tag", "Rd");
    check L17() else D5();
  D5():
    deopt 25 ["Rd", r15];
  L17():
    st x = r15;
    as_character_Rd = ldf `as.character.Rd`;
    check L18() else D6();
  D6():
    deopt 28 [];
  L18():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r17 = dyn as_character_Rd(p2);
    check L19() else D7();
  D7():
    deopt 30 [r17];
  L19():
    st txt = r17;
    l1 = ld txt;
    c2 = `is.object`(l1);
    if c2 then L20() else L21("...", l1);
  L4(dx1):
    st txt = dx1;
    paste = ldf paste;
    check L25() else D10();
  L20():
    dr = tryDispatchBuiltin.0("[<-", l1, "...");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21("...", dr);
  L21(r19, l3):
    _in_ = ldf `%in%`;
    check L23() else D8();
  D8():
    deopt 36 [r19, l3, "..."];
  D10():
    deopt 43 [];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L23():
    p3 = prom<V +>{
      txt = ld txt;
      txt1 = force? txt;
      checkMissing(txt1);
      return txt1;
    };
    p4 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      c3 = ldf c in base;
      r25 = dyn c3("\\dots", "\\ldots");
      goto L0(r25);
    L2():
      r23 = dyn base3("\\dots", "\\ldots");
      goto L0(r23);
    };
    r27 = dyn _in_(p3, p4);
    check L24() else D9();
  L25():
    p5 = prom<V +>{
      txt2 = ld txt;
      txt3 = force? txt2;
      checkMissing(txt3);
      return txt3;
    };
    r30 = dyn paste[, collapse](p5, "");
    check L26() else D11();
  D9():
    deopt 39 [r19, l3, "...", r27];
  D11():
    deopt 47 [r30];
  L24():
    ___ = ldf `[<-` in base;
    r28 = dyn ___(l3, "...", r27);
    goto L4(r28);
  L26():
    st txt = r30;
    _dquote_method_markup = ldf `.dquote_method_markup`;
    check L27() else D12();
  D12():
    deopt 50 [];
  L27():
    p6 = prom<V +>{
      txt4 = ld txt;
      txt5 = force? txt4;
      checkMissing(txt5);
      return txt5;
    };
    p7 = prom<V +>{
      _S3_method_markup_regexp = ld `.S3_method_markup_regexp`;
      _S3_method_markup_regexp1 = force? _S3_method_markup_regexp;
      checkMissing(_S3_method_markup_regexp1);
      return _S3_method_markup_regexp1;
    };
    r33 = dyn _dquote_method_markup(p6, p7);
    check L28() else D13();
  D13():
    deopt 53 [r33];
  L28():
    st txt = r33;
    _dquote_method_markup1 = ldf `.dquote_method_markup`;
    check L29() else D14();
  D14():
    deopt 56 [];
  L29():
    p8 = prom<V +>{
      txt6 = ld txt;
      txt7 = force? txt6;
      checkMissing(txt7);
      return txt7;
    };
    p9 = prom<V +>{
      _S4_method_markup_regexp = ld `.S4_method_markup_regexp`;
      _S4_method_markup_regexp1 = force? _S4_method_markup_regexp;
      checkMissing(_S4_method_markup_regexp1);
      return _S4_method_markup_regexp1;
    };
    r36 = dyn _dquote_method_markup1(p8, p9);
    check L30() else D15();
  D15():
    deopt 59 [r36];
  L30():
    st txt = r36;
    gsub = ldf gsub;
    check L31() else D16();
  D16():
    deopt 62 [];
  L31():
    p10 = prom<V +>{
      txt8 = ld txt;
      txt9 = force? txt8;
      checkMissing(txt9);
      return txt9;
    };
    r38 = dyn gsub("(^|[^\\])\\\\($|[^abfnrtuUvx0-9'\"\\])", "\\1<unescaped bksl>\\2", p10);
    check L32() else D17();
  D17():
    deopt 66 [r38];
  L32():
    st txt = r38;
    gsub1 = ldf gsub;
    check L33() else D18();
  D18():
    deopt 69 [];
  L33():
    p11 = prom<V +>{
      txt10 = ld txt;
      txt11 = force? txt10;
      checkMissing(txt11);
      return txt11;
    };
    r40 = dyn gsub1("(^|[^\\])\\\\($|[^abfnrtuUvx0-9'\"\\])", "\\1<unescaped bksl>\\2", p11);
    check L34() else D19();
  D19():
    deopt 73 [r40];
  L34():
    st txt = r40;
    _parse_text_as_much_as_possible = ldf `.parse_text_as_much_as_possible`;
    check L35() else D20();
  D20():
    deopt 76 [];
  L35():
    p12 = prom<V +>{
      txt12 = ld txt;
      txt13 = force? txt12;
      checkMissing(txt13);
      return txt13;
    };
    r42 = dyn _parse_text_as_much_as_possible(p12);
    check L36() else D21();
  D21():
    deopt 78 [r42];
  L36():
    popenv;
    return r42;
  }
}