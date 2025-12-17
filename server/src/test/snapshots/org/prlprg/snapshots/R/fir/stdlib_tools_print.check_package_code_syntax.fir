fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.check_package_code_syntax` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x3:V, reg first:*, reg first1:V, reg r3:V, reg c1:L, reg writeLines:cls, reg r4:V, reg i7:I, reg x4:*, reg x5:V, reg c2:L, reg i9:I, reg x7:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg i16:I, reg r8:V, reg xi:*, reg xi1:V, reg c3:L, reg i18:I, reg xi3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg dx3:V, reg r9:V, reg length:cls, reg r10:V, reg c4:L, reg gsub:cls, reg sub:cls, reg xi4:*, reg xi5:V, reg c5:L, reg xi7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg p:p(V +), reg r13:V, reg p1:p(V +), reg r15:V, reg writeLines1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg sprintf:cls, reg xi8:*, reg xi9:V, reg c6:L, reg xi11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r18:V, reg p2:p(V +), reg r20:V, reg paste0:cls, reg msg:*, reg msg1:V, reg p3:p(V +), reg r22:V, reg c7:cls, reg r23:V, reg p4:p(V +), reg r25:V, reg i23:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg i26:I, reg r28:V, reg xi12:*, reg xi13:V, reg c8:L, reg i28:I, reg xi15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i30:I, reg dx9:V, reg r29:V, reg length1:cls, reg r30:V, reg c9:L, reg writeLines2:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg sprintf1:cls, reg ngettext:cls, reg len:*, reg len1:V, reg p5:p(V +), reg r34:V, reg p6:p(V +), reg sQuote:cls, reg xi16:*, reg xi17:V, reg c10:L, reg xi19:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r36:V, reg p7:p(V +), reg r38:V, reg p8:p(V +), reg r40:V, reg paste1:cls, reg gsub1:cls, reg xi20:*, reg xi21:V, reg c11:L, reg xi23:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r41:V, reg p9:p(V +), reg r43:V, reg p10:p(V +), reg r45:V, reg c12:cls, reg r46:V, reg p11:p(V +), reg r48:V, reg i33:I, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg x8:*, reg x9:V, reg invisible:cls, reg r52:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    st first = TRUE;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L13():
    x1 = ld x;
    check L15() else D0();
  L14():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 4 [x1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L16() else L11();
  L15():
    x2 = force? x1;
    checkMissing(x2);
    r2 = seq_along(x2);
    goto L0(r2);
  L11():
    x3 = `[[`(s, i2, NULL, TRUE);
    st i = x3;
    first = ld first;
    check L17() else D1();
  L16():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L53() else L54();
  D1():
    deopt 7 [i2, first];
  L12(r51):
    popenv;
    return r51;
  L17():
    first1 = force? first;
    checkMissing(first1);
    r3 = `!`(first1);
    c1 = `as.logical`(r3);
    if c1 then L18() else L2();
  L53():
    x8 = ld x;
    check L55() else D16();
  L54():
    r50 = dyn base5(<sym x>);
    goto L12(r50);
  D16():
    deopt 66 [x8];
  L2():
    st first = FALSE;
    goto L3(i2);
  L3(i7):
    x4 = ld x;
    check L22() else D4();
  L18():
    writeLines = ldf writeLines;
    check L19() else D2();
  L55():
    x9 = force? x8;
    checkMissing(x9);
    invisible = ldf invisible in base;
    r52 = dyn invisible(x9);
    check L56() else D17();
  D2():
    deopt 11 [i2];
  D4():
    deopt 17 [i7, x4];
  D17():
    deopt 69 [r52];
  L19():
    r4 = dyn writeLines("");
    check L20() else D3();
  L22():
    x5 = force? x4;
    checkMissing(x5);
    c2 = `is.object`(x5);
    if c2 then L23() else L24(i7, x5);
  L56():
    goto L12(r52);
  D3():
    deopt 13 [i2, r4];
  L4(i11, dx1):
    st xi = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L20():
    goto L3(i2);
  L23():
    dr = tryDispatchBuiltin.1("[[", x5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(i7, dr);
  L24(i9, x7):
    i12 = ld i;
    check L26() else D5();
  D5():
    deopt 19 [i9, x7, i12];
  L5(i16, r8):
    c4 = `as.logical`(r8);
    if c4 then L35() else L6();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i7, dx);
  L26():
    i13 = force? i12;
    __ = ldf `[[` in base;
    r6 = dyn __(x7, i13);
    goto L4(i9, r6);
  L27():
    xi = ld xi;
    check L29() else D6();
  L28():
    r7 = dyn base1(<lang `$`(xi, Error)>);
    goto L5(i11, r7);
  D6():
    deopt 25 [i11, xi];
  L6():
    goto L7(i16);
  L7(i23):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  L29():
    xi1 = force? xi;
    checkMissing(xi1);
    c3 = `is.object`(xi1);
    if c3 then L31() else L32(i11, xi1);
  L35():
    gsub = ldf gsub;
    check L36() else D8();
  D8():
    deopt 31 [i16];
  L8(i26, r28):
    st len = r28;
    c9 = `as.logical`(r28);
    if c9 then L49() else L9();
  L30(i20, dx3):
    length = ldf length in base;
    r10 = dyn length(dx3);
    check L34() else D7();
  L31():
    dr2 = tryDispatchBuiltin.1("$", xi1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(i11, dr2);
  L32(i18, xi3):
    r9 = `$`(xi3, <sym Error>);
    goto L30(i18, r9);
  L36():
    p1 = prom<V +>{
      sub = ldf sub;
      p = prom<V +>{
        xi4 = ld xi;
        xi5 = force? xi4;
        checkMissing(xi5);
        c5 = `is.object`(xi5);
        if c5 then L1() else L2(xi5);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", xi5);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(xi7):
        r11 = `$`(xi7, <sym Error>);
        goto L0(r11);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r13 = dyn sub("[^:]*: *", "", p);
      return r13;
    };
    r15 = dyn gsub[, , , perl, useBytes]("\n", "\n  ", p1, TRUE, TRUE);
    check L37() else D9();
  L41():
    xi12 = ld xi;
    check L43() else D12();
  L42():
    r27 = dyn base3(<lang `$`(xi, Warnings)>);
    goto L8(i23, r27);
  D7():
    deopt 29 [i20, r10];
  D9():
    deopt 39 [i16, r15];
  D12():
    deopt 49 [i23, xi12];
  L9():
    goto L10(i26);
  L10(i33):
    goto L1(i33);
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L30(i11, dx2);
  L34():
    goto L5(i20, r10);
  L37():
    st msg = r15;
    writeLines1 = ldf writeLines;
    check L38() else D10();
  L43():
    xi13 = force? xi12;
    checkMissing(xi13);
    c8 = `is.object`(xi13);
    if c8 then L45() else L46(i23, xi13);
  L49():
    writeLines2 = ldf writeLines;
    check L50() else D14();
  D10():
    deopt 42 [i16];
  D14():
    deopt 56 [i26];
  L38():
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        xi8 = ld xi;
        xi9 = force? xi8;
        checkMissing(xi9);
        c6 = `is.object`(xi9);
        if c6 then L1() else L2(xi9);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", xi9);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(xi11):
        r18 = `$`(xi11, <sym File>);
        goto L0(r18);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r20 = dyn sprintf("Error in file '%s':", p2);
      paste0 = ldf paste0;
      p3 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      r22 = dyn paste0("  ", p3);
      c7 = ldf c in base;
      r23 = dyn c7(r20, r22);
      goto L0(r23);
    L2():
      r16 = dyn base2(<lang sprintf("Error in file '%s':", `$`(xi, File))>, <lang paste0("  ", msg)>);
      goto L0(r16);
    };
    r25 = dyn writeLines1(p4);
    check L39() else D11();
  L44(i30, dx9):
    length1 = ldf length in base;
    r30 = dyn length1(dx9);
    check L48() else D13();
  L45():
    dr8 = tryDispatchBuiltin.1("$", xi13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L47() else L46(i23, dr8);
  L46(i28, xi15):
    r29 = `$`(xi15, <sym Warnings>);
    goto L44(i28, r29);
  L50():
    p11 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      sprintf1 = ldf sprintf;
      p6 = prom<V +>{
        ngettext = ldf ngettext;
        p5 = prom<V +>{
          len = ld len;
          len1 = force? len;
          checkMissing(len1);
          return len1;
        };
        r34 = dyn ngettext(p5, "Warning in file %s:", "Warnings in file %s:");
        return r34;
      };
      p8 = prom<V +>{
        sQuote = ldf sQuote;
        p7 = prom<V +>{
          xi16 = ld xi;
          xi17 = force? xi16;
          checkMissing(xi17);
          c10 = `is.object`(xi17);
          if c10 then L1() else L2(xi17);
        L0(dx11):
          return dx11;
        L1():
          dr10 = tryDispatchBuiltin.1("$", xi17);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L3() else L2(dr10);
        L2(xi19):
          r36 = `$`(xi19, <sym File>);
          goto L0(r36);
        L3():
          dx10 = getTryDispatchBuiltinValue(dr10);
          goto L0(dx10);
        };
        r38 = dyn sQuote(p7);
        return r38;
      };
      r40 = dyn sprintf1(p6, p8);
      paste1 = ldf paste0;
      p10 = prom<V +>{
        gsub1 = ldf gsub;
        p9 = prom<V +>{
          xi20 = ld xi;
          xi21 = force? xi20;
          checkMissing(xi21);
          c11 = `is.object`(xi21);
          if c11 then L1() else L2(xi21);
        L0(dx13):
          return dx13;
        L1():
          dr12 = tryDispatchBuiltin.1("$", xi21);
          dc6 = getTryDispatchBuiltinDispatched(dr12);
          if dc6 then L3() else L2(dr12);
        L2(xi23):
          r41 = `$`(xi23, <sym Warnings>);
          goto L0(r41);
        L3():
          dx12 = getTryDispatchBuiltinValue(dr12);
          goto L0(dx12);
        };
        r43 = dyn gsub1[, , , perl, useBytes]("\n\n", "\n  ", p9, TRUE, TRUE);
        return r43;
      };
      r45 = dyn paste1("  ", p10);
      c12 = ldf c in base;
      r46 = dyn c12(r40, r45);
      goto L0(r46);
    L2():
      r31 = dyn base4(<lang sprintf(ngettext(len, "Warning in file %s:", "Warnings in file %s:"), sQuote(`$`(xi, File)))>, <lang paste0("  ", gsub("\n\n", "\n  ", `$`(xi, Warnings), perl=TRUE, useBytes=TRUE))>);
      goto L0(r31);
    };
    r48 = dyn writeLines2(p11);
    check L51() else D15();
  D11():
    deopt 44 [i16, r25];
  D13():
    deopt 53 [i30, r30];
  D15():
    deopt 58 [i26, r48];
  L39():
    goto L7(i16);
  L47():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L44(i23, dx8);
  L48():
    goto L8(i30, r30);
  L51():
    goto L10(i26);
  }
}