fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4280997825;
    st makeHelpTable = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4280997825(help, depth) {
  (reg help:*, reg depth:*) -+> V { var help:*, var depth:*, reg depth_isMissing:L, reg depth_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg help1:*, reg help2:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg paste0:cls, reg strrep:cls, reg depth1:*, reg depth2:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg pkg:*, reg pkg1:V, reg p2:p(V +), reg r8:V, reg help5:*, reg help6:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r9:V, reg help9:*, reg help10:V, reg c3:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r10:V, reg paste1:cls, reg root:*, reg root1:V, reg p3:p(V +), reg topic2url:cls, reg topic:*, reg topic1:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg ifelse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg pkg2:*, reg pkg3:V, reg nchar:cls, reg r17:V, reg p6:p(V +), reg paste2:cls, reg pkg4:*, reg pkg5:V, reg p7:p(V +), reg r20:V, reg p8:p(V +), reg r22:V, reg p9:p(V +), reg topic2:*, reg topic3:V, reg p10:p(V +), reg r25:V, reg paste3:cls, reg links:*, reg links1:V, reg p11:p(V +), reg Title:*, reg Title1:V, reg p12:p(V +), reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg out:*, reg out1:V, reg lines:*, reg lines1:V, reg c4:cls, reg r31:V |
    mkenv;
    st help = help;
    depth_isMissing = missing.0(depth);
    if depth_isMissing then L0(2.0) else L0(depth);
  L0(depth_orDefault):
    st depth = depth_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r1):
    st out = r1;
    help1 = ld help;
    check L9() else D1();
  L6():
    c = ldf c in base;
    r2 = dyn c("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", "<col style=\"width:  2%;\" />", "<col style=\"width: 74%;\" />");
    check L8() else D0();
  L7():
    r = dyn base("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", "<col style=\"width:  2%;\" />", "<col style=\"width: 74%;\" />");
    goto L1(r);
  D0():
    deopt 7 [r2];
  D1():
    deopt 9 [help1];
  L8():
    goto L1(r2);
  L9():
    help2 = force? help1;
    checkMissing(help2);
    c1 = `is.object`(help2);
    if c1 then L10() else L11();
  L2(dx1):
    st pkg = dx1;
    paste0 = ldf paste0;
    check L13() else D2();
  L10():
    dr = tryDispatchBuiltin.1("[", help2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11();
  L11():
    __ = ldf `[` in base;
    r3 = dyn __(help2, <missing>, "Package");
    goto L2(r3);
  D2():
    deopt 17 [];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L13():
    p1 = prom<V +>{
      strrep = ldf strrep;
      p = prom<V +>{
        depth1 = ld depth;
        depth2 = force? depth1;
        checkMissing(depth2);
        return depth2;
      };
      r5 = dyn strrep("../", p);
      return r5;
    };
    p2 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    r8 = dyn paste0(p1, "library/", p2, "/help/");
    check L14() else D3();
  D3():
    deopt 22 [r8];
  L14():
    st root = r8;
    help5 = ld help;
    check L15() else D4();
  D4():
    deopt 24 [help5];
  L15():
    help6 = force? help5;
    checkMissing(help6);
    c2 = `is.object`(help6);
    if c2 then L16() else L17();
  L3(dx3):
    st topic = dx3;
    help9 = ld help;
    check L19() else D5();
  L16():
    dr2 = tryDispatchBuiltin.1("[", help6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17();
  L17():
    __1 = ldf `[` in base;
    r9 = dyn __1(help6, <missing>, "Topic");
    goto L3(r9);
  D5():
    deopt 31 [help9];
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L19():
    help10 = force? help9;
    checkMissing(help10);
    c3 = `is.object`(help10);
    if c3 then L20() else L21();
  L4(dx5):
    st Title = dx5;
    paste1 = ldf paste0;
    check L23() else D6();
  L20():
    dr4 = tryDispatchBuiltin.1("[", help10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21();
  L21():
    __2 = ldf `[` in base;
    r10 = dyn __2(help10, <missing>, "Title");
    goto L4(r10);
  D6():
    deopt 39 [];
  L22():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L23():
    p3 = prom<V +>{
      root = ld root;
      root1 = force? root;
      checkMissing(root1);
      return root1;
    };
    p5 = prom<V +>{
      topic2url = ldf topic2url;
      p4 = prom<V +>{
        topic = ld topic;
        topic1 = force? topic;
        checkMissing(topic1);
        return topic1;
      };
      r13 = dyn topic2url(p4);
      return r13;
    };
    p9 = prom<V +>{
      ifelse = ldf ifelse;
      p6 = prom<V +>{
        sym1 = ldf nchar;
        base1 = ldf nchar in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r16):
        return r16;
      L1():
        pkg2 = ld pkg;
        pkg3 = force? pkg2;
        checkMissing(pkg3);
        nchar = ldf nchar in base;
        r17 = dyn nchar(pkg3, "chars", FALSE, NA_LGL);
        goto L0(r17);
      L2():
        r15 = dyn base1(<sym pkg>);
        goto L0(r15);
      };
      p8 = prom<V +>{
        paste2 = ldf paste0;
        p7 = prom<V +>{
          pkg4 = ld pkg;
          pkg5 = force? pkg4;
          checkMissing(pkg5);
          return pkg5;
        };
        r20 = dyn paste2(p7, "::");
        return r20;
      };
      r22 = dyn ifelse(p6, p8, "");
      return r22;
    };
    p10 = prom<V +>{
      topic2 = ld topic;
      topic3 = force? topic2;
      checkMissing(topic3);
      return topic3;
    };
    r25 = dyn paste1("<a href=\"", p3, p5, "\">", p9, p10, "</a>");
    check L24() else D7();
  D7():
    deopt 47 [r25];
  L24():
    st links = r25;
    paste3 = ldf paste0;
    check L25() else D8();
  D8():
    deopt 50 [];
  L25():
    p11 = prom<V +>{
      links = ld links;
      links1 = force? links;
      checkMissing(links1);
      return links1;
    };
    p12 = prom<V +>{
      Title = ld Title;
      Title1 = force? Title;
      checkMissing(Title1);
      return Title1;
    };
    r28 = dyn paste3("<tr><td style=\"text-align: right; vertical-align: top;\">", p11, "</td>\n<td></td><td style=\"vertical-align: top;\">", p12, "</td></tr>");
    check L26() else D9();
  D9():
    deopt 56 [r28];
  L26():
    st lines = r28;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L5(r30):
    popenv;
    return r30;
  L27():
    out = ld out;
    check L29() else D10();
  L28():
    r29 = dyn base2(<sym out>, <sym lines>, "</table>");
    goto L5(r29);
  D10():
    deopt 60 [out];
  L29():
    out1 = force? out;
    checkMissing(out1);
    lines = ld lines;
    check L30() else D11();
  D11():
    deopt 62 [lines];
  L30():
    lines1 = force? lines;
    checkMissing(lines1);
    c4 = ldf c in base;
    r31 = dyn c4(out1, lines1, "</table>");
    check L31() else D12();
  D12():
    deopt 66 [r31];
  L31():
    goto L5(r31);
  }
}