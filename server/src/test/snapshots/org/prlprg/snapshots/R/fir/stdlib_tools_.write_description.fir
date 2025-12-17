fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner498132884;
    st `.write_description` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner498132884(x, dfile) {
  (reg x:*, reg dfile:*) -+> V { var x:*, var dfile:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg is_na:cls, reg r3:V, reg r4:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg Encoding:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg encoding:*, reg encoding1:V, reg c2:cls, reg r13:V, reg match:cls, reg r14:V, reg is_na1:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg ind:*, reg ind1:V, reg any:cls, reg r18:V, reg c3:L, reg mapply:cls, reg iconv:*, reg iconv1:V, reg p1:p(V +), reg x7:*, reg x8:V, reg c4:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r20:V, reg p2:p(V +), reg Encoding1:cls, reg x11:*, reg x12:V, reg p3:p(V +), reg r23:V, reg c5:L, reg r25:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind4:*, reg ind5:V, reg __2:cls, reg r26:V, reg p4:p(V +), reg encoding2:*, reg encoding3:V, reg p5:p(V +), reg r29:V, reg l:*, reg c6:L, reg r31:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r33:V, reg dx7:V, reg ind6:*, reg ind7:V, reg ___:cls, reg r34:V, reg r35:V, reg iconv2:cls, reg x13:*, reg x14:V, reg p6:p(V +), reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg asc:*, reg asc1:V, reg x15:*, reg x16:V, reg identical:cls, reg r41:V, reg r42:V, reg c7:L, reg warning:cls, reg r43:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg asc2:*, reg asc3:V, reg is_na2:cls, reg r46:V, reg asc4:*, reg asc5:V, reg x17:*, reg x18:V, reg r47:V, reg r48:V, reg iconv3:cls, reg x19:*, reg x20:V, reg c8:L, reg x22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ind8:*, reg ind9:V, reg __3:cls, reg r49:V, reg p7:p(V +), reg r51:V, reg l3:*, reg c9:L, reg r53:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r55:V, reg dx11:V, reg ind10:*, reg ind11:V, reg ___1:cls, reg r56:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg encoding4:*, reg encoding5:V, reg is_na3:cls, reg r59:V, reg r60:V, reg c10:L, reg c12:V, reg encoding6:*, reg encoding7:V, reg r61:V, reg c13:L, reg c14:V, reg c16:L, reg iconv4:cls, reg x23:*, reg x24:V, reg p8:p(V +), reg encoding8:*, reg encoding9:V, reg p9:p(V +), reg r64:V, reg tempfile:cls, reg r65:V, reg write_dcf:cls, reg rbind:cls, reg x25:*, reg x26:V, reg p10:p(V +), reg r67:V, reg p11:p(V +), reg tfile:*, reg tfile1:V, reg p12:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg r71:V, reg _keep_white_description_fields:*, reg _keep_white_description_fields1:V, reg c17:cls, reg r72:V, reg p13:p(V +), reg r74:V, reg writeLines:cls, reg iconv5:cls, reg readLines:cls, reg tfile2:*, reg tfile3:V, reg p14:p(V +), reg r76:V, reg p15:p(V +), reg encoding10:*, reg encoding11:V, reg p16:p(V +), reg r79:V, reg p17:p(V +), reg dfile1:*, reg dfile2:V, reg p18:p(V +), reg r82:V, reg write_dcf1:cls, reg rbind1:cls, reg x27:*, reg x28:V, reg p19:p(V +), reg r84:V, reg p20:p(V +), reg dfile3:*, reg dfile4:V, reg p21:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r87:V, reg r88:V, reg _keep_white_description_fields2:*, reg _keep_white_description_fields3:V, reg c18:cls, reg r89:V, reg p22:p(V +), reg r91:V |
    mkenv;
    st x = x;
    st dfile = dfile;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    r4 = `!`(r1);
    c1 = `as.logical`(r4);
    if c1 then L25() else L2();
  L18():
    x1 = ld x;
    check L20() else D0();
  L19():
    r = dyn base(<lang `<-`(encoding, `[`(x, "Encoding"))>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L2():
    iconv2 = ldf iconv;
    check L51() else D13();
  L10():
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L21() else L22(x2);
  L25():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  D13():
    deopt 56 [];
  L1(dx1):
    st encoding = dx1;
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(dx1);
    check L24() else D1();
  L3(r6):
    st ind = r6;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L15(r58):
    r60 = `!`(r58);
    c10 = `as.logical`(r60);
    if c10 then L78() else L16(c10);
  L21():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(x4):
    __ = ldf `[` in base;
    r2 = dyn __(x4, "Encoding");
    goto L1(r2);
  L26():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L27():
    r5 = dyn base1(<lang match(Encoding(x), c(encoding, "unknown"))>);
    goto L3(r5);
  L51():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r38 = dyn iconv2(p6, "latin1", "ASCII");
    check L52() else D14();
  L74():
    encoding4 = ld encoding;
    check L76() else D27();
  L75():
    r57 = dyn base7(<sym encoding>);
    goto L15(r57);
  D1():
    deopt 9 [r3];
  D14():
    deopt 60 [r38];
  D27():
    deopt 110 [encoding4];
  L4(r8):
    is_na1 = ldf `is.na` in base;
    r15 = dyn is_na1(r8);
    check L37() else D7();
  L6(r17):
    c3 = `as.logical`(r17);
    if c3 then L42() else L7();
  L16(c12):
    c16 = `as.logical`(c12);
    if c16 then L81() else L17();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L24():
    goto L0(r3);
  L28():
    Encoding = ldf Encoding;
    check L30() else D2();
  L29():
    r7 = dyn base2(<lang Encoding(x)>, <lang c(encoding, "unknown")>);
    goto L4(r7);
  L38():
    ind = ld ind;
    check L40() else D8();
  L39():
    r16 = dyn base4(<sym ind>);
    goto L6(r16);
  L52():
    st asc = r38;
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L53() else L54();
  L76():
    encoding5 = force? encoding4;
    checkMissing(encoding5);
    is_na3 = ldf `is.na` in base;
    r59 = dyn is_na3(encoding5);
    check L77() else D28();
  L78():
    encoding6 = ld encoding;
    check L79() else D29();
  D2():
    deopt 16 [];
  D7():
    deopt 31 [r15];
  D8():
    deopt 35 [ind];
  D28():
    deopt 113 [r59];
  D29():
    deopt 115 [c10, encoding6];
  L7():
    goto L9(NULL);
  L9(r35):
    goto L10();
  L11(r40):
    r42 = `!`(r40);
    c7 = `as.logical`(r42);
    if c7 then L58() else L12();
  L17():
    write_dcf1 = ldf `write.dcf`;
    check L91() else D38();
  L30():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r10 = dyn Encoding(p);
    check L31() else D3();
  L37():
    goto L3(r15);
  L40():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r18 = dyn any(ind1);
    check L41() else D9();
  L42():
    mapply = ldf mapply;
    check L43() else D10();
  L53():
    asc = ld asc;
    check L55() else D15();
  L54():
    r39 = dyn base5(<sym asc>, <sym x>);
    goto L11(r39);
  L77():
    goto L15(r59);
  L79():
    encoding7 = force? encoding6;
    checkMissing(encoding7);
    r61 = `!=`(encoding7, "UTF-8");
    c13 = `as.logical`(r61);
    c14 = `&&`(c10, c13);
    goto L16(c14);
  L81():
    iconv4 = ldf iconv;
    check L82() else D30();
  D3():
    deopt 18 [r10];
  D9():
    deopt 38 [r18];
  D10():
    deopt 40 [];
  D15():
    deopt 64 [asc];
  D30():
    deopt 121 [];
  D38():
    deopt 150 [];
  L12():
    goto L10();
  L31():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L41():
    goto L6(r18);
  L43():
    p1 = prom<V +>{
      iconv = ld iconv;
      iconv1 = force? iconv;
      checkMissing(iconv1);
      return iconv1;
    };
    p2 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c4 = `is.object`(x8);
      if c4 then L1() else L2(x8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x10):
      ind2 = ld ind;
      ind3 = force? ind2;
      __1 = ldf `[` in base;
      r20 = dyn __1(x10, ind3);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p4 = prom<V +>{
      Encoding1 = ldf Encoding;
      p3 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        return x12;
      };
      r23 = dyn Encoding1(p3);
      c5 = `is.object`(r23);
      if c5 then L1() else L2(r23);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", r23);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(r25):
      ind4 = ld ind;
      ind5 = force? ind4;
      __2 = ldf `[` in base;
      r26 = dyn __2(r25, ind5);
      goto L0(r26);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p5 = prom<V +>{
      encoding2 = ld encoding;
      encoding3 = force? encoding2;
      checkMissing(encoding3);
      return encoding3;
    };
    r29 = dyn mapply[, , , , sub](p1, p2, p4, p5, "byte");
    check L44() else D11();
  L55():
    asc1 = force? asc;
    checkMissing(asc1);
    x15 = ld x;
    check L56() else D16();
  L58():
    warning = ldf warning;
    check L59() else D18();
  L82():
    p8 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    p9 = prom<V +>{
      encoding8 = ld encoding;
      encoding9 = force? encoding8;
      checkMissing(encoding9);
      return encoding9;
    };
    r64 = dyn iconv4[, from, to](p8, p9, "UTF-8");
    check L83() else D31();
  L91():
    p20 = prom<V +>{
      rbind1 = ldf rbind;
      p19 = prom<V +>{
        x27 = ld x;
        x28 = force? x27;
        checkMissing(x28);
        return x28;
      };
      r84 = dyn rbind1(p19);
      return r84;
    };
    p21 = prom<V +>{
      dfile3 = ld dfile;
      dfile4 = force? dfile3;
      checkMissing(dfile4);
      return dfile4;
    };
    p22 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r88):
      return r88;
    L1():
      _keep_white_description_fields2 = ld `.keep_white_description_fields`;
      _keep_white_description_fields3 = force? _keep_white_description_fields2;
      checkMissing(_keep_white_description_fields3);
      c18 = ldf c in base;
      r89 = dyn c18(_keep_white_description_fields3, "Maintainer", "BugReports");
      goto L0(r89);
    L2():
      r87 = dyn base9(<sym .keep_white_description_fields>, "Maintainer", "BugReports");
      goto L0(r87);
    };
    r91 = dyn write_dcf1[, , `keep.white`, useBytes](p20, p21, p22, TRUE);
    check L92() else D39();
  D11():
    deopt 47 [r29];
  D16():
    deopt 66 [x15];
  D18():
    deopt 79 [];
  D31():
    deopt 127 [r64];
  D39():
    deopt 157 [r91];
  L5(r12):
    match = ldf match in base;
    r14 = dyn match(r10, r12, NA_INT, NULL);
    check L36() else D6();
  L32():
    encoding = ld encoding;
    check L34() else D4();
  L33():
    r11 = dyn base3(<sym encoding>, "unknown");
    goto L5(r11);
  L44():
    l = ld x;
    c6 = `is.object`(l);
    if c6 then L45() else L46(r29, l);
  L56():
    x16 = force? x15;
    checkMissing(x16);
    identical = ldf identical in base;
    r41 = dyn identical(asc1, x16, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L57() else D17();
  L59():
    r43 = dyn warning("Unknown encoding with non-ASCII data: converting to ASCII");
    check L60() else D19();
  L83():
    st x = r64;
    tempfile = ldf tempfile;
    check L84() else D32();
  L92():
    popenv;
    return r91;
  D4():
    deopt 21 [encoding];
  D6():
    deopt 29 [r14];
  D17():
    deopt 76 [r41];
  D19():
    deopt 81 [r43];
  D32():
    deopt 130 [];
  L8(r33, dx7):
    st x = dx7;
    goto L9(r33);
  L34():
    encoding1 = force? encoding;
    checkMissing(encoding1);
    c2 = ldf c in base;
    r13 = dyn c2(encoding1, "unknown");
    check L35() else D5();
  L36():
    goto L4(r14);
  L45():
    dr6 = tryDispatchBuiltin.0("[<-", l, r29);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L47() else L46(r29, dr6);
  L46(r31, l2):
    ind6 = ld ind;
    check L48() else D12();
  L57():
    goto L11(r41);
  L60():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L84():
    r65 = dyn tempfile();
    check L85() else D33();
  D5():
    deopt 25 [r13];
  D12():
    deopt 49 [r31, l2, r29, ind6];
  D33():
    deopt 131 [r65];
  L13(r45):
    asc4 = ld asc;
    check L65() else D22();
  L35():
    goto L5(r13);
  L47():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(r29, dx6);
  L48():
    ind7 = force? ind6;
    ___ = ldf `[<-` in base;
    r34 = dyn ___(l2, r29, ind7);
    goto L8(r31, r34);
  L61():
    asc2 = ld asc;
    check L63() else D20();
  L62():
    r44 = dyn base6(<sym asc>);
    goto L13(r44);
  L85():
    st tfile = r65;
    write_dcf = ldf `write.dcf`;
    check L86() else D34();
  D20():
    deopt 84 [asc2];
  D22():
    deopt 87 [r45, asc4];
  D34():
    deopt 134 [];
  L63():
    asc3 = force? asc2;
    checkMissing(asc3);
    is_na2 = ldf `is.na` in base;
    r46 = dyn is_na2(asc3);
    check L64() else D21();
  L65():
    asc5 = force? asc4;
    checkMissing(asc5);
    x17 = ld x;
    check L66() else D23();
  L86():
    p11 = prom<V +>{
      rbind = ldf rbind;
      p10 = prom<V +>{
        x25 = ld x;
        x26 = force? x25;
        checkMissing(x26);
        return x26;
      };
      r67 = dyn rbind(p10);
      return r67;
    };
    p12 = prom<V +>{
      tfile = ld tfile;
      tfile1 = force? tfile;
      checkMissing(tfile1);
      return tfile1;
    };
    p13 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r71):
      return r71;
    L1():
      _keep_white_description_fields = ld `.keep_white_description_fields`;
      _keep_white_description_fields1 = force? _keep_white_description_fields;
      checkMissing(_keep_white_description_fields1);
      c17 = ldf c in base;
      r72 = dyn c17(_keep_white_description_fields1, "Maintainer", "BugReports");
      goto L0(r72);
    L2():
      r70 = dyn base8(<sym .keep_white_description_fields>, "Maintainer", "BugReports");
      goto L0(r70);
    };
    r74 = dyn write_dcf[, , `keep.white`, useBytes](p11, p12, p13, TRUE);
    check L87() else D35();
  D21():
    deopt 87 [r46];
  D23():
    deopt 88 [r45, asc5, x17];
  D35():
    deopt 141 [r74];
  L64():
    goto L13(r46);
  L66():
    x18 = force? x17;
    checkMissing(x18);
    r47 = `!=`(asc5, x18);
    r48 = `||`(r45, r47);
    st ind = r48;
    iconv3 = ldf iconv;
    check L67() else D24();
  L87():
    writeLines = ldf writeLines;
    check L88() else D36();
  D24():
    deopt 94 [];
  D36():
    deopt 143 [];
  L67():
    p7 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      c8 = `is.object`(x20);
      if c8 then L1() else L2(x20);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", x20);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x22):
      ind8 = ld ind;
      ind9 = force? ind8;
      __3 = ldf `[` in base;
      r49 = dyn __3(x22, ind9);
      goto L0(r49);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r51 = dyn iconv3[, , , sub](p7, "latin1", "ASCII", "byte");
    check L68() else D25();
  L88():
    p17 = prom<V +>{
      iconv5 = ldf iconv;
      p15 = prom<V +>{
        readLines = ldf readLines;
        p14 = prom<V +>{
          tfile2 = ld tfile;
          tfile3 = force? tfile2;
          checkMissing(tfile3);
          return tfile3;
        };
        r76 = dyn readLines(p14);
        return r76;
      };
      p16 = prom<V +>{
        encoding10 = ld encoding;
        encoding11 = force? encoding10;
        checkMissing(encoding11);
        return encoding11;
      };
      r79 = dyn iconv5[, from, to](p15, "UTF-8", p16);
      return r79;
    };
    p18 = prom<V +>{
      dfile1 = ld dfile;
      dfile2 = force? dfile1;
      checkMissing(dfile2);
      return dfile2;
    };
    r82 = dyn writeLines[, , useBytes](p17, p18, TRUE);
    check L89() else D37();
  D25():
    deopt 100 [r51];
  D37():
    deopt 148 [r82];
  L68():
    l3 = ld x;
    c9 = `is.object`(l3);
    if c9 then L69() else L70(r51, l3);
  L89():
    popenv;
    return r82;
  L14(r55, dx11):
    st x = dx11;
    goto L10();
  L69():
    dr10 = tryDispatchBuiltin.0("[<-", l3, r51);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L71() else L70(r51, dr10);
  L70(r53, l5):
    ind10 = ld ind;
    check L72() else D26();
  D26():
    deopt 102 [r53, l5, r51, ind10];
  L71():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L14(r51, dx10);
  L72():
    ind11 = force? ind10;
    ___1 = ldf `[<-` in base;
    r56 = dyn ___1(l5, r51, ind11);
    goto L14(r53, r56);
  }
}