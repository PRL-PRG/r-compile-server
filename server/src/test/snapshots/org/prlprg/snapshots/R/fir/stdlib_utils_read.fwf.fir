fun main() {
  () -+> V { reg r:cls, reg tempfile:cls, reg r1:V, reg cat:cls, reg ff:*, reg ff1:V, reg p:p(V +), reg r3:V, reg read_fwf:cls, reg ff2:*, reg ff3:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg read_fwf1:cls, reg ff4:*, reg ff5:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg c1:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg unlink:cls, reg ff6:*, reg ff7:V, reg p5:p(V +), reg r17:V, reg cat1:cls, reg ff8:*, reg ff9:V, reg p6:p(V +), reg r19:V, reg read_fwf2:cls, reg ff10:*, reg ff11:V, reg p7:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg c2:cls, reg r23:V, reg p8:p(V +), reg r25:V, reg unlink1:cls, reg ff12:*, reg ff13:V, reg p9:p(V +), reg r27:V, reg cat2:cls, reg ff14:*, reg ff15:V, reg p10:p(V +), reg r29:V, reg read_fwf3:cls, reg ff16:*, reg ff17:V, reg p11:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg c3:cls, reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg c4:cls, reg r38:V, reg list:cls, reg r39:V, reg p12:p(V +), reg r41:V, reg unlink2:cls, reg ff18:*, reg ff19:V, reg p13:p(V +), reg r43:V |
    mkenv;
    r = clos inner2592845531;
    st `read.fwf` = r;
    tempfile = ldf tempfile;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn tempfile();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st ff = r1;
    cat = ldf cat;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    r3 = dyn cat[file, , , sep](p, "123456", "987654", "\n");
    check L3() else D3();
  D3():
    deopt 15 [r3];
  L3():
    read_fwf = ldf `read.fwf`;
    check L4() else D4();
  D4():
    deopt 17 [];
  L4():
    p1 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c(1.0, 2.0, 3.0);
      goto L0(r7);
    L2():
      r5 = dyn base(1.0, 2.0, 3.0);
      goto L0(r5);
    };
    r9 = dyn read_fwf[, widths](p1, p2);
    check L5() else D5();
  D5():
    deopt 21 [r9];
  L5():
    read_fwf1 = ldf `read.fwf`;
    check L6() else D6();
  D6():
    deopt 23 [];
  L6():
    p3 = prom<V +>{
      ff4 = ld ff;
      ff5 = force? ff4;
      checkMissing(ff5);
      return ff5;
    };
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c1 = ldf c in base;
      r13 = dyn c1(1.0, -2.0, 3.0);
      goto L0(r13);
    L2():
      r11 = dyn base1(1.0, <lang `-`(2.0)>, 3.0);
      goto L0(r11);
    };
    r15 = dyn read_fwf1[, widths](p3, p4);
    check L7() else D7();
  D7():
    deopt 27 [r15];
  L7():
    unlink = ldf unlink;
    check L8() else D8();
  D8():
    deopt 29 [];
  L8():
    p5 = prom<V +>{
      ff6 = ld ff;
      ff7 = force? ff6;
      checkMissing(ff7);
      return ff7;
    };
    r17 = dyn unlink(p5);
    check L9() else D9();
  D9():
    deopt 31 [r17];
  L9():
    cat1 = ldf cat;
    check L10() else D10();
  D10():
    deopt 33 [];
  L10():
    p6 = prom<V +>{
      ff8 = ld ff;
      ff9 = force? ff8;
      checkMissing(ff9);
      return ff9;
    };
    r19 = dyn cat1[file, , , sep](p6, "123", "987654", "\n");
    check L11() else D11();
  D11():
    deopt 40 [r19];
  L11():
    read_fwf2 = ldf `read.fwf`;
    check L12() else D12();
  D12():
    deopt 42 [];
  L12():
    p7 = prom<V +>{
      ff10 = ld ff;
      ff11 = force? ff10;
      checkMissing(ff11);
      return ff11;
    };
    p8 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c2 = ldf c in base;
      r23 = dyn c2(1.0, 0.0, 2.0, 3.0);
      goto L0(r23);
    L2():
      r21 = dyn base2(1.0, 0.0, 2.0, 3.0);
      goto L0(r21);
    };
    r25 = dyn read_fwf2[, widths](p7, p8);
    check L13() else D13();
  D13():
    deopt 46 [r25];
  L13():
    unlink1 = ldf unlink;
    check L14() else D14();
  D14():
    deopt 48 [];
  L14():
    p9 = prom<V +>{
      ff12 = ld ff;
      ff13 = force? ff12;
      checkMissing(ff13);
      return ff13;
    };
    r27 = dyn unlink1(p9);
    check L15() else D15();
  D15():
    deopt 50 [r27];
  L15():
    cat2 = ldf cat;
    check L16() else D16();
  D16():
    deopt 52 [];
  L16():
    p10 = prom<V +>{
      ff14 = ld ff;
      ff15 = force? ff14;
      checkMissing(ff15);
      return ff15;
    };
    r29 = dyn cat2[file, , , sep](p10, "123456", "987654", "\n");
    check L17() else D17();
  D17():
    deopt 59 [r29];
  L17():
    read_fwf3 = ldf `read.fwf`;
    check L18() else D18();
  D18():
    deopt 61 [];
  L18():
    p11 = prom<V +>{
      ff16 = ld ff;
      ff17 = force? ff16;
      checkMissing(ff17);
      return ff17;
    };
    p12 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r32):
      return r32;
    L3():
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L4():
      r31 = dyn base3(<lang c(1.0, 0.0, 2.0, 3.0)>, <lang c(2.0, 2.0, 2.0)>);
      goto L0(r31);
    L1(r34):
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L7() else L8();
    L5():
      c3 = ldf c in base;
      r35 = dyn c3(1.0, 0.0, 2.0, 3.0);
      goto L1(r35);
    L6():
      r33 = dyn base4(1.0, 0.0, 2.0, 3.0);
      goto L1(r33);
    L2(r37):
      list = ldf list in base;
      r39 = dyn list(r34, r37);
      goto L0(r39);
    L7():
      c4 = ldf c in base;
      r38 = dyn c4(2.0, 2.0, 2.0);
      goto L2(r38);
    L8():
      r36 = dyn base5(2.0, 2.0, 2.0);
      goto L2(r36);
    };
    r41 = dyn read_fwf3[, widths](p11, p12);
    check L19() else D19();
  D19():
    deopt 65 [r41];
  L19():
    unlink2 = ldf unlink;
    check L20() else D20();
  D20():
    deopt 67 [];
  L20():
    p13 = prom<V +>{
      ff18 = ld ff;
      ff19 = force? ff18;
      checkMissing(ff19);
      return ff19;
    };
    r43 = dyn unlink2(p13);
    check L21() else D21();
  D21():
    deopt 69 [r43];
  L21():
    popenv;
    return r43;
  }
}
fun inner2592845531(file, widths, header, sep, skip, `row.names`, `col.names`, n, buffersize, fileEncoding, `...`) {
  (reg file:*, reg widths:*, reg header:*, reg sep:*, reg skip:*, reg row_names:*, reg col_names:*, reg n:*, reg buffersize:*, reg fileEncoding:*, reg ddd:dots) -+> V { var file:*, var widths:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var skip:*, reg skip_isMissing:L, reg skip_orDefault:*, var `row.names`:*, var `col.names`:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, reg p:p(V +), var buffersize:*, reg buffersize_isMissing:L, reg buffersize_orDefault:*, var fileEncoding:*, reg fileEncoding_isMissing:L, reg fileEncoding_orDefault:*, var `...`:dots?, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg widths1:*, reg widths2:V, reg is_list:cls, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg widths3:*, reg widths4:V, reg length:cls, reg r7:V, reg do_call:cls, reg c1:*, reg c2:V, reg p1:p(V +), reg widths5:*, reg widths6:V, reg p2:p(V +), reg r10:V, reg widths7:*, reg widths8:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg widths9:*, reg widths10:V, reg abs:cls, reg r17:V, reg cumsum:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg cwidths:*, reg cwidths1:V, reg r21:V, reg c3:cls, reg r22:V, reg st:*, reg st1:V, reg c4:L, reg st3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg st6:V, reg r24:V, reg st7:*, reg st8:V, reg length1:cls, reg r25:V, reg r26:V, reg __:cls, reg r27:V, reg c5:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg drop:*, reg drop1:V, reg r28:V, reg __1:cls, reg r29:V, reg cwidths2:*, reg cwidths3:V, reg c6:L, reg cwidths5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg drop2:*, reg drop3:V, reg r30:V, reg __2:cls, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg sep1:*, reg sep2:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r36:V, reg r37:V, reg first:*, reg first1:V, reg length2:cls, reg r38:V, reg r39:V, reg rep_len:cls, reg r40:V, reg c7:cls, reg r41:V, reg buffersize1:*, reg buffersize2:V, reg recordlength:*, reg recordlength1:V, reg ___:cls, reg r42:V, reg recordlength2:*, reg recordlength3:V, reg r43:V, reg tempfile:cls, reg r44:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg on_exit:cls, reg r47:V, reg file1:cls, reg FILENAME:*, reg FILENAME1:V, reg p3:p(V +), reg r49:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg on_exit1:cls, reg r52:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r53:V, reg r54:V, reg file2:*, reg file3:V, reg c8:L, reg c9:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r55:V, reg r56:V, reg fileEncoding1:*, reg fileEncoding2:V, reg nzchar:cls, reg r57:V, reg c10:L, reg file4:cls, reg file5:*, reg file6:V, reg p4:p(V +), reg fileEncoding3:*, reg fileEncoding4:V, reg p5:p(V +), reg r60:V, reg r61:V, reg file7:cls, reg file8:*, reg file9:V, reg p6:p(V +), reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg r65:V, reg on_exit2:cls, reg r66:V, reg isOpen:cls, reg file10:*, reg file11:V, reg p7:p(V +), reg r69:V, reg r70:V, reg c11:L, reg open:cls, reg file12:*, reg file13:V, reg p8:p(V +), reg r72:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r73:V, reg r74:V, reg on_exit3:cls, reg r75:V, reg skip1:*, reg skip2:V, reg c12:L, reg readLines:cls, reg file14:*, reg file15:V, reg p9:p(V +), reg skip3:*, reg skip4:V, reg p10:p(V +), reg r78:V, reg header1:*, reg header2:V, reg c13:L, reg readLines1:cls, reg file16:*, reg file17:V, reg p11:p(V +), reg r81:V, reg cat:cls, reg FILE:*, reg FILE1:V, reg p12:p(V +), reg headerline:*, reg headerline1:V, reg p13:p(V +), reg r84:V, reg n1:*, reg n2:V, reg r86:V, reg c14:L, reg n3:*, reg n4:V, reg r88:V, reg c15:L, reg buffersize3:*, reg buffersize4:V, reg buffersize5:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r89:V, reg buffersize6:*, reg buffersize7:V, reg n5:*, reg n6:V, reg recordlength4:*, reg recordlength5:V, reg r90:V, reg min:cls, reg r91:V, reg readLines2:cls, reg file18:*, reg file19:V, reg p14:p(V +), reg thisblock:*, reg thisblock1:V, reg p15:p(V +), reg r94:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r95:V, reg r96:V, reg raw:*, reg raw1:V, reg length3:cls, reg r97:V, reg recordlength6:*, reg recordlength7:V, reg r98:V, reg c16:L, reg c18:V, reg nread:*, reg nread1:V, reg recordlength8:*, reg recordlength9:V, reg __3:cls, reg r99:V, reg c19:L, reg c20:V, reg c22:L, reg raw2:*, reg raw3:V, reg c23:L, reg raw5:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg nread2:*, reg nread3:V, reg nread4:*, reg nread5:V, reg recordlength10:*, reg recordlength11:V, reg __4:cls, reg r100:V, reg r101:V, reg r102:V, reg __5:cls, reg r103:V, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg nread6:*, reg nread7:V, reg recordlength12:*, reg recordlength13:V, reg __6:cls, reg r104:V, reg p16:p(V +), reg r106:V, reg p17:p(V +), reg nread8:*, reg nread9:V, reg recordlength14:*, reg recordlength15:V, reg __7:cls, reg r108:V, reg p18:p(V +), reg r110:V, reg p19:p(V +), reg r112:V, reg recordlength16:*, reg recordlength17:V, reg r114:V, reg c24:L, reg matrix:cls, reg raw6:*, reg raw7:V, reg p20:p(V +), reg recordlength18:*, reg recordlength19:V, reg p21:p(V +), reg r117:V, reg apply:cls, reg raw8:*, reg raw9:V, reg p22:p(V +), reg paste:*, reg paste1:V, reg p23:p(V +), reg r120:V, reg cat1:cls, reg FILE2:*, reg FILE3:V, reg p24:p(V +), reg sapply:cls, reg raw10:*, reg raw11:V, reg p25:p(V +), reg doone:*, reg doone1:V, reg p26:p(V +), reg r125:V, reg p27:p(V +), reg outsep:*, reg outsep1:V, reg p28:p(V +), reg r128:V, reg nread10:*, reg nread11:V, reg thisblock2:*, reg thisblock3:V, reg r129:V, reg c25:L, reg n7:*, reg n8:V, reg r131:V, reg c26:L, reg n9:*, reg n10:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r132:V, reg n13:V, reg r133:V, reg raw12:*, reg raw13:V, reg length4:cls, reg r134:V, reg r135:V, reg close:cls, reg FILE4:*, reg FILE5:V, reg p29:p(V +), reg r138:V, reg file20:cls, reg FILENAME2:*, reg FILENAME3:V, reg p30:p(V +), reg r140:V, reg read_table:cls, reg FILE6:*, reg FILE7:V, reg p31:p(V +), reg header3:*, reg header4:V, reg p32:p(V +), reg sep3:*, reg sep4:V, reg p33:p(V +), reg row_names1:*, reg row_names2:V, reg p34:p(V +), reg col_names1:*, reg col_names2:V, reg p35:p(V +), reg ddd1:dots?, reg r146:V |
    mkenv;
    st file = file;
    st widths = widths;
    header_isMissing = missing.0(header);
    if header_isMissing then L0(FALSE) else L0(header);
  L0(header_orDefault):
    st header = header_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L1("\t") else L1(sep);
  L1(sep_orDefault):
    st sep = sep_orDefault;
    skip_isMissing = missing.0(skip);
    if skip_isMissing then L2(0) else L2(skip);
  L2(skip_orDefault):
    st skip = skip_orDefault;
    st `row.names` = row_names;
    st `col.names` = col_names;
    n_isMissing = missing.0(n);
    if n_isMissing then L3() else L4(n);
  L3():
    p = prom<V +>{
      return -1;
    };
    goto L4(p);
  L4(n_orDefault):
    st n = n_orDefault;
    buffersize_isMissing = missing.0(buffersize);
    if buffersize_isMissing then L5(2000.0) else L5(buffersize);
  L5(buffersize_orDefault):
    st buffersize = buffersize_orDefault;
    fileEncoding_isMissing = missing.0(fileEncoding);
    if fileEncoding_isMissing then L6("") else L6(fileEncoding);
  L6(fileEncoding_orDefault):
    st fileEncoding = fileEncoding_orDefault;
    st `...` = ddd;
    r1 = clos inner2501545716;
    st doone = r1;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L54() else L55();
  L7(r3):
    c = `as.logical`(r3);
    if c then L58() else L8();
  L54():
    widths1 = ld widths;
    check L56() else D0();
  L55():
    r2 = dyn base(<sym widths>);
    goto L7(r2);
  D0():
    deopt 5 [widths1];
  L8():
    st recordlength = 1;
    goto L10();
  L10():
    widths7 = ld widths;
    check L66() else D6();
  L56():
    widths2 = force? widths1;
    checkMissing(widths2);
    is_list = ldf `is.list` in base;
    r4 = dyn is_list(widths2);
    check L57() else D1();
  L58():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L59() else L60();
  D1():
    deopt 8 [r4];
  D6():
    deopt 25 [widths7];
  L9(r6):
    st recordlength = r6;
    do_call = ldf `do.call`;
    check L63() else D4();
  L57():
    goto L7(r4);
  L59():
    widths3 = ld widths;
    check L61() else D2();
  L60():
    r5 = dyn base1(<sym widths>);
    goto L9(r5);
  L66():
    widths8 = force? widths7;
    checkMissing(widths8);
    r12 = `<`(widths8, 0);
    st drop = r12;
    sym2 = ldf cumsum;
    base2 = ldf cumsum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L67() else L68();
  D2():
    deopt 11 [widths3];
  D4():
    deopt 17 [];
  L11(r14):
    st cwidths = r14;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  L61():
    widths4 = force? widths3;
    checkMissing(widths4);
    length = ldf length in base;
    r7 = dyn length(widths4);
    check L62() else D3();
  L63():
    p1 = prom<V +>{
      c1 = ld c;
      c2 = force? c1;
      checkMissing(c2);
      return c2;
    };
    p2 = prom<V +>{
      widths5 = ld widths;
      widths6 = force? widths5;
      checkMissing(widths6);
      return widths6;
    };
    r10 = dyn do_call(p1, p2);
    check L64() else D5();
  L67():
    sym3 = ldf abs;
    base3 = ldf abs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L69() else L70();
  L68():
    r13 = dyn base2(<lang abs(widths)>);
    goto L11(r13);
  D3():
    deopt 14 [r7];
  D5():
    deopt 20 [r10];
  L12(r16):
    cumsum = ldf cumsum in base;
    r18 = dyn cumsum(r16);
    check L73() else D9();
  L13(r20):
    st st = r20;
    st = ld st;
    check L78() else D12();
  L62():
    goto L9(r7);
  L64():
    st widths = r10;
    goto L10();
  L69():
    widths9 = ld widths;
    check L71() else D7();
  L70():
    r15 = dyn base3(<sym widths>);
    goto L12(r15);
  L74():
    cwidths = ld cwidths;
    check L76() else D10();
  L75():
    r19 = dyn base4(1, <lang `+`(1, cwidths)>);
    goto L13(r19);
  D7():
    deopt 34 [widths9];
  D9():
    deopt 39 [r18];
  D10():
    deopt 45 [1, cwidths];
  D12():
    deopt 51 [st];
  L71():
    widths10 = force? widths9;
    checkMissing(widths10);
    abs = ldf abs in base;
    r17 = dyn abs(widths10);
    check L72() else D8();
  L73():
    goto L11(r18);
  L76():
    cwidths1 = force? cwidths;
    checkMissing(cwidths1);
    r21 = `+`(1, cwidths1);
    c3 = ldf c in base;
    r22 = dyn c3(1, r21);
    check L77() else D11();
  L78():
    st1 = force? st;
    checkMissing(st1);
    c4 = `is.object`(st1);
    if c4 then L79() else L80(st1);
  D8():
    deopt 37 [r17];
  D11():
    deopt 49 [r22];
  L14(dx1):
    c5 = `is.object`(dx1);
    if c5 then L86() else L87(dx1);
  L72():
    goto L12(r17);
  L77():
    goto L13(r22);
  L79():
    dr = tryDispatchBuiltin.1("[", st1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L81() else L80(dr);
  L80(st3):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L82() else L83();
  L15(st6, r24):
    r26 = `-`(<missing>, r24);
    __ = ldf `[` in base;
    r27 = dyn __(st6, r26);
    goto L14(r27);
  L16(dx5):
    st first = dx5;
    cwidths2 = ld cwidths;
    check L90() else D16();
  L81():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L82():
    st7 = ld st;
    check L84() else D13();
  L83():
    r23 = dyn base5(<sym st>);
    goto L15(st3, r23);
  L86():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L88() else L87(dr2);
  L87(dx3):
    drop = ld drop;
    check L89() else D15();
  D13():
    deopt 55 [st3, st7];
  D15():
    deopt 61 [dx3, drop];
  D16():
    deopt 66 [cwidths2];
  L84():
    st8 = force? st7;
    checkMissing(st8);
    length1 = ldf length in base;
    r25 = dyn length1(st8);
    check L85() else D14();
  L88():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx4);
  L89():
    drop1 = force? drop;
    checkMissing(drop1);
    r28 = `!`(drop1);
    __1 = ldf `[` in base;
    r29 = dyn __1(dx3, r28);
    goto L16(r29);
  L90():
    cwidths3 = force? cwidths2;
    checkMissing(cwidths3);
    c6 = `is.object`(cwidths3);
    if c6 then L91() else L92(cwidths3);
  D14():
    deopt 58 [st3, r25];
  L17(dx7):
    st last = dx7;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L95() else L96();
  L85():
    goto L15(st3, r25);
  L91():
    dr4 = tryDispatchBuiltin.1("[", cwidths3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L93() else L92(dr4);
  L92(cwidths5):
    drop2 = ld drop;
    check L94() else D17();
  D17():
    deopt 68 [cwidths5, drop2];
  L18(r33):
    st outsep = r33;
    buffersize1 = ld buffersize;
    check L106() else D23();
  L93():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L17(dx6);
  L94():
    drop3 = force? drop2;
    checkMissing(drop3);
    r30 = `!`(drop3);
    __2 = ldf `[` in base;
    r31 = dyn __2(cwidths5, r30);
    goto L17(r31);
  L95():
    sym7 = ldf rep_len;
    base7 = ldf rep_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L97() else L98();
  L96():
    r32 = dyn base6(<lang rep_len(sep, `-`(length(first), 1))>, "\n");
    goto L18(r32);
  D23():
    deopt 94 [buffersize1];
  L19(r35):
    c7 = ldf c in base;
    r41 = dyn c7(r35, "\n");
    check L105() else D22();
  L97():
    sep1 = ld sep;
    check L99() else D18();
  L98():
    r34 = dyn base7(<sym sep>, <lang `-`(length(first), 1)>);
    goto L19(r34);
  L106():
    buffersize2 = force? buffersize1;
    checkMissing(buffersize2);
    recordlength = ld recordlength;
    check L107() else D24();
  D18():
    deopt 77 [sep1];
  D22():
    deopt 91 [r41];
  D24():
    deopt 96 [recordlength];
  L99():
    sep2 = force? sep1;
    checkMissing(sep2);
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L100() else L101();
  L105():
    goto L18(r41);
  L107():
    recordlength1 = force? recordlength;
    checkMissing(recordlength1);
    ___ = ldf `%/%` in base;
    r42 = dyn ___(buffersize2, recordlength1);
    check L108() else D25();
  D25():
    deopt 99 [r42];
  L20(r37):
    r39 = `-`(r37, 1);
    rep_len = ldf rep_len in base;
    r40 = dyn rep_len(sep2, r39);
    check L104() else D21();
  L100():
    first = ld first;
    check L102() else D19();
  L101():
    r36 = dyn base8(<sym first>);
    goto L20(r36);
  L108():
    recordlength2 = ld recordlength;
    check L109() else D26();
  D19():
    deopt 81 [first];
  D21():
    deopt 88 [r40];
  D26():
    deopt 99 [r42, recordlength2];
  L102():
    first1 = force? first;
    checkMissing(first1);
    length2 = ldf length in base;
    r38 = dyn length2(first1);
    check L103() else D20();
  L104():
    goto L19(r40);
  L109():
    recordlength3 = force? recordlength2;
    checkMissing(recordlength3);
    r43 = `*`(r42, recordlength3);
    st buffersize = r43;
    tempfile = ldf tempfile;
    check L110() else D27();
  D20():
    deopt 84 [r38];
  D27():
    deopt 104 [];
  L103():
    goto L20(r38);
  L110():
    r44 = dyn tempfile("Rfwf.");
    check L111() else D28();
  D28():
    deopt 106 [r44];
  L111():
    st FILENAME = r44;
    sym9 = ldf `on.exit`;
    base9 = ldf `on.exit` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L112() else L113();
  L21():
    file1 = ldf file;
    check L114() else D29();
  L112():
    on_exit = ldf `on.exit` in base;
    r47 = dyn on_exit(<lang unlink(FILENAME)>);
    goto L21();
  L113():
    r45 = dyn base9(<lang unlink(FILENAME)>);
    goto L21();
  D29():
    deopt 112 [];
  L114():
    p3 = prom<V +>{
      FILENAME = ld FILENAME;
      FILENAME1 = force? FILENAME;
      checkMissing(FILENAME1);
      return FILENAME1;
    };
    r49 = dyn file1(p3, "a");
    check L115() else D30();
  D30():
    deopt 115 [r49];
  L115():
    st FILE = r49;
    sym10 = ldf `on.exit`;
    base10 = ldf `on.exit` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L116() else L117();
  L22():
    sym11 = ldf `is.character`;
    base11 = ldf `is.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L118() else L119();
  L116():
    on_exit1 = ldf `on.exit` in base;
    r52 = dyn on_exit1(<lang close(FILE)>, TRUE);
    goto L22();
  L117():
    r50 = dyn base10[, add](<lang close(FILE)>, TRUE);
    goto L22();
  L23(r54):
    c9 = `as.logical`(r54);
    if c9 then L121() else L24();
  L118():
    file2 = ld file;
    check L120() else D31();
  L119():
    r53 = dyn base11(<sym file>);
    goto L23(r53);
  D31():
    deopt 121 [file2];
  L24():
    isOpen = ldf isOpen;
    check L135() else D38();
  L29():
    skip1 = ld skip;
    check L143() else D42();
  L120():
    file3 = force? file2;
    checkMissing(file3);
    c8 = `is.character`(file3);
    goto L23(c8);
  L121():
    sym12 = ldf nzchar;
    base12 = ldf nzchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L122() else L123();
  D38():
    deopt 147 [];
  D42():
    deopt 161 [skip1];
  L25(r56):
    c10 = `as.logical`(r56);
    if c10 then L126() else L26();
  L122():
    fileEncoding1 = ld fileEncoding;
    check L124() else D32();
  L123():
    r55 = dyn base12(<sym fileEncoding>);
    goto L25(r55);
  L135():
    p7 = prom<V +>{
      file10 = ld file;
      file11 = force? file10;
      checkMissing(file11);
      return file11;
    };
    r69 = dyn isOpen(p7);
    check L136() else D39();
  L143():
    skip2 = force? skip1;
    checkMissing(skip2);
    c12 = `as.logical`(skip2);
    if c12 then L144() else L32();
  D32():
    deopt 126 [fileEncoding1];
  D39():
    deopt 149 [r69];
  L26():
    file7 = ldf file;
    check L130() else D36();
  L27(r61):
    st file = r61;
    sym13 = ldf `on.exit`;
    base13 = ldf `on.exit` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L132() else L133();
  L32():
    goto L33();
  L33():
    header1 = ld header;
    check L148() else D45();
  L124():
    fileEncoding2 = force? fileEncoding1;
    checkMissing(fileEncoding2);
    nzchar = ldf nzchar in base;
    r57 = dyn nzchar(fileEncoding2);
    check L125() else D33();
  L126():
    file4 = ldf file;
    check L127() else D34();
  L136():
    r70 = `!`(r69);
    c11 = `as.logical`(r70);
    if c11 then L137() else L30();
  L144():
    readLines = ldf readLines;
    check L145() else D43();
  D33():
    deopt 129 [r57];
  D34():
    deopt 131 [];
  D36():
    deopt 138 [];
  D43():
    deopt 164 [];
  D45():
    deopt 171 [header1];
  L28(r65):
    goto L29();
  L30():
    goto L29();
  L125():
    goto L25(r57);
  L127():
    p4 = prom<V +>{
      file5 = ld file;
      file6 = force? file5;
      checkMissing(file6);
      return file6;
    };
    p5 = prom<V +>{
      fileEncoding3 = ld fileEncoding;
      fileEncoding4 = force? fileEncoding3;
      checkMissing(fileEncoding4);
      return fileEncoding4;
    };
    r60 = dyn file4[, , encoding](p4, "rt", p5);
    check L128() else D35();
  L130():
    p6 = prom<V +>{
      file8 = ld file;
      file9 = force? file8;
      checkMissing(file9);
      return file9;
    };
    r63 = dyn file7(p6, "rt");
    check L131() else D37();
  L132():
    on_exit2 = ldf `on.exit` in base;
    r66 = dyn on_exit2(<lang close(file)>, TRUE);
    goto L28(r66);
  L133():
    r64 = dyn base13[, add](<lang close(file)>, TRUE);
    goto L28(r64);
  L137():
    open = ldf open;
    check L138() else D40();
  L145():
    p9 = prom<V +>{
      file14 = ld file;
      file15 = force? file14;
      checkMissing(file15);
      return file15;
    };
    p10 = prom<V +>{
      skip3 = ld skip;
      skip4 = force? skip3;
      checkMissing(skip4);
      return skip4;
    };
    r78 = dyn readLines[, n](p9, p10);
    check L146() else D44();
  L148():
    header2 = force? header1;
    checkMissing(header2);
    c13 = `as.logical`(header2);
    if c13 then L149() else L34();
  D35():
    deopt 136 [r60];
  D37():
    deopt 141 [r63];
  D40():
    deopt 152 [];
  D44():
    deopt 168 [r78];
  L34():
    goto L35();
  L35():
    goto L53();
  L128():
    goto L27(r60);
  L131():
    goto L27(r63);
  L138():
    p8 = prom<V +>{
      file12 = ld file;
      file13 = force? file12;
      checkMissing(file13);
      return file13;
    };
    r72 = dyn open(p8, "rt");
    check L139() else D41();
  L146():
    goto L33();
  L149():
    readLines1 = ldf readLines;
    check L150() else D46();
  D41():
    deopt 155 [r72];
  D46():
    deopt 174 [];
  L53():
    n1 = ld n;
    check L155() else D50();
  L139():
    sym14 = ldf `on.exit`;
    base14 = ldf `on.exit` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L140() else L141();
  L150():
    p11 = prom<V +>{
      file16 = ld file;
      file17 = force? file16;
      checkMissing(file17);
      return file17;
    };
    r81 = dyn readLines1[, n](p11, 1);
    check L151() else D47();
  D47():
    deopt 178 [r81];
  D50():
    deopt 189 [n1];
  L31(r74):
    goto L29();
  L140():
    on_exit3 = ldf `on.exit` in base;
    r75 = dyn on_exit3(<lang close(file)>, TRUE);
    goto L31(r75);
  L141():
    r73 = dyn base14[, add](<lang close(file)>, TRUE);
    goto L31(r73);
  L151():
    st headerline = r81;
    cat = ldf cat;
    check L152() else D48();
  L155():
    n2 = force? n1;
    checkMissing(n2);
    r86 = `==`(n2, 0);
    c14 = `as.logical`(r86);
    if c14 then L156() else L36();
  D48():
    deopt 181 [];
  L36():
    n3 = ld n;
    check L159() else D51();
  L37():
    close = ldf close;
    check L216() else D85();
  L152():
    p12 = prom<V +>{
      FILE = ld FILE;
      FILE1 = force? FILE;
      checkMissing(FILE1);
      return FILE1;
    };
    p13 = prom<V +>{
      headerline = ld headerline;
      headerline1 = force? headerline;
      checkMissing(headerline1);
      return headerline1;
    };
    r84 = dyn cat[file, , ](p12, p13, "\n");
    check L153() else D49();
  L156():
    goto L37();
  D49():
    deopt 186 [r84];
  D51():
    deopt 197 [n3];
  D85():
    deopt 320 [];
  L153():
    goto L35();
  L159():
    n4 = force? n3;
    checkMissing(n4);
    r88 = `==`(n4, -1);
    c15 = `as.logical`(r88);
    if c15 then L160() else L39();
  L216():
    p29 = prom<V +>{
      FILE4 = ld FILE;
      FILE5 = force? FILE4;
      checkMissing(FILE5);
      return FILE5;
    };
    r138 = dyn close(p29);
    check L217() else D86();
  D86():
    deopt 322 [r138];
  L39():
    sym15 = ldf min;
    base15 = ldf min in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L163() else L164();
  L40(buffersize5):
    st thisblock = buffersize5;
    readLines2 = ldf readLines;
    check L169() else D57();
  L160():
    buffersize3 = ld buffersize;
    check L161() else D52();
  L217():
    file20 = ldf file;
    check L218() else D87();
  D52():
    deopt 201 [buffersize3];
  D57():
    deopt 215 [];
  D87():
    deopt 324 [];
  L161():
    buffersize4 = force? buffersize3;
    checkMissing(buffersize4);
    goto L40(buffersize4);
  L163():
    buffersize6 = ld buffersize;
    check L165() else D53();
  L164():
    r89 = dyn base15(<sym buffersize>, <lang `*`(n, recordlength)>);
    goto L40(r89);
  L169():
    p14 = prom<V +>{
      file18 = ld file;
      file19 = force? file18;
      checkMissing(file19);
      return file19;
    };
    p15 = prom<V +>{
      thisblock = ld thisblock;
      thisblock1 = force? thisblock;
      checkMissing(thisblock1);
      return thisblock1;
    };
    r94 = dyn readLines2[, n](p14, p15);
    check L170() else D58();
  L218():
    p30 = prom<V +>{
      FILENAME2 = ld FILENAME;
      FILENAME3 = force? FILENAME2;
      checkMissing(FILENAME3);
      return FILENAME3;
    };
    r140 = dyn file20(p30, "r");
    check L219() else D88();
  D53():
    deopt 205 [buffersize6];
  D58():
    deopt 219 [r94];
  D88():
    deopt 327 [r140];
  L165():
    buffersize7 = force? buffersize6;
    checkMissing(buffersize7);
    n5 = ld n;
    check L166() else D54();
  L170():
    st raw = r94;
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L171() else L172();
  L219():
    st FILE = r140;
    read_table = ldf `read.table`;
    check L220() else D89();
  D54():
    deopt 207 [n5];
  D89():
    deopt 330 [];
  L41(r96):
    st nread = r96;
    recordlength6 = ld recordlength;
    check L175() else D61();
  L166():
    n6 = force? n5;
    checkMissing(n6);
    recordlength4 = ld recordlength;
    check L167() else D55();
  L171():
    raw = ld raw;
    check L173() else D59();
  L172():
    r95 = dyn base16(<sym raw>);
    goto L41(r95);
  L220():
    p31 = prom<V +>{
      FILE6 = ld FILE;
      FILE7 = force? FILE6;
      checkMissing(FILE7);
      return FILE7;
    };
    p32 = prom<V +>{
      header3 = ld header;
      header4 = force? header3;
      checkMissing(header4);
      return header4;
    };
    p33 = prom<V +>{
      sep3 = ld sep;
      sep4 = force? sep3;
      checkMissing(sep4);
      return sep4;
    };
    p34 = prom<V +>{
      row_names1 = ld `row.names`;
      row_names2 = force? row_names1;
      checkMissing(row_names2);
      return row_names2;
    };
    p35 = prom<V +>{
      col_names1 = ld `col.names`;
      col_names2 = force? col_names1;
      checkMissing(col_names2);
      return col_names2;
    };
    ddd1 = ld `...`;
    r146 = dyn read_table[file, header, sep, `row.names`, `col.names`, quote, `...`](p31, p32, p33, p34, p35, "", ddd1);
    check L221() else D90();
  D55():
    deopt 208 [n6, recordlength4];
  D59():
    deopt 223 [raw];
  D61():
    deopt 228 [recordlength6];
  D90():
    deopt 344 [r146];
  L167():
    recordlength5 = force? recordlength4;
    checkMissing(recordlength5);
    r90 = `*`(n6, recordlength5);
    min = ldf min in base;
    r91 = dyn min(buffersize7, r90);
    check L168() else D56();
  L173():
    raw1 = force? raw;
    checkMissing(raw1);
    length3 = ldf length in base;
    r97 = dyn length3(raw1);
    check L174() else D60();
  L175():
    recordlength7 = force? recordlength6;
    checkMissing(recordlength7);
    r98 = `>`(recordlength7, 1);
    c16 = `as.logical`(r98);
    if c16 then L176() else L42(c16);
  L221():
    popenv;
    return r146;
  D56():
    deopt 212 [r91];
  D60():
    deopt 226 [r97];
  L42(c18):
    c22 = `as.logical`(c18);
    if c22 then L181() else L43();
  L168():
    goto L40(r91);
  L174():
    goto L41(r97);
  L176():
    nread = ld nread;
    check L177() else D62();
  D62():
    deopt 233 [c16, nread];
  L43():
    goto L45();
  L45():
    recordlength16 = ld recordlength;
    check L193() else D72();
  L177():
    nread1 = force? nread;
    checkMissing(nread1);
    recordlength8 = ld recordlength;
    check L178() else D63();
  L181():
    raw2 = ld raw;
    check L182() else D65();
  D63():
    deopt 235 [c16, recordlength8];
  D65():
    deopt 240 [raw2];
  D72():
    deopt 263 [recordlength16];
  L178():
    recordlength9 = force? recordlength8;
    checkMissing(recordlength9);
    __3 = ldf `%%` in base;
    r99 = dyn __3(nread1, recordlength9);
    check L179() else D64();
  L182():
    raw3 = force? raw2;
    checkMissing(raw3);
    c23 = `is.object`(raw3);
    if c23 then L183() else L184(raw3);
  L193():
    recordlength17 = force? recordlength16;
    checkMissing(recordlength17);
    r114 = `>`(recordlength17, 1);
    c24 = `as.logical`(r114);
    if c24 then L194() else L46();
  D64():
    deopt 238 [c16, r99];
  L44(dx9):
    st raw = dx9;
    warning = ldf warning;
    check L190() else D70();
  L46():
    goto L47();
  L47():
    cat1 = ldf cat;
    check L200() else D77();
  L179():
    c19 = `as.logical`(r99);
    c20 = `&&`(c16, c19);
    goto L42(c20);
  L183():
    dr6 = tryDispatchBuiltin.1("[", raw3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L185() else L184(dr6);
  L184(raw5):
    nread2 = ld nread;
    check L186() else D66();
  L194():
    matrix = ldf matrix;
    check L195() else D73();
  D66():
    deopt 243 [raw5, 1, nread2];
  D70():
    deopt 256 [];
  D73():
    deopt 268 [];
  D77():
    deopt 286 [];
  L185():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L44(dx8);
  L186():
    nread3 = force? nread2;
    checkMissing(nread3);
    nread4 = ld nread;
    check L187() else D67();
  L190():
    p19 = prom<V +>{
      sprintf = ldf sprintf;
      p17 = prom<V +>{
        ngettext = ldf ngettext;
        p16 = prom<V +>{
          nread6 = ld nread;
          nread7 = force? nread6;
          checkMissing(nread7);
          recordlength12 = ld recordlength;
          recordlength13 = force? recordlength12;
          checkMissing(recordlength13);
          __6 = ldf `%%` in base;
          r104 = dyn __6(nread7, recordlength13);
          return r104;
        };
        r106 = dyn ngettext(p16, "last record incomplete, %d line discarded", "last record incomplete, %d lines discarded");
        return r106;
      };
      p18 = prom<V +>{
        nread8 = ld nread;
        nread9 = force? nread8;
        checkMissing(nread9);
        recordlength14 = ld recordlength;
        recordlength15 = force? recordlength14;
        checkMissing(recordlength15);
        __7 = ldf `%%` in base;
        r108 = dyn __7(nread9, recordlength15);
        return r108;
      };
      r110 = dyn sprintf(p17, p18);
      return r110;
    };
    r112 = dyn warning[, domain](p19, NA_LGL);
    check L191() else D71();
  L195():
    p20 = prom<V +>{
      raw6 = ld raw;
      raw7 = force? raw6;
      checkMissing(raw7);
      return raw7;
    };
    p21 = prom<V +>{
      recordlength18 = ld recordlength;
      recordlength19 = force? recordlength18;
      checkMissing(recordlength19);
      return recordlength19;
    };
    r117 = dyn matrix[, nrow](p20, p21);
    check L196() else D74();
  L200():
    p24 = prom<V +>{
      FILE2 = ld FILE;
      FILE3 = force? FILE2;
      checkMissing(FILE3);
      return FILE3;
    };
    p27 = prom<V +>{
      sapply = ldf sapply;
      p25 = prom<V +>{
        raw10 = ld raw;
        raw11 = force? raw10;
        checkMissing(raw11);
        return raw11;
      };
      p26 = prom<V +>{
        doone = ld doone;
        doone1 = force? doone;
        checkMissing(doone1);
        return doone1;
      };
      r125 = dyn sapply[, , `USE.NAMES`](p25, p26, FALSE);
      return r125;
    };
    p28 = prom<V +>{
      outsep = ld outsep;
      outsep1 = force? outsep;
      checkMissing(outsep1);
      return outsep1;
    };
    r128 = dyn cat1[file, , sep](p24, p27, p28);
    check L201() else D78();
  D67():
    deopt 245 [raw5, 1, nread3, nread4];
  D71():
    deopt 260 [r112];
  D74():
    deopt 272 [r117];
  D78():
    deopt 292 [r128];
  L187():
    nread5 = force? nread4;
    checkMissing(nread5);
    recordlength10 = ld recordlength;
    check L188() else D68();
  L191():
    goto L45();
  L196():
    st raw = r117;
    apply = ldf apply;
    check L197() else D75();
  L201():
    nread10 = ld nread;
    check L202() else D79();
  D68():
    deopt 247 [raw5, 1, nread3, recordlength10];
  D75():
    deopt 275 [];
  D79():
    deopt 293 [nread10];
  L188():
    recordlength11 = force? recordlength10;
    checkMissing(recordlength11);
    __4 = ldf `%%` in base;
    r100 = dyn __4(nread5, recordlength11);
    check L189() else D69();
  L197():
    p22 = prom<V +>{
      raw8 = ld raw;
      raw9 = force? raw8;
      checkMissing(raw9);
      return raw9;
    };
    p23 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r120 = dyn apply[, , , collapse](p22, 2, p23, "");
    check L198() else D76();
  L202():
    nread11 = force? nread10;
    checkMissing(nread11);
    thisblock2 = ld thisblock;
    check L203() else D80();
  D69():
    deopt 250 [raw5, 1, nread3, r100];
  D76():
    deopt 281 [r120];
  D80():
    deopt 294 [nread11, thisblock2];
  L189():
    r101 = `-`(nread3, r100);
    r102 = `:`(1, r101);
    __5 = ldf `[` in base;
    r103 = dyn __5(raw5, r102);
    goto L44(r103);
  L198():
    st raw = r120;
    goto L47();
  L203():
    thisblock3 = force? thisblock2;
    checkMissing(thisblock3);
    r129 = `<`(nread11, thisblock3);
    c25 = `as.logical`(r129);
    if c25 then L204() else L48();
  L48():
    n7 = ld n;
    check L207() else D81();
  L204():
    goto L37();
  D81():
    deopt 301 [n7];
  L207():
    n8 = force? n7;
    checkMissing(n8);
    r131 = `>`(n8, 0);
    c26 = `as.logical`(r131);
    if c26 then L208() else L50();
  L50():
    goto L52();
  L52():
    goto L53();
  L208():
    n9 = ld n;
    check L209() else D82();
  D82():
    deopt 305 [n9];
  L209():
    n10 = force? n9;
    checkMissing(n10);
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L210() else L211();
  L51(n13, r133):
    r135 = `-`(n13, r133);
    st n = r135;
    goto L52();
  L210():
    raw12 = ld raw;
    check L212() else D83();
  L211():
    r132 = dyn base17(<sym raw>);
    goto L51(n10, r132);
  D83():
    deopt 308 [n10, raw12];
  L212():
    raw13 = force? raw12;
    checkMissing(raw13);
    length4 = ldf length in base;
    r134 = dyn length4(raw13);
    check L213() else D84();
  D84():
    deopt 311 [n10, r134];
  L213():
    goto L51(n10, r134);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg substring:cls, reg x1:*, reg x2:V, reg p:p(V +), reg first:*, reg first1:V, reg p1:p(V +), reg last:*, reg last1:V, reg p2:p(V +), reg r3:V, reg l:*, reg c:L, reg r5:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:S, reg l5:*, reg r14:S, reg r15:V, reg x3:*, reg x4:V, reg nzchar:cls, reg r16:V, reg r17:V, reg ___:cls, reg r18:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    substring = ldf substring;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      first = ld first;
      first1 = force? first;
      checkMissing(first1);
      return first1;
    };
    p2 = prom<V +>{
      last = ld last;
      last1 = force? last;
      checkMissing(last1);
      return last1;
    };
    r3 = dyn substring(p, p1, p2);
    check L3() else D1();
  D1():
    deopt 5 [r3];
  L3():
    st x = r3;
    l = ld x;
    c = `is.object`(l);
    if c then L4() else L5(NA_STR, l);
  L0(dx1):
    st x = dx1;
    x5 = ld x;
    check L11() else D4();
  L4():
    dr = tryDispatchBuiltin.0("[<-", l, NA_STR);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(NA_STR, dr);
  L5(r5, l2):
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  D4():
    deopt 19 [x5];
  L1(r13, l5, r14, r15):
    r17 = `!`(r15);
    ___ = ldf `[<-` in base;
    r18 = dyn ___(l5, r14, r17);
    goto L0(r18);
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L7():
    x3 = ld x;
    check L9() else D2();
  L8():
    r12 = dyn base(<sym x>);
    goto L1(r5, l2, NA_STR, r12);
  L11():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  D2():
    deopt 12 [r5, l2, NA_STR, x3];
  L9():
    x4 = force? x3;
    checkMissing(x4);
    nzchar = ldf nzchar in base;
    r16 = dyn nzchar(x4);
    check L10() else D3();
  D3():
    deopt 15 [r5, l2, NA_STR, r16];
  L10():
    goto L1(r5, l2, NA_STR, r16);
  }
}