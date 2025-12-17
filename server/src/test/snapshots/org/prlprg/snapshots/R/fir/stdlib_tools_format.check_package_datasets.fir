fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_package_datasets` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r1:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg character:cls, reg r6:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg c1:L, reg c3:V, reg suppress_notes:*, reg suppress_notes1:V, reg r8:V, reg c4:L, reg c5:V, reg c7:L, reg sprintf:cls, reg ngettext:cls, reg n:*, reg n1:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg n2:*, reg n3:V, reg p3:p(V +), reg r13:V, reg r14:V, reg x5:*, reg x6:V, reg c8:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg c9:L, reg c11:V, reg suppress_notes2:*, reg suppress_notes3:V, reg r16:V, reg c12:L, reg c13:V, reg c15:L, reg sprintf1:cls, reg ngettext1:cls, reg n4:*, reg n5:V, reg p4:p(V +), reg r18:V, reg p5:p(V +), reg n6:*, reg n7:V, reg p6:p(V +), reg r21:V, reg r22:V, reg x9:*, reg x10:V, reg c16:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r23:V, reg c17:L, reg c19:V, reg suppress_notes4:*, reg suppress_notes5:V, reg r24:V, reg c20:L, reg c21:V, reg c23:L, reg sprintf2:cls, reg ngettext2:cls, reg n8:*, reg n9:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg n10:*, reg n11:V, reg p9:p(V +), reg r29:V, reg r30:V, reg nrow:cls, reg x13:*, reg x14:V, reg c24:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r31:V, reg p10:p(V +), reg r33:V, reg c25:L, reg ngettext3:cls, reg nr:*, reg nr1:V, reg p11:p(V +), reg r35:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r36:V, reg r37:V, reg msg:*, reg msg1:V, reg paste0:cls, reg iconv0:cls, reg x17:*, reg x18:V, reg c26:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r38:V, reg c27:L, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __:cls, reg r39:V, reg p12:p(V +), reg r41:V, reg p13:p(V +), reg x21:*, reg x22:V, reg c28:L, reg x24:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r43:V, reg c29:L, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg __1:cls, reg r44:V, reg p14:p(V +), reg r46:V, reg c30:cls, reg r47:V, reg r48:V, reg c31:cls, reg r49:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner2044426018;
    st iconv0 = r;
    config_val_to_logical = ldf config_val_to_logical;
    check L13() else D0();
  D0():
    deopt 4 [];
  L13():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r1 = dyn Sys_getenv("_R_CHECK_PACKAGE_DATASETS_SUPPRESS_NOTES_", "FALSE");
      return r1;
    };
    r3 = dyn config_val_to_logical(p);
    check L14() else D1();
  D1():
    deopt 6 [r3];
  L14():
    st suppress_notes = r3;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r5):
    popenv;
    return r5;
  L15():
    character = ldf character;
    check L17() else D2();
  L16():
    r4 = dyn base(<lang character()>, <lang if(`&&`(`(`(`<-`(n, `$`(x, latin1))), `!`(suppress_notes)), {
        sprintf(ngettext(n, "Note: found %d marked Latin-1 string", "Note: found %d marked Latin-1 strings"), n)
      })>, <lang if(`&&`(`(`(`<-`(n, `$`(x, utf8))), `!`(suppress_notes)), {
        sprintf(ngettext(n, "Note: found %d marked UTF-8 string", "Note: found %d marked UTF-8 strings"), n)
      })>, <lang if(`&&`(`(`(`<-`(n, `$`(x, bytes))), `!`(suppress_notes)), {
        sprintf(ngettext(n, "Note: found %d string marked as \"bytes\"", "Note: found %d strings marked as \"bytes\""), n)
      })>, <lang if(`<-`(nr, nrow(`$`(x, unknown))), {
        `<-`(msg, ngettext(nr, "Warning: found non-ASCII string", "Warning: found non-ASCII strings", domain=NA_LGL));
        c(msg, paste0(iconv0(`[`(`$`(x, unknown), , 1), "", "ASCII", sub="byte"), " in object '", `[`(`$`(x, unknown), , 2), "'"))
      })>);
    goto L0(r4);
  D2():
    deopt 11 [];
  L17():
    r6 = dyn character();
    check L18() else D3();
  D3():
    deopt 12 [r6];
  L18():
    x1 = ld x;
    check L19() else D4();
  D4():
    deopt 13 [x1];
  L19():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L21() else L22(x2);
  L20(dx1):
    st n = dx1;
    c1 = `as.logical`(dx1);
    if c1 then L24() else L1(c1);
  L21():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(x4):
    r7 = `$`(x4, <sym latin1>);
    goto L20(r7);
  L1(c3):
    c7 = `as.logical`(c3);
    if c7 then L27() else L2();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  L24():
    suppress_notes = ld suppress_notes;
    check L25() else D5();
  D5():
    deopt 17 [c1, suppress_notes];
  L2():
    goto L3(NULL);
  L3(r14):
    x5 = ld x;
    check L31() else D8();
  L25():
    suppress_notes1 = force? suppress_notes;
    checkMissing(suppress_notes1);
    r8 = `!`(suppress_notes1);
    c4 = `as.logical`(r8);
    c5 = `&&`(c1, c4);
    goto L1(c5);
  L27():
    sprintf = ldf sprintf;
    check L28() else D6();
  D6():
    deopt 22 [];
  D8():
    deopt 28 [x5];
  L28():
    p2 = prom<V +>{
      ngettext = ldf ngettext;
      p1 = prom<V +>{
        n = ld n;
        n1 = force? n;
        checkMissing(n1);
        return n1;
      };
      r10 = dyn ngettext(p1, "Note: found %d marked Latin-1 string", "Note: found %d marked Latin-1 strings");
      return r10;
    };
    p3 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    r13 = dyn sprintf(p2, p3);
    check L29() else D7();
  L31():
    x6 = force? x5;
    checkMissing(x6);
    c8 = `is.object`(x6);
    if c8 then L33() else L34(x6);
  D7():
    deopt 25 [r13];
  L29():
    goto L3(r13);
  L32(dx3):
    st n = dx3;
    c9 = `as.logical`(dx3);
    if c9 then L36() else L4(c9);
  L33():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(dr2);
  L34(x8):
    r15 = `$`(x8, <sym utf8>);
    goto L32(r15);
  L4(c11):
    c15 = `as.logical`(c11);
    if c15 then L39() else L5();
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L32(dx2);
  L36():
    suppress_notes2 = ld suppress_notes;
    check L37() else D9();
  D9():
    deopt 32 [c9, suppress_notes2];
  L5():
    goto L6(NULL);
  L6(r22):
    x9 = ld x;
    check L43() else D12();
  L37():
    suppress_notes3 = force? suppress_notes2;
    checkMissing(suppress_notes3);
    r16 = `!`(suppress_notes3);
    c12 = `as.logical`(r16);
    c13 = `&&`(c9, c12);
    goto L4(c13);
  L39():
    sprintf1 = ldf sprintf;
    check L40() else D10();
  D10():
    deopt 37 [];
  D12():
    deopt 43 [x9];
  L40():
    p5 = prom<V +>{
      ngettext1 = ldf ngettext;
      p4 = prom<V +>{
        n4 = ld n;
        n5 = force? n4;
        checkMissing(n5);
        return n5;
      };
      r18 = dyn ngettext1(p4, "Note: found %d marked UTF-8 string", "Note: found %d marked UTF-8 strings");
      return r18;
    };
    p6 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      return n7;
    };
    r21 = dyn sprintf1(p5, p6);
    check L41() else D11();
  L43():
    x10 = force? x9;
    checkMissing(x10);
    c16 = `is.object`(x10);
    if c16 then L45() else L46(x10);
  D11():
    deopt 40 [r21];
  L41():
    goto L6(r21);
  L44(dx5):
    st n = dx5;
    c17 = `as.logical`(dx5);
    if c17 then L48() else L7(c17);
  L45():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L47() else L46(dr4);
  L46(x12):
    r23 = `$`(x12, <sym bytes>);
    goto L44(r23);
  L7(c19):
    c23 = `as.logical`(c19);
    if c23 then L51() else L8();
  L47():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L44(dx4);
  L48():
    suppress_notes4 = ld suppress_notes;
    check L49() else D13();
  D13():
    deopt 47 [c17, suppress_notes4];
  L8():
    goto L9(NULL);
  L9(r30):
    nrow = ldf nrow;
    check L55() else D16();
  L49():
    suppress_notes5 = force? suppress_notes4;
    checkMissing(suppress_notes5);
    r24 = `!`(suppress_notes5);
    c20 = `as.logical`(r24);
    c21 = `&&`(c17, c20);
    goto L7(c21);
  L51():
    sprintf2 = ldf sprintf;
    check L52() else D14();
  D14():
    deopt 52 [];
  D16():
    deopt 59 [];
  L52():
    p8 = prom<V +>{
      ngettext2 = ldf ngettext;
      p7 = prom<V +>{
        n8 = ld n;
        n9 = force? n8;
        checkMissing(n9);
        return n9;
      };
      r26 = dyn ngettext2(p7, "Note: found %d string marked as \"bytes\"", "Note: found %d strings marked as \"bytes\"");
      return r26;
    };
    p9 = prom<V +>{
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      return n11;
    };
    r29 = dyn sprintf2(p8, p9);
    check L53() else D15();
  L55():
    p10 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c24 = `is.object`(x14);
      if c24 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r31 = `$`(x16, <sym unknown>);
      goto L0(r31);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r33 = dyn nrow(p10);
    check L56() else D17();
  D15():
    deopt 55 [r29];
  D17():
    deopt 61 [r33];
  L53():
    goto L9(r29);
  L56():
    st nr = r33;
    c25 = `as.logical`(r33);
    if c25 then L57() else L10();
  L10():
    goto L12(NULL);
  L12(r48):
    c31 = ldf c in base;
    r49 = dyn c31(r6, r14, r22, r30, r48);
    check L67() else D24();
  L57():
    ngettext3 = ldf ngettext;
    check L58() else D18();
  D18():
    deopt 64 [];
  D24():
    deopt 88 [r49];
  L58():
    p11 = prom<V +>{
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      return nr1;
    };
    r35 = dyn ngettext3[, , , domain](p11, "Warning: found non-ASCII string", "Warning: found non-ASCII strings", NA_LGL);
    check L59() else D19();
  L67():
    goto L0(r49);
  D19():
    deopt 70 [r35];
  L59():
    st msg = r35;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  L11(r37):
    goto L12(r37);
  L60():
    msg = ld msg;
    check L62() else D20();
  L61():
    r36 = dyn base1(<sym msg>, <lang paste0(iconv0(`[`(`$`(x, unknown), , 1), "", "ASCII", sub="byte"), " in object '", `[`(`$`(x, unknown), , 2), "'")>);
    goto L11(r36);
  D20():
    deopt 74 [msg];
  L62():
    msg1 = force? msg;
    checkMissing(msg1);
    paste0 = ldf paste0;
    check L63() else D21();
  D21():
    deopt 77 [];
  L63():
    p13 = prom<V +>{
      iconv0 = ldf iconv0;
      p12 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c26 = `is.object`(x18);
        if c26 then L2() else L3(x18);
      L1(dx9):
        c27 = `is.object`(dx9);
        if c27 then L5() else L6();
      L2():
        dr8 = tryDispatchBuiltin.1("$", x18);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L4() else L3(dr8);
      L3(x20):
        r38 = `$`(x20, <sym unknown>);
        goto L1(r38);
      L0(dx13):
        return dx13;
      L4():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L1(dx8);
      L5():
        dr10 = tryDispatchBuiltin.1("[", dx9);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L7() else L6();
      L6():
        __ = ldf `[` in base;
        r39 = dyn __(dx9, <missing>, 1);
        goto L0(r39);
      L7():
        dx12 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx12);
      };
      r41 = dyn iconv0[, , , sub](p12, "", "ASCII", "byte");
      return r41;
    };
    p14 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c28 = `is.object`(x22);
      if c28 then L2() else L3(x22);
    L1(dx15):
      c29 = `is.object`(dx15);
      if c29 then L5() else L6();
    L2():
      dr12 = tryDispatchBuiltin.1("$", x22);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(x24):
      r43 = `$`(x24, <sym unknown>);
      goto L1(r43);
    L0(dx19):
      return dx19;
    L4():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx14);
    L5():
      dr14 = tryDispatchBuiltin.1("[", dx15);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6();
    L6():
      __1 = ldf `[` in base;
      r44 = dyn __1(dx15, <missing>, 2);
      goto L0(r44);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    r46 = dyn paste0(p13, " in object '", p14, "'");
    check L64() else D22();
  D22():
    deopt 82 [r46];
  L64():
    c30 = ldf c in base;
    r47 = dyn c30(msg1, r46);
    check L65() else D23();
  D23():
    deopt 84 [r47];
  L65():
    goto L11(r47);
  }
}