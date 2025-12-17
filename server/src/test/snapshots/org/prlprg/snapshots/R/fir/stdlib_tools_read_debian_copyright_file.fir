fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2893810290;
    st read_debian_copyright_file = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2893810290(file, keep) {
  (reg file:*, reg keep:*) -+> V { var file:*, var keep:*, reg keep_isMissing:L, reg keep_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c2:cls, reg r9:V, reg tryCatch:cls, reg read_dcf:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r11:V, reg p1:p(V +), reg identity:*, reg identity1:V, reg p2:p(V +), reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg x:*, reg x1:V, reg inherits:cls, reg r17:V, reg c3:L, reg c4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg c8:L, reg r19:V, reg x2:*, reg x3:V, reg length:cls, reg r20:V, reg r21:V, reg c9:L, reg c10:V, reg c12:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg select:cls, reg x4:*, reg x5:V, reg p3:p(V +), reg fields_in_header_para:*, reg fields_in_header_para1:V, reg p4:p(V +), reg keep1:*, reg keep2:V, reg p5:p(V +), reg r29:V, reg drop:cls, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg header:*, reg header1:V, reg c13:L, reg header3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r33:V, reg is_na:cls, reg r34:V, reg c14:L, reg c15:V, reg grepl:cls, reg fmt:*, reg fmt1:V, reg p6:p(V +), reg r36:V, reg r37:V, reg c17:L, reg c18:V, reg c20:L, reg which:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg r41:V, reg x6:*, reg x7:V, reg c21:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r42:V, reg is_na1:cls, reg r43:V, reg r44:V, reg p7:p(V +), reg r46:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg header4:*, reg header5:V, reg select1:cls, reg x10:*, reg x11:V, reg p8:p(V +), reg pos:*, reg pos1:V, reg p9:p(V +), reg fields_in_files_para:*, reg fields_in_files_para1:V, reg p10:p(V +), reg keep3:*, reg keep4:V, reg p11:p(V +), reg r53:V, reg select2:cls, reg x12:*, reg x13:V, reg p12:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg pos2:*, reg pos3:V, reg c22:cls, reg r57:V, reg r58:V, reg p13:p(V +), reg fields_in_license_para:*, reg fields_in_license_para1:V, reg p14:p(V +), reg keep5:*, reg keep6:V, reg p15:p(V +), reg r62:V, reg list:cls, reg r63:V |
    mkenv;
    st file = file;
    keep_isMissing = missing.0(keep);
    if keep_isMissing then L0(TRUE) else L0(keep);
  L0(keep_orDefault):
    st keep = keep_orDefault;
    r = clos inner3498476209;
    st select = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L1(r2):
    st fields_in_header_para = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L16():
    c = ldf c in base;
    r3 = dyn c("Format", "Upstream-Name", "Upstream-Contact", "Source", "Disclaimer", "Comment", "License", "Copyright");
    check L18() else D0();
  L17():
    r1 = dyn base("Format", "Upstream-Name", "Upstream-Contact", "Source", "Disclaimer", "Comment", "License", "Copyright");
    goto L1(r1);
  D0():
    deopt 14 [r3];
  L2(r5):
    st fields_in_files_para = r5;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L18():
    goto L1(r3);
  L19():
    c1 = ldf c in base;
    r6 = dyn c1("Files", "Copyright", "License", "Comment");
    check L21() else D1();
  L20():
    r4 = dyn base1("Files", "Copyright", "License", "Comment");
    goto L2(r4);
  D1():
    deopt 23 [r6];
  L3(r8):
    st fields_in_license_para = r8;
    tryCatch = ldf tryCatch;
    check L25() else D3();
  L21():
    goto L2(r6);
  L22():
    c2 = ldf c in base;
    r9 = dyn c2("License", "Comment");
    check L24() else D2();
  L23():
    r7 = dyn base2("License", "Comment");
    goto L3(r7);
  D2():
    deopt 30 [r9];
  D3():
    deopt 33 [];
  L24():
    goto L3(r9);
  L25():
    p1 = prom<V +>{
      read_dcf = ldf `read.dcf`;
      p = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      r11 = dyn read_dcf[, `keep.white`](p, TRUE);
      return r11;
    };
    p2 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r14 = dyn tryCatch[, error](p1, p2);
    check L26() else D4();
  D4():
    deopt 37 [r14];
  L26():
    st x = r14;
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L4(r16):
    c3 = `as.logical`(r16);
    if c3 then L5(c3) else L31();
  L27():
    x = ld x;
    check L29() else D5();
  L28():
    r15 = dyn base3(<sym x>, "error");
    goto L4(r15);
  D5():
    deopt 41 [x];
  L5(c4):
    c12 = `as.logical`(c4);
    if c12 then L37() else L7();
  L29():
    x1 = force? x;
    checkMissing(x1);
    inherits = ldf inherits in base;
    r17 = dyn inherits(x1, "error", FALSE);
    check L30() else D6();
  L31():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  D6():
    deopt 46 [r17];
  L6(c8, r19):
    r21 = `!`(r19);
    c9 = `as.logical`(r21);
    c10 = `||`(c8, c9);
    goto L5(c10);
  L7():
    sym5 = ldf drop;
    base5 = ldf drop in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L40() else L41();
  L30():
    goto L4(r17);
  L32():
    x2 = ld x;
    check L34() else D7();
  L33():
    r18 = dyn base4(<sym x>);
    goto L6(c3, r18);
  L37():
    popenv;
    return NULL;
  D7():
    deopt 49 [c3, x2];
  L9(r25):
    st header = r25;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L45() else L46();
  L34():
    x3 = force? x2;
    checkMissing(x3);
    length = ldf length in base;
    r20 = dyn length(x3);
    check L35() else D8();
  L40():
    select = ldf select;
    check L42() else D9();
  L41():
    r24 = dyn base5(<lang select(x, 1, fields_in_header_para, keep)>);
    goto L9(r24);
  D8():
    deopt 52 [c3, r20];
  D9():
    deopt 63 [];
  L10(r32):
    c14 = `as.logical`(r32);
    if c14 then L12(c14) else L52();
  L35():
    goto L6(c3, r20);
  L42():
    p3 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p4 = prom<V +>{
      fields_in_header_para = ld fields_in_header_para;
      fields_in_header_para1 = force? fields_in_header_para;
      checkMissing(fields_in_header_para1);
      return fields_in_header_para1;
    };
    p5 = prom<V +>{
      keep1 = ld keep;
      keep2 = force? keep1;
      checkMissing(keep2);
      return keep2;
    };
    r29 = dyn select(p3, 1, p4, p5);
    check L43() else D10();
  L45():
    header = ld header;
    check L47() else D12();
  L46():
    r31 = dyn base6(<lang `<-`(fmt, `[`(header, "Format"))>);
    goto L10(r31);
  D10():
    deopt 68 [r29];
  D12():
    deopt 74 [header];
  L12(c15):
    c20 = `as.logical`(c15);
    if c20 then L56() else L13();
  L43():
    drop = ldf drop in base;
    r30 = dyn drop(r29);
    check L44() else D11();
  L47():
    header1 = force? header;
    checkMissing(header1);
    c13 = `is.object`(header1);
    if c13 then L48() else L49(header1);
  L52():
    grepl = ldf grepl;
    check L53() else D14();
  D11():
    deopt 70 [r30];
  D14():
    deopt 83 [c14];
  L11(dx1):
    st fmt = dx1;
    is_na = ldf `is.na` in base;
    r34 = dyn is_na(dx1);
    check L51() else D13();
  L13():
    which = ldf which;
    check L59() else D16();
  L44():
    goto L9(r30);
  L48():
    dr = tryDispatchBuiltin.1("[", header1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L50() else L49(dr);
  L49(header3):
    __ = ldf `[` in base;
    r33 = dyn __(header3, "Format");
    goto L11(r33);
  L53():
    p6 = prom<V +>{
      fmt = ld fmt;
      fmt1 = force? fmt;
      checkMissing(fmt1);
      return fmt1;
    };
    r36 = dyn grepl("copyright-format", p6);
    check L54() else D15();
  L56():
    popenv;
    return NULL;
  D13():
    deopt 81 [r34];
  D15():
    deopt 86 [c14, r36];
  D16():
    deopt 95 [];
  L50():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L51():
    goto L10(r34);
  L54():
    r37 = `!`(r36);
    c17 = `as.logical`(r37);
    c18 = `||`(c14, c17);
    goto L12(c18);
  L59():
    p7 = prom<V +>{
      sym7 = ldf `is.na`;
      base7 = ldf `is.na` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r41):
      r44 = `!`(r41);
      return r44;
    L2():
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      c21 = `is.object`(x7);
      if c21 then L4() else L5();
    L3():
      r40 = dyn base7(<lang `[`(x, , "Files")>);
      goto L0(r40);
    L1(dx3):
      is_na1 = ldf `is.na` in base;
      r43 = dyn is_na1(dx3);
      goto L0(r43);
    L4():
      dr2 = tryDispatchBuiltin.1("[", x7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5();
    L5():
      __1 = ldf `[` in base;
      r42 = dyn __1(x7, <missing>, "Files");
      goto L1(r42);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    r46 = dyn which(p7);
    check L60() else D17();
  D17():
    deopt 97 [r46];
  L60():
    st pos = r46;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L61() else L62();
  L15(r48):
    popenv;
    return r48;
  L61():
    header4 = ld header;
    check L63() else D18();
  L62():
    r47 = dyn base8[header, files, licenses](<sym header>, <lang select(x, pos, fields_in_files_para, keep)>, <lang select(x, `-`(c(1, pos)), fields_in_license_para, keep)>);
    goto L15(r47);
  D18():
    deopt 101 [header4];
  L63():
    header5 = force? header4;
    checkMissing(header5);
    select1 = ldf select;
    check L64() else D19();
  D19():
    deopt 105 [];
  L64():
    p8 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    p9 = prom<V +>{
      pos = ld pos;
      pos1 = force? pos;
      checkMissing(pos1);
      return pos1;
    };
    p10 = prom<V +>{
      fields_in_files_para = ld fields_in_files_para;
      fields_in_files_para1 = force? fields_in_files_para;
      checkMissing(fields_in_files_para1);
      return fields_in_files_para1;
    };
    p11 = prom<V +>{
      keep3 = ld keep;
      keep4 = force? keep3;
      checkMissing(keep4);
      return keep4;
    };
    r53 = dyn select1(p8, p9, p10, p11);
    check L65() else D20();
  D20():
    deopt 110 [r53];
  L65():
    select2 = ldf select;
    check L66() else D21();
  D21():
    deopt 113 [];
  L66():
    p12 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    p13 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r56):
      r58 = `-`(<missing>, r56);
      return r58;
    L1():
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      c22 = ldf c in base;
      r57 = dyn c22(1, pos3);
      goto L0(r57);
    L2():
      r55 = dyn base9(1, <sym pos>);
      goto L0(r55);
    };
    p14 = prom<V +>{
      fields_in_license_para = ld fields_in_license_para;
      fields_in_license_para1 = force? fields_in_license_para;
      checkMissing(fields_in_license_para1);
      return fields_in_license_para1;
    };
    p15 = prom<V +>{
      keep5 = ld keep;
      keep6 = force? keep5;
      checkMissing(keep6);
      return keep6;
    };
    r62 = dyn select2(p12, p13, p14, p15);
    check L67() else D22();
  D22():
    deopt 118 [r62];
  L67():
    list = ldf list in base;
    r63 = dyn list(header5, r53, r62);
    check L68() else D23();
  D23():
    deopt 121 [r63];
  L68():
    goto L15(r63);
  }
}
fun inner3498476209(x, i, vars, keep) {
  (reg x:*, reg i:*, reg vars:*, reg keep:*) -+> V { var x:*, var i:*, var vars:*, var keep:*, reg keep_isMissing:L, reg keep_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vars1:*, reg vars2:V, reg colnames:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg match:cls, reg r4:V, reg keep1:*, reg keep2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg pos:*, reg pos1:V, reg r7:V, reg any:cls, reg r8:V, reg c6:L, reg c7:V, reg c9:L, reg cbind:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r10:V, reg ncol:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r12:V, reg l:*, reg c10:L, reg r14:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r16:V, reg dx1:V, reg pos2:*, reg pos3:V, reg r17:V, reg ___:cls, reg r18:V, reg x7:*, reg x8:V, reg c11:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i1:*, reg i2:V, reg pos4:*, reg pos5:V, reg __:cls, reg r20:V, reg vars3:*, reg vars4:V, reg l3:*, reg colnames__:cls, reg r21:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st i = i;
    st vars = vars;
    keep_isMissing = missing.0(keep);
    if keep_isMissing then L0(TRUE) else L0(keep);
  L0(keep_orDefault):
    st keep = keep_orDefault;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(r1):
    st pos = r1;
    keep1 = ld keep;
    check L14() else D4();
  L8():
    vars1 = ld vars;
    check L10() else D0();
  L9():
    r = dyn base[, , nomatch](<sym vars>, <lang colnames(x)>, 0);
    goto L1(r);
  D0():
    deopt 2 [vars1];
  D4():
    deopt 13 [keep1];
  L10():
    vars2 = force? vars1;
    checkMissing(vars2);
    colnames = ldf colnames;
    check L11() else D1();
  L14():
    keep2 = force? keep1;
    checkMissing(keep2);
    c = `as.logical`(keep2);
    if c then L15() else L2(c);
  D1():
    deopt 5 [];
  L2(c2):
    c9 = `as.logical`(c2);
    if c9 then L21() else L4();
  L11():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn colnames(p);
    check L12() else D2();
  L15():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D2():
    deopt 7 [r3];
  L3(c5, r6):
    c6 = `as.logical`(r6);
    c7 = `&&`(c5, c6);
    goto L2(c7);
  L4():
    goto L6();
  L6():
    x7 = ld x;
    check L31() else D12();
  L12():
    match = ldf match in base;
    r4 = dyn match(vars2, r3, 0, NULL);
    check L13() else D3();
  L16():
    pos = ld pos;
    check L18() else D5();
  L17():
    r5 = dyn base1(<lang `!`(pos)>);
    goto L3(c, r5);
  L21():
    cbind = ldf cbind;
    check L22() else D7();
  D3():
    deopt 11 [r4];
  D5():
    deopt 17 [c, pos];
  D7():
    deopt 24 [];
  D12():
    deopt 41 [x7];
  L13():
    goto L1(r4);
  L18():
    pos1 = force? pos;
    checkMissing(pos1);
    r7 = `!`(pos1);
    any = ldf any in base;
    r8 = dyn any(r7);
    check L19() else D6();
  L22():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r10 = dyn cbind(p1, NA_STR);
    check L23() else D8();
  L31():
    x8 = force? x7;
    checkMissing(x8);
    c11 = `is.object`(x8);
    if c11 then L32() else L33(x8);
  D6():
    deopt 21 [c, r8];
  D8():
    deopt 27 [r10];
  L7(dx3):
    st y = dx3;
    vars3 = ld vars;
    check L37() else D15();
  L19():
    goto L3(c, r8);
  L23():
    st x = r10;
    ncol = ldf ncol;
    check L24() else D9();
  L32():
    dr2 = tryDispatchBuiltin.1("[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(dr2);
  L33(x10):
    i1 = ld i;
    check L35() else D13();
  D9():
    deopt 30 [];
  D13():
    deopt 43 [x10, i1];
  D15():
    deopt 52 [vars3];
  L24():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r12 = dyn ncol(p2);
    check L25() else D10();
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L35():
    i2 = force? i1;
    pos4 = ld pos;
    check L36() else D14();
  L37():
    vars4 = force? vars3;
    checkMissing(vars4);
    l3 = ld y;
    colnames__ = ldf `colnames<-`;
    check L38() else D16();
  D10():
    deopt 32 [r12];
  D14():
    deopt 45 [x10, pos4];
  D16():
    deopt 55 [vars4, l3, vars4];
  L25():
    l = ld pos;
    c10 = `is.object`(l);
    if c10 then L26() else L27(r12, l);
  L36():
    pos5 = force? pos4;
    __ = ldf `[` in base;
    r20 = dyn __(x8, i2, pos5, FALSE);
    goto L7(r20);
  L38():
    r21 = dyn colnames__(l3, NULL, vars4);
    check L39() else D17();
  D17():
    deopt 57 [vars4, r21];
  L5(r16, dx1):
    st pos = dx1;
    goto L6();
  L26():
    dr = tryDispatchBuiltin.0("[<-", l, r12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(r12, dr);
  L27(r14, l2):
    pos2 = ld pos;
    check L29() else D11();
  L39():
    st y = r21;
    y = ld y;
    check L40() else D18();
  D11():
    deopt 34 [r14, l2, r12, pos2];
  D18():
    deopt 59 [y];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(r12, dx);
  L29():
    pos3 = force? pos2;
    checkMissing(pos3);
    r17 = `!`(pos3);
    ___ = ldf `[<-` in base;
    r18 = dyn ___(l2, r12, r17);
    goto L5(r14, r18);
  L40():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}