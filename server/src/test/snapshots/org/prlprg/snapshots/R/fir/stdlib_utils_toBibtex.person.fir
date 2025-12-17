fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3197553692;
    st `toBibtex.person` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3197553692(object, escape, `...`) {
  (reg object:*, reg escape:*, reg ddd:dots) -+> V { var object:*, var escape:*, reg escape_isMissing:L, reg escape_orDefault:*, var `...`:dots?, reg vapply:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V, reg y:*, reg y1:V, reg c:L, reg y3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg y6:V, reg r5:V, reg y7:*, reg y8:V, reg nzchar:cls, reg r6:V, reg __:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg y9:*, reg y10:V, reg length:cls, reg r10:V, reg c1:L, reg paste:cls, reg y11:*, reg y12:V, reg p2:p(V +), reg r12:V, reg l:*, reg class__:cls, reg r14:V, reg y13:*, reg y14:V |
    mkenv;
    st object = object;
    escape_isMissing = missing.0(escape);
    if escape_isMissing then L0(FALSE) else L0(escape);
  L0(escape_orDefault):
    st escape = escape_orDefault;
    st `...` = ddd;
    vapply = ldf vapply;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p1 = prom<V +>{
      r1 = clos inner3913899244;
      return r1;
    };
    r3 = dyn vapply(p, p1, "");
    check L7() else D1();
  D1():
    deopt 5 [r3];
  L7():
    st y = r3;
    y = ld y;
    check L8() else D2();
  D2():
    deopt 7 [y];
  L8():
    y1 = force? y;
    checkMissing(y1);
    c = `is.object`(y1);
    if c then L9() else L10(y1);
  L1(dx1):
    st y = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L9():
    dr = tryDispatchBuiltin.1("[", y1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(y3):
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(y6, r5):
    __ = ldf `[` in base;
    r7 = dyn __(y6, r5);
    goto L1(r7);
  L3(r9):
    c1 = `as.logical`(r9);
    if c1 then L20() else L4();
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L12():
    y7 = ld y;
    check L14() else D3();
  L13():
    r4 = dyn base(<sym y>);
    goto L2(y3, r4);
  L16():
    y9 = ld y;
    check L18() else D5();
  L17():
    r8 = dyn base1(<sym y>);
    goto L3(r8);
  D3():
    deopt 11 [y3, y7];
  D5():
    deopt 19 [y9];
  L4():
    goto L5();
  L5():
    l = ld y;
    class__ = ldf `class<-`;
    check L24() else D9();
  L14():
    y8 = force? y7;
    checkMissing(y8);
    nzchar = ldf nzchar in base;
    r6 = dyn nzchar(y8);
    check L15() else D4();
  L18():
    y10 = force? y9;
    checkMissing(y10);
    length = ldf length in base;
    r10 = dyn length(y10);
    check L19() else D6();
  L20():
    paste = ldf paste;
    check L21() else D7();
  D4():
    deopt 14 [y3, r6];
  D6():
    deopt 22 [r10];
  D7():
    deopt 24 [];
  D9():
    deopt 35 ["Bibtex", l, "Bibtex"];
  L15():
    goto L2(y3, r6);
  L19():
    goto L3(r10);
  L21():
    p2 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      return y12;
    };
    r12 = dyn paste[, collapse](p2, " and ");
    check L22() else D8();
  L24():
    r14 = dyn class__(l, NULL, "Bibtex");
    check L25() else D10();
  D8():
    deopt 28 [r12];
  D10():
    deopt 37 ["Bibtex", r14];
  L22():
    st y = r12;
    goto L5();
  L25():
    st y = r14;
    y13 = ld y;
    check L26() else D11();
  D11():
    deopt 39 [y13];
  L26():
    y14 = force? y13;
    checkMissing(y14);
    popenv;
    return y14;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg p1:*, reg p2:V, reg c:L, reg p4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c3:cls, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c4:cls, reg r8:V, reg format:cls, reg p5:*, reg p6:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c5:cls, reg r12:V, reg p8:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg br:*, reg br1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg r17:V, reg c6:cls, reg r18:V, reg list:cls, reg r19:V, reg p9:p(V +), reg r21:V, reg isTRUE:cls, reg escape:*, reg escape1:V, reg p10:p(V +), reg r23:V, reg c7:L, reg c9:V, reg Encoding:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg r25:V, reg s:*, reg s1:V, reg enc2utf8:cls, reg r26:V, reg p11:p(V +), reg r28:V, reg r29:V, reg c10:L, reg c11:V, reg c13:L, reg __:cls, reg r30:V, reg r31:cls, reg s2:*, reg s3:V, reg p12:p(V +), reg r33:V, reg s4:*, reg s5:V |
    mkenv;
    st p = p;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c2 = `as.logical`(r1);
    if c2 then L13() else L1();
  L6():
    p1 = ld p;
    check L8() else D0();
  L7():
    r = dyn base(<lang `$`(p, family)>);
    goto L0(r);
  D0():
    deopt 1 [p1];
  L1():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L3(r6):
    st br = r6;
    format = ldf format;
    check L21() else D3();
  L8():
    p2 = force? p1;
    checkMissing(p2);
    c = `is.object`(p2);
    if c then L10() else L11(p2);
  L13():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D3():
    deopt 19 [];
  L2(r4):
    goto L3(r4);
  L9(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L10():
    dr = tryDispatchBuiltin.1("$", p2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(p4):
    r2 = `$`(p4, <sym family>);
    goto L9(r2);
  L14():
    c3 = ldf c in base;
    r5 = dyn c3("{", "}");
    check L16() else D1();
  L15():
    r3 = dyn base1("{", "}");
    goto L2(r3);
  L18():
    c4 = ldf c in base;
    r8 = dyn c4("", "");
    check L20() else D2();
  L19():
    r7 = dyn base2("", "");
    goto L3(r7);
  L21():
    p7 = prom<V +>{
      p5 = ld p;
      p6 = force? p5;
      checkMissing(p6);
      return p6;
    };
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c5 = ldf c in base;
      r12 = dyn c5("family", "given");
      goto L0(r12);
    L2():
      r10 = dyn base3("family", "given");
      goto L0(r10);
    };
    p9 = prom<V +>{
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r15):
      return r15;
    L2():
      br = ld br;
      br1 = force? br;
      checkMissing(br1);
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r14 = dyn base4[given, family](<sym br>, <lang c("", ",")>);
      goto L0(r14);
    L1(r17):
      list = ldf list in base;
      r19 = dyn list(br1, r17);
      goto L0(r19);
    L4():
      c6 = ldf c in base;
      r18 = dyn c6("", ",");
      goto L1(r18);
    L5():
      r16 = dyn base5("", ",");
      goto L1(r16);
    };
    r21 = dyn format[, include, braces](p7, p8, p9);
    check L22() else D4();
  D1():
    deopt 10 [r5];
  D2():
    deopt 16 [r8];
  D4():
    deopt 25 [r21];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L16():
    goto L2(r5);
  L20():
    goto L3(r8);
  L22():
    st s = r21;
    isTRUE = ldf isTRUE;
    check L23() else D5();
  D5():
    deopt 28 [];
  L23():
    p10 = prom<V +>{
      escape = ld escape;
      escape1 = force? escape;
      checkMissing(escape1);
      return escape1;
    };
    r23 = dyn isTRUE(p10);
    check L24() else D6();
  D6():
    deopt 30 [r23];
  L24():
    c7 = `as.logical`(r23);
    if c7 then L25() else L4(c7);
  L4(c9):
    c13 = `as.logical`(c9);
    if c13 then L29() else L5();
  L25():
    Encoding = ldf Encoding;
    check L26() else D7();
  D7():
    deopt 32 [c7];
  L5():
    s4 = ld s;
    check L34() else D12();
  L26():
    p11 = prom<V +>{
      sym6 = ldf enc2utf8;
      base6 = ldf enc2utf8 in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r25):
      st s = r25;
      invisible.0();
      return r25;
    L1():
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      enc2utf8 = ldf enc2utf8 in base;
      r26 = dyn enc2utf8(s1);
      goto L0(r26);
    L2():
      r24 = dyn base6(<sym s>);
      goto L0(r24);
    };
    r28 = dyn Encoding(p11);
    check L27() else D8();
  L29():
    __ = ldf `::`;
    check L30() else D9();
  D8():
    deopt 34 [c7, r28];
  D9():
    deopt 39 [];
  D12():
    deopt 47 [s4];
  L27():
    r29 = `==`(r28, "UTF-8");
    c10 = `as.logical`(r29);
    c11 = `&&`(c7, c10);
    goto L4(c11);
  L30():
    r30 = dyn __("tools", "encoded_text_to_latex");
    check L31() else D10();
  L34():
    s5 = force? s4;
    checkMissing(s5);
    popenv;
    return s5;
  D10():
    deopt 42 [r30];
  L31():
    checkFun.0(r30);
    r31 = r30 as cls;
    p12 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      return s3;
    };
    r33 = dyn r31(p12, "UTF-8");
    check L32() else D11();
  D11():
    deopt 46 [r33];
  L32():
    popenv;
    return r33;
  }
}