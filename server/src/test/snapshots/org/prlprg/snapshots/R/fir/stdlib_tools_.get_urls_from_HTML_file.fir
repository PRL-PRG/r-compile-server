fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384373858;
    st `.get_urls_from_HTML_file` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg __:cls, reg r:V, reg r1:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg doc:*, reg doc1:V, reg inherits:cls, reg r6:V, reg r7:V, reg c:L, reg character:cls, reg r8:V, reg __1:cls, reg r11:V, reg r12:cls, reg doc2:*, reg doc3:V, reg p1:p(V +), reg r14:V, reg __2:cls, reg r15:V, reg r16:cls, reg nodes:*, reg nodes1:V, reg p2:p(V +), reg r18:V, reg unique:cls, reg hrefs:*, reg hrefs1:V, reg c1:L, reg hrefs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg hrefs6:V, reg r20:V, reg hrefs7:*, reg hrefs8:V, reg is_na:cls, reg r21:V, reg r22:V, reg startsWith:cls, reg hrefs9:*, reg hrefs10:V, reg p3:p(V +), reg r24:V, reg r25:V, reg r26:V, reg __3:cls, reg r27:V, reg p4:p(V +), reg r29:V |
    mkenv;
    st f = f;
    __ = ldf `::`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn __("xml2", "read_html");
    check L4() else D1();
  D1():
    deopt 4 [r];
  L4():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r3 = dyn r1(p);
    check L5() else D2();
  D2():
    deopt 7 [r3];
  L5():
    st doc = r3;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r5):
    r7 = `!`(r5);
    c = `as.logical`(r7);
    if c then L10() else L1();
  L6():
    doc = ld doc;
    check L8() else D3();
  L7():
    r4 = dyn base(<sym doc>, "xml_node");
    goto L0(r4);
  D3():
    deopt 11 [doc];
  L1():
    __1 = ldf `::`;
    check L15() else D7();
  L8():
    doc1 = force? doc;
    checkMissing(doc1);
    inherits = ldf inherits in base;
    r6 = dyn inherits(doc1, "xml_node", FALSE);
    check L9() else D4();
  L10():
    character = ldf character;
    check L11() else D5();
  D4():
    deopt 16 [r6];
  D5():
    deopt 19 [];
  D7():
    deopt 25 [];
  L9():
    goto L0(r6);
  L11():
    r8 = dyn character();
    check L12() else D6();
  L15():
    r11 = dyn __1("xml2", "xml_find_all");
    check L16() else D8();
  D6():
    deopt 20 [r8];
  D8():
    deopt 28 [r11];
  L12():
    popenv;
    return r8;
  L16():
    checkFun.0(r11);
    r12 = r11 as cls;
    p1 = prom<V +>{
      doc2 = ld doc;
      doc3 = force? doc2;
      checkMissing(doc3);
      return doc3;
    };
    r14 = dyn r12(p1, "//a");
    check L17() else D9();
  D9():
    deopt 32 [r14];
  L17():
    st nodes = r14;
    __2 = ldf `::`;
    check L18() else D10();
  D10():
    deopt 35 [];
  L18():
    r15 = dyn __2("xml2", "xml_attr");
    check L19() else D11();
  D11():
    deopt 38 [r15];
  L19():
    checkFun.0(r15);
    r16 = r15 as cls;
    p2 = prom<V +>{
      nodes = ld nodes;
      nodes1 = force? nodes;
      checkMissing(nodes1);
      return nodes1;
    };
    r18 = dyn r16(p2, "href");
    check L20() else D12();
  D12():
    deopt 42 [r18];
  L20():
    st hrefs = r18;
    unique = ldf unique;
    check L21() else D13();
  D13():
    deopt 45 [];
  L21():
    p4 = prom<V +>{
      hrefs = ld hrefs;
      hrefs1 = force? hrefs;
      checkMissing(hrefs1);
      c1 = `is.object`(hrefs1);
      if c1 then L2() else L3(hrefs1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", hrefs1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(hrefs3):
      sym1 = ldf `is.na`;
      base1 = ldf `is.na` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L1(hrefs6, r20):
      r22 = `!`(r20);
      startsWith = ldf startsWith;
      p3 = prom<V +>{
        hrefs9 = ld hrefs;
        hrefs10 = force? hrefs9;
        checkMissing(hrefs10);
        return hrefs10;
      };
      r24 = dyn startsWith(p3, "#");
      r25 = `!`(r24);
      r26 = `&&`(r22, r25);
      __3 = ldf `[` in base;
      r27 = dyn __3(hrefs6, r26);
      goto L0(r27);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      hrefs7 = ld hrefs;
      hrefs8 = force? hrefs7;
      checkMissing(hrefs8);
      is_na = ldf `is.na` in base;
      r21 = dyn is_na(hrefs8);
      goto L1(hrefs3, r21);
    L6():
      r19 = dyn base1(<sym hrefs>);
      goto L1(hrefs3, r19);
    };
    r29 = dyn unique(p4);
    check L22() else D14();
  D14():
    deopt 47 [r29];
  L22():
    popenv;
    return r29;
  }
}