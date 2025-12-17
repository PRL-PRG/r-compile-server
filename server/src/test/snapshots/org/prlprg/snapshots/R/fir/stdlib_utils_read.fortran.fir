fun main() {
  () -+> V { reg r:cls, reg tempfile:cls, reg r1:V, reg cat:cls, reg ff:*, reg ff1:V, reg p:p(V +), reg r3:V, reg read_fortran:cls, reg ff2:*, reg ff3:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg read_fortran1:cls, reg ff4:*, reg ff5:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg c1:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg unlink:cls, reg ff6:*, reg ff7:V, reg p5:p(V +), reg r17:V, reg cat1:cls, reg ff8:*, reg ff9:V, reg p6:p(V +), reg r19:V, reg read_fortran2:cls, reg ff10:*, reg ff11:V, reg p7:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg c2:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg c3:cls, reg r28:V, reg list:cls, reg r29:V, reg p8:p(V +), reg r31:V, reg unlink1:cls, reg ff12:*, reg ff13:V, reg p9:p(V +), reg r33:V, reg cat2:cls, reg ff14:*, reg ff15:V, reg p10:p(V +), reg r35:V, reg read_fortran3:cls, reg ff16:*, reg ff17:V, reg p11:p(V +), reg r37:V, reg unlink2:cls, reg ff18:*, reg ff19:V, reg p12:p(V +), reg r39:V |
    mkenv;
    r = clos inner305213692;
    st `read.fortran` = r;
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
    read_fortran = ldf `read.fortran`;
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
      r7 = dyn c("F2.1", "F2.0", "I2");
      goto L0(r7);
    L2():
      r5 = dyn base("F2.1", "F2.0", "I2");
      goto L0(r5);
    };
    r9 = dyn read_fortran(p1, p2);
    check L5() else D5();
  D5():
    deopt 20 [r9];
  L5():
    read_fortran1 = ldf `read.fortran`;
    check L6() else D6();
  D6():
    deopt 22 [];
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
      r13 = dyn c1("2F1.0", "2X", "2A1");
      goto L0(r13);
    L2():
      r11 = dyn base1("2F1.0", "2X", "2A1");
      goto L0(r11);
    };
    r15 = dyn read_fortran1(p3, p4);
    check L7() else D7();
  D7():
    deopt 25 [r15];
  L7():
    unlink = ldf unlink;
    check L8() else D8();
  D8():
    deopt 27 [];
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
    deopt 29 [r17];
  L9():
    cat1 = ldf cat;
    check L10() else D10();
  D10():
    deopt 31 [];
  L10():
    p6 = prom<V +>{
      ff8 = ld ff;
      ff9 = force? ff8;
      checkMissing(ff9);
      return ff9;
    };
    r19 = dyn cat1[file, , , sep](p6, "123456AB", "987654CD", "\n");
    check L11() else D11();
  D11():
    deopt 38 [r19];
  L11():
    read_fortran2 = ldf `read.fortran`;
    check L12() else D12();
  D12():
    deopt 40 [];
  L12():
    p7 = prom<V +>{
      ff10 = ld ff;
      ff11 = force? ff10;
      checkMissing(ff11);
      return ff11;
    };
    p8 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r22):
      return r22;
    L3():
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L4():
      r21 = dyn base2(<lang c("2F3.1", "A2")>, <lang c("3I2", "2X")>);
      goto L0(r21);
    L1(r24):
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L7() else L8();
    L5():
      c2 = ldf c in base;
      r25 = dyn c2("2F3.1", "A2");
      goto L1(r25);
    L6():
      r23 = dyn base3("2F3.1", "A2");
      goto L1(r23);
    L2(r27):
      list = ldf list in base;
      r29 = dyn list(r24, r27);
      goto L0(r29);
    L7():
      c3 = ldf c in base;
      r28 = dyn c3("3I2", "2X");
      goto L2(r28);
    L8():
      r26 = dyn base4("3I2", "2X");
      goto L2(r26);
    };
    r31 = dyn read_fortran2(p7, p8);
    check L13() else D13();
  D13():
    deopt 43 [r31];
  L13():
    unlink1 = ldf unlink;
    check L14() else D14();
  D14():
    deopt 45 [];
  L14():
    p9 = prom<V +>{
      ff12 = ld ff;
      ff13 = force? ff12;
      checkMissing(ff13);
      return ff13;
    };
    r33 = dyn unlink1(p9);
    check L15() else D15();
  D15():
    deopt 47 [r33];
  L15():
    cat2 = ldf cat;
    check L16() else D16();
  D16():
    deopt 49 [];
  L16():
    p10 = prom<V +>{
      ff14 = ld ff;
      ff15 = force? ff14;
      checkMissing(ff15);
      return ff15;
    };
    r35 = dyn cat2[file, , , sep](p10, "12.3456", "1234567", "\n");
    check L17() else D17();
  D17():
    deopt 56 [r35];
  L17():
    read_fortran3 = ldf `read.fortran`;
    check L18() else D18();
  D18():
    deopt 58 [];
  L18():
    p11 = prom<V +>{
      ff16 = ld ff;
      ff17 = force? ff16;
      checkMissing(ff17);
      return ff17;
    };
    r37 = dyn read_fortran3(p11, "F7.4");
    check L19() else D19();
  D19():
    deopt 61 [r37];
  L19():
    unlink2 = ldf unlink;
    check L20() else D20();
  D20():
    deopt 63 [];
  L20():
    p12 = prom<V +>{
      ff18 = ld ff;
      ff19 = force? ff18;
      checkMissing(ff19);
      return ff19;
    };
    r39 = dyn unlink2(p12);
    check L21() else D21();
  D21():
    deopt 65 [r39];
  L21():
    popenv;
    return r39;
  }
}
fun inner305213692(file, format, `...`, `as.is`, colClasses) {
  (reg file:*, reg format:*, reg ddd:dots, reg as_is:*, reg colClasses:*) -+> V { var file:*, var format:*, var `...`:dots?, var `as.is`:*, reg as_is_isMissing:L, reg as_is_orDefault:*, var colClasses:*, reg colClasses_isMissing:L, reg colClasses_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg format1:*, reg format2:V, reg is_list:cls, reg r3:V, reg c:L, reg lapply:cls, reg format3:*, reg format4:V, reg p:p(V +), reg processFormat:*, reg processFormat1:V, reg p1:p(V +), reg r6:V, reg lapply1:cls, reg ff:*, reg ff1:V, reg p2:p(V +), reg __:*, reg __1:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg colClasses1:*, reg colClasses2:V, reg is_na:cls, reg r12:V, reg c1:L, reg do_call:cls, reg c2:*, reg c3:V, reg p4:p(V +), reg lapply2:cls, reg ff2:*, reg ff3:V, reg p5:p(V +), reg __2:*, reg __3:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg do_call1:cls, reg c4:*, reg c5:V, reg p8:p(V +), reg lapply3:cls, reg ff4:*, reg ff5:V, reg p9:p(V +), reg __4:*, reg __5:V, reg p10:p(V +), reg r23:V, reg p11:p(V +), reg r25:V, reg processFormat2:cls, reg format5:*, reg format6:V, reg p12:p(V +), reg r28:V, reg ff6:*, reg ff7:V, reg c6:L, reg ff9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __6:cls, reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg colClasses3:*, reg colClasses4:V, reg is_na1:cls, reg r32:V, reg c7:L, reg ff10:*, reg ff11:V, reg c8:L, reg ff13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __7:cls, reg r33:V, reg ff14:*, reg ff15:V, reg c9:L, reg ff17:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __8:cls, reg r34:V, reg read_fwf:cls, reg file1:*, reg file2:V, reg p13:p(V +), reg widths:*, reg widths1:V, reg p14:p(V +), reg ddd1:dots?, reg colClasses5:*, reg colClasses6:V, reg p15:p(V +), reg r38:V, reg which:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg decimals:*, reg decimals1:V, reg is_na2:cls, reg r41:V, reg r42:V, reg p16:p(V +), reg r44:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x:V, reg rval:*, reg rval1:V, reg c11:L, reg i6:I, reg rval3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg i8:I, reg dx8:V, reg i9:*, reg i10:V, reg __9:cls, reg r45:V, reg decimals2:*, reg decimals3:V, reg c12:L, reg i12:I, reg dx10:V, reg r47:R, reg decimals5:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i14:I, reg dx13:V, reg r49:R, reg dx14:V, reg i15:*, reg i16:V, reg __10:cls, reg r50:V, reg r51:V, reg r52:V, reg r53:V, reg l1:*, reg c13:L, reg i18:I, reg r55:V, reg l3:*, reg dr10:V, reg dc5:L, reg dx15:V, reg i20:I, reg dx16:V, reg i21:*, reg i22:V, reg ___:cls, reg r58:V, reg rval4:*, reg rval5:V |
    mkenv;
    st file = file;
    st format = format;
    st `...` = ddd;
    as_is_isMissing = missing.0(as_is);
    if as_is_isMissing then L0(TRUE) else L0(as_is);
  L0(as_is_orDefault):
    st `as.is` = as_is_orDefault;
    colClasses_isMissing = missing.0(colClasses);
    if colClasses_isMissing then L1(NA_LGL) else L1(colClasses);
  L1(colClasses_orDefault):
    st colClasses = colClasses_orDefault;
    r = clos inner3691132759;
    st processFormat = r;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L2(r2):
    c = `as.logical`(r2);
    if c then L23() else L3();
  L19():
    format1 = ld format;
    check L21() else D0();
  L20():
    r1 = dyn base(<sym format>);
    goto L2(r1);
  D0():
    deopt 5 [format1];
  L3():
    processFormat2 = ldf processFormat;
    check L39() else D12();
  L7():
    read_fwf = ldf `read.fwf`;
    check L59() else D19();
  L21():
    format2 = force? format1;
    checkMissing(format2);
    is_list = ldf `is.list` in base;
    r3 = dyn is_list(format2);
    check L22() else D1();
  L23():
    lapply = ldf lapply;
    check L24() else D2();
  D1():
    deopt 8 [r3];
  D2():
    deopt 10 [];
  D12():
    deopt 43 [];
  D19():
    deopt 74 [];
  L22():
    goto L2(r3);
  L24():
    p = prom<V +>{
      format3 = ld format;
      format4 = force? format3;
      checkMissing(format4);
      return format4;
    };
    p1 = prom<V +>{
      processFormat = ld processFormat;
      processFormat1 = force? processFormat;
      checkMissing(processFormat1);
      return processFormat1;
    };
    r6 = dyn lapply(p, p1);
    check L25() else D3();
  L39():
    p12 = prom<V +>{
      format5 = ld format;
      format6 = force? format5;
      checkMissing(format6);
      return format6;
    };
    r28 = dyn processFormat2(p12);
    check L40() else D13();
  L59():
    p13 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p14 = prom<V +>{
      widths = ld widths;
      widths1 = force? widths;
      checkMissing(widths1);
      return widths1;
    };
    ddd1 = ld `...`;
    p15 = prom<V +>{
      colClasses5 = ld colClasses;
      colClasses6 = force? colClasses5;
      checkMissing(colClasses6);
      return colClasses6;
    };
    r38 = dyn read_fwf[, widths, `...`, colClasses](p13, p14, ddd1, p15);
    check L60() else D20();
  D3():
    deopt 13 [r6];
  D13():
    deopt 45 [r28];
  D20():
    deopt 81 [r38];
  L25():
    st ff = r6;
    lapply1 = ldf lapply;
    check L26() else D4();
  L40():
    st ff = r28;
    ff6 = ld ff;
    check L41() else D14();
  L60():
    st rval = r38;
    which = ldf which;
    check L61() else D21();
  D4():
    deopt 16 [];
  D14():
    deopt 47 [ff6];
  D21():
    deopt 84 [];
  L26():
    p2 = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    p3 = prom<V +>{
      __ = ld `[[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r9 = dyn lapply1(p2, p3, 1);
    check L27() else D5();
  L41():
    ff7 = force? ff6;
    checkMissing(ff7);
    c6 = `is.object`(ff7);
    if c6 then L42() else L43(ff7);
  L61():
    p16 = prom<V +>{
      sym3 = ldf `is.na`;
      base3 = ldf `is.na` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r40):
      r42 = `!`(r40);
      return r42;
    L1():
      decimals = ld decimals;
      decimals1 = force? decimals;
      checkMissing(decimals1);
      is_na2 = ldf `is.na` in base;
      r41 = dyn is_na2(decimals1);
      goto L0(r41);
    L2():
      r39 = dyn base3(<sym decimals>);
      goto L0(r39);
    };
    r44 = dyn which(p16);
    check L62() else D22();
  D5():
    deopt 20 [r9];
  D22():
    deopt 86 [r44];
  L8(dx1):
    st widths = dx1;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L27():
    st widths = r9;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L42():
    dr = tryDispatchBuiltin.1("[[", ff7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L44() else L43(dr);
  L43(ff9):
    __6 = ldf `[[` in base;
    r29 = dyn __6(ff9, 1);
    goto L8(r29);
  L62():
    s = toForSeq(r44);
    l = length(s);
    i = 0;
    goto L14(i);
  L4(r11):
    c1 = `as.logical`(r11);
    if c1 then L32() else L5();
  L9(r31):
    c7 = `as.logical`(r31);
    if c7 then L49() else L10();
  L14(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l, i2);
    if c10 then L63() else L18();
  L28():
    colClasses1 = ld colClasses;
    check L30() else D6();
  L29():
    r10 = dyn base1(<sym colClasses>);
    goto L4(r10);
  L44():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L45():
    colClasses3 = ld colClasses;
    check L47() else D15();
  L46():
    r30 = dyn base2(<sym colClasses>);
    goto L9(r30);
  D6():
    deopt 24 [colClasses1];
  D15():
    deopt 55 [colClasses3];
  L5():
    goto L6();
  L6():
    do_call1 = ldf `do.call`;
    check L36() else D10();
  L10():
    goto L12();
  L12():
    ff14 = ld ff;
    check L55() else D18();
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    rval = ld rval;
    check L64() else D23();
  L30():
    colClasses2 = force? colClasses1;
    checkMissing(colClasses2);
    is_na = ldf `is.na` in base;
    r12 = dyn is_na(colClasses2);
    check L31() else D7();
  L32():
    do_call = ldf `do.call`;
    check L33() else D8();
  L47():
    colClasses4 = force? colClasses3;
    checkMissing(colClasses4);
    is_na1 = ldf `is.na` in base;
    r32 = dyn is_na1(colClasses4);
    check L48() else D16();
  L49():
    ff10 = ld ff;
    check L50() else D17();
  L63():
    rval4 = ld rval;
    check L78() else D28();
  D7():
    deopt 27 [r12];
  D8():
    deopt 29 [];
  D10():
    deopt 37 [];
  D16():
    deopt 58 [r32];
  D17():
    deopt 59 [ff10];
  D18():
    deopt 67 [ff14];
  D23():
    deopt 87 [i2, rval];
  D28():
    deopt 112 [rval4];
  L31():
    goto L4(r12);
  L33():
    p4 = prom<V +>{
      c2 = ld c;
      c3 = force? c2;
      checkMissing(c3);
      return c3;
    };
    p7 = prom<V +>{
      lapply2 = ldf lapply;
      p5 = prom<V +>{
        ff2 = ld ff;
        ff3 = force? ff2;
        checkMissing(ff3);
        return ff3;
      };
      p6 = prom<V +>{
        __2 = ld `[[`;
        __3 = force? __2;
        checkMissing(__3);
        return __3;
      };
      r16 = dyn lapply2(p5, p6, 2);
      return r16;
    };
    r18 = dyn do_call(p4, p7);
    check L34() else D9();
  L36():
    p8 = prom<V +>{
      c4 = ld c;
      c5 = force? c4;
      checkMissing(c5);
      return c5;
    };
    p11 = prom<V +>{
      lapply3 = ldf lapply;
      p9 = prom<V +>{
        ff4 = ld ff;
        ff5 = force? ff4;
        checkMissing(ff5);
        return ff5;
      };
      p10 = prom<V +>{
        __4 = ld `[[`;
        __5 = force? __4;
        checkMissing(__5);
        return __5;
      };
      r23 = dyn lapply3(p9, p10, 3);
      return r23;
    };
    r25 = dyn do_call1(p8, p11);
    check L37() else D11();
  L48():
    goto L9(r32);
  L50():
    ff11 = force? ff10;
    checkMissing(ff11);
    c8 = `is.object`(ff11);
    if c8 then L51() else L52(ff11);
  L55():
    ff15 = force? ff14;
    checkMissing(ff15);
    c9 = `is.object`(ff15);
    if c9 then L56() else L57(ff15);
  L64():
    rval1 = force? rval;
    checkMissing(rval1);
    c11 = `is.object`(rval1);
    if c11 then L65() else L66(i2, rval1);
  L78():
    rval5 = force? rval4;
    checkMissing(rval5);
    popenv;
    return rval5;
  D9():
    deopt 32 [r18];
  D11():
    deopt 40 [r25];
  L11(dx3):
    st colClasses = dx3;
    goto L12();
  L13(dx6):
    st decimals = dx6;
    goto L7();
  L15(i8, dx8):
    decimals2 = ld decimals;
    check L69() else D25();
  L34():
    st colClasses = r18;
    goto L6();
  L37():
    st decimals = r25;
    goto L7();
  L51():
    dr2 = tryDispatchBuiltin.1("[[", ff11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(dr2);
  L52(ff13):
    __7 = ldf `[[` in base;
    r33 = dyn __7(ff13, 2);
    goto L11(r33);
  L56():
    dr4 = tryDispatchBuiltin.1("[[", ff15);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L58() else L57(dr4);
  L57(ff17):
    __8 = ldf `[[` in base;
    r34 = dyn __8(ff17, 3);
    goto L13(r34);
  L65():
    dr6 = tryDispatchBuiltin.1("[", rval1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L67() else L66(i2, dr6);
  L66(i6, rval3):
    i9 = ld i;
    check L68() else D24();
  D24():
    deopt 90 [i6, rval3, i9];
  D25():
    deopt 94 [i8, dx8, 10.0, decimals2];
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L58():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx5);
  L67():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L15(i2, dx7);
  L68():
    i10 = force? i9;
    __9 = ldf `[` in base;
    r45 = dyn __9(rval1, <missing>, i10);
    goto L15(i6, r45);
  L69():
    decimals3 = force? decimals2;
    checkMissing(decimals3);
    c12 = `is.object`(decimals3);
    if c12 then L70() else L71(i8, dx8, 10.0, decimals3);
  L16(i14, dx13, r49, dx14):
    r51 = `-`(<missing>, dx14);
    r52 = `^`(r49, r51);
    r53 = `*`(dx13, r52);
    l1 = ld rval;
    c13 = `is.object`(l1);
    if c13 then L74() else L75(i14, r53, l1);
  L70():
    dr8 = tryDispatchBuiltin.1("[", decimals3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L72() else L71(i8, dx8, 10.0, dr8);
  L71(i12, dx10, r47, decimals5):
    i15 = ld i;
    check L73() else D26();
  D26():
    deopt 96 [i12, dx10, r47, decimals5, i15];
  L17(i20, dx16):
    st rval = dx16;
    goto L14(i20);
  L72():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L16(i8, dx8, 10.0, dx12);
  L73():
    i16 = force? i15;
    __10 = ldf `[` in base;
    r50 = dyn __10(decimals5, i16);
    goto L16(i12, dx10, r47, r50);
  L74():
    dr10 = tryDispatchBuiltin.0("[<-", l1, r53);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L76() else L75(i14, r53, dr10);
  L75(i18, r55, l3):
    i21 = ld i;
    check L77() else D27();
  D27():
    deopt 104 [i18, r55, l3, r53, i21];
  L76():
    dx15 = getTryDispatchBuiltinValue(dr10);
    goto L17(i14, dx15);
  L77():
    i22 = force? i21;
    ___ = ldf `[<-` in base;
    r58 = dyn ___(l1, <missing>, i22, r53);
    goto L17(i18, r58);
  }
}
fun inner3691132759(format) {
  (reg format:*) -+> V { var format:*, reg toupper:cls, reg format1:*, reg format2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sub:cls, reg template:*, reg template1:V, reg p1:p(V +), reg format3:*, reg format4:V, reg p2:p(V +), reg r6:V, reg as_numeric:cls, reg r7:V, reg sub1:cls, reg template2:*, reg template3:V, reg p3:p(V +), reg format5:*, reg format6:V, reg p4:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg sub2:cls, reg template4:*, reg template5:V, reg p5:p(V +), reg format7:*, reg format8:V, reg p6:p(V +), reg r15:V, reg as_numeric1:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg sub3:cls, reg template6:*, reg template7:V, reg p7:p(V +), reg format9:*, reg format10:V, reg p8:p(V +), reg r21:V, reg as_numeric2:cls, reg r22:V, reg l:*, reg c:L, reg r24:I, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:I, reg l5:*, reg r33:I, reg r34:V, reg reps:*, reg reps1:V, reg is_na:cls, reg r35:V, reg ___:cls, reg r36:V, reg l6:*, reg c1:L, reg r38:I, reg l8:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:I, reg l11:*, reg r47:I, reg r48:V, reg lengths:*, reg lengths1:V, reg is_na1:cls, reg r49:V, reg types:*, reg types1:V, reg r50:V, reg r51:V, reg ___1:cls, reg r52:V, reg types2:*, reg types3:V, reg r53:V, reg reps2:*, reg reps3:V, reg c2:L, reg reps5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg charskip:*, reg charskip1:V, reg __:cls, reg r54:V, reg lengths2:*, reg lengths3:V, reg c3:L, reg dx7:V, reg lengths5:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg dx11:V, reg charskip2:*, reg charskip3:V, reg __1:cls, reg r55:V, reg r56:V, reg l12:*, reg c4:L, reg r58:V, reg l14:*, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg charskip4:*, reg charskip5:V, reg ___2:cls, reg r61:V, reg l15:*, reg c5:L, reg r63:R, reg l17:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg charskip6:*, reg charskip7:V, reg ___3:cls, reg r66:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r67:V, reg r68:V, reg lengths6:*, reg lengths7:V, reg anyNA:cls, reg r69:V, reg c6:L, reg stop:cls, reg r70:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r72:V, reg r73:V, reg lengths8:*, reg lengths9:V, reg reps6:*, reg reps7:V, reg rep_int:cls, reg r74:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r75:V, reg r76:V, reg types4:*, reg types5:V, reg reps8:*, reg reps9:V, reg rep_int1:cls, reg r77:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r78:V, reg r79:V, reg decimals:*, reg decimals1:V, reg reps10:*, reg reps11:V, reg rep_int2:cls, reg r80:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r81:V, reg r82:V, reg types6:*, reg types7:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r83:V, reg r84:V, reg c7:cls, reg r85:V, reg match:cls, reg r86:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r87:V, reg r88:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r89:V, reg r90:V, reg decimals2:*, reg decimals3:V, reg is_na2:cls, reg r91:V, reg r92:V, reg types8:*, reg types9:V, reg r93:V, reg r94:V, reg any:cls, reg r95:V, reg c8:L, reg stop1:cls, reg r96:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r98:V, reg r99:V, reg as_is:*, reg as_is1:V, reg c9:L, reg r100:V, reg c10:cls, reg r101:V, reg c11:L, reg r103:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg types10:*, reg types11:V, reg __2:cls, reg r104:V, reg colClasses:*, reg colClasses1:V, reg c12:L, reg colClasses3:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg types12:*, reg types13:V, reg r105:V, reg r106:V, reg __3:cls, reg r107:V, reg decimals4:*, reg decimals5:V, reg c13:L, reg decimals7:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg types14:*, reg types15:V, reg r108:V, reg r109:V, reg __4:cls, reg r110:V, reg lengths10:*, reg lengths11:V, reg c14:L, reg lengths13:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg types16:*, reg types17:V, reg r111:V, reg __5:cls, reg r112:V, reg r113:V, reg l18:*, reg c15:L, reg r115:V, reg l20:*, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg types18:*, reg types19:V, reg r118:V, reg ___4:cls, reg r119:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r120:V, reg r121:V, reg lengths14:*, reg lengths15:V, reg colClasses4:*, reg colClasses5:V, reg decimals8:*, reg decimals9:V, reg list:cls, reg r122:V |
    mkenv;
    st format = format;
    toupper = ldf toupper;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p = prom<V +>{
      format1 = ld format;
      format2 = force? format1;
      checkMissing(format2);
      return format2;
    };
    r1 = dyn toupper(p);
    check L33() else D1();
  D1():
    deopt 3 [r1];
  L33():
    st format = r1;
    st template = "^([0-9]*)([FXAI])([0-9]*)\\.?([0-9]*)";
    sym = ldf `as.numeric`;
    base = ldf `as.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L0(r3):
    st reps = r3;
    sub1 = ldf sub;
    check L39() else D5();
  L34():
    sub = ldf sub;
    check L36() else D2();
  L35():
    r2 = dyn base(<lang sub(template, "\\1", format)>);
    goto L0(r2);
  D2():
    deopt 11 [];
  D5():
    deopt 20 [];
  L36():
    p1 = prom<V +>{
      template = ld template;
      template1 = force? template;
      checkMissing(template1);
      return template1;
    };
    p2 = prom<V +>{
      format3 = ld format;
      format4 = force? format3;
      checkMissing(format4);
      return format4;
    };
    r6 = dyn sub(p1, "\\1", p2);
    check L37() else D3();
  L39():
    p3 = prom<V +>{
      template2 = ld template;
      template3 = force? template2;
      checkMissing(template3);
      return template3;
    };
    p4 = prom<V +>{
      format5 = ld format;
      format6 = force? format5;
      checkMissing(format6);
      return format6;
    };
    r10 = dyn sub1(p3, "\\2", p4);
    check L40() else D6();
  D3():
    deopt 15 [r6];
  D6():
    deopt 24 [r10];
  L37():
    as_numeric = ldf `as.numeric` in base;
    r7 = dyn as_numeric(r6);
    check L38() else D4();
  L40():
    st types = r10;
    sym1 = ldf `as.numeric`;
    base1 = ldf `as.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  D4():
    deopt 17 [r7];
  L1(r12):
    st lengths = r12;
    sym2 = ldf `as.numeric`;
    base2 = ldf `as.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L38():
    goto L0(r7);
  L41():
    sub2 = ldf sub;
    check L43() else D7();
  L42():
    r11 = dyn base1(<lang sub(template, "\\3", format)>);
    goto L1(r11);
  D7():
    deopt 29 [];
  L2(r18):
    st decimals = r18;
    l = ld reps;
    c = `is.object`(l);
    if c then L51() else L52(1, l);
  L43():
    p5 = prom<V +>{
      template4 = ld template;
      template5 = force? template4;
      checkMissing(template5);
      return template5;
    };
    p6 = prom<V +>{
      format7 = ld format;
      format8 = force? format7;
      checkMissing(format8);
      return format8;
    };
    r15 = dyn sub2(p5, "\\3", p6);
    check L44() else D8();
  L46():
    sub3 = ldf sub;
    check L48() else D10();
  L47():
    r17 = dyn base2(<lang sub(template, "\\4", format)>);
    goto L2(r17);
  D8():
    deopt 33 [r15];
  D10():
    deopt 40 [];
  L3(dx1):
    st reps = dx1;
    l6 = ld lengths;
    c1 = `is.object`(l6);
    if c1 then L58() else L59(1, l6);
  L44():
    as_numeric1 = ldf `as.numeric` in base;
    r16 = dyn as_numeric1(r15);
    check L45() else D9();
  L48():
    p7 = prom<V +>{
      template6 = ld template;
      template7 = force? template6;
      checkMissing(template7);
      return template7;
    };
    p8 = prom<V +>{
      format9 = ld format;
      format10 = force? format9;
      checkMissing(format10);
      return format10;
    };
    r21 = dyn sub3(p7, "\\4", p8);
    check L49() else D11();
  L51():
    dr = tryDispatchBuiltin.0("[<-", l, 1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(1, dr);
  L52(r24, l2):
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  D9():
    deopt 35 [r16];
  D11():
    deopt 44 [r21];
  L4(r32, l5, r33, r34):
    ___ = ldf `[<-` in base;
    r36 = dyn ___(l5, r33, r34);
    goto L3(r36);
  L5(dx3):
    st lengths = dx3;
    types2 = ld types;
    check L66() else D18();
  L45():
    goto L1(r16);
  L49():
    as_numeric2 = ldf `as.numeric` in base;
    r22 = dyn as_numeric2(r21);
    check L50() else D12();
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L54():
    reps = ld reps;
    check L56() else D13();
  L55():
    r31 = dyn base3(<sym reps>);
    goto L4(r24, l2, 1, r31);
  L58():
    dr2 = tryDispatchBuiltin.0("[<-", l6, 1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(1, dr2);
  L59(r38, l8):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  D12():
    deopt 46 [r22];
  D13():
    deopt 53 [r24, l2, 1, reps];
  D18():
    deopt 74 [types2];
  L6(r46, l11, r47, r48):
    types = ld types;
    check L65() else D17();
  L50():
    goto L2(r22);
  L56():
    reps1 = force? reps;
    checkMissing(reps1);
    is_na = ldf `is.na` in base;
    r35 = dyn is_na(reps1);
    check L57() else D14();
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L61():
    lengths = ld lengths;
    check L63() else D15();
  L62():
    r45 = dyn base4(<sym lengths>);
    goto L6(r38, l8, 1, r45);
  L66():
    types3 = force? types2;
    checkMissing(types3);
    r53 = `==`(types3, "X");
    st charskip = r53;
    reps2 = ld reps;
    check L67() else D19();
  D14():
    deopt 56 [r24, l2, 1, r35];
  D15():
    deopt 64 [r38, l8, 1, lengths];
  D17():
    deopt 67 [r46, l11, r47, r48, types];
  D19():
    deopt 79 [reps2];
  L57():
    goto L4(r24, l2, 1, r35);
  L63():
    lengths1 = force? lengths;
    checkMissing(lengths1);
    is_na1 = ldf `is.na` in base;
    r49 = dyn is_na1(lengths1);
    check L64() else D16();
  L65():
    types1 = force? types;
    checkMissing(types1);
    r50 = `==`(types1, "X");
    r51 = `&&`(r48, r50);
    ___1 = ldf `[<-` in base;
    r52 = dyn ___1(l11, r47, r51);
    goto L5(r52);
  L67():
    reps3 = force? reps2;
    checkMissing(reps3);
    c2 = `is.object`(reps3);
    if c2 then L68() else L69(reps3);
  D16():
    deopt 67 [r38, l8, 1, r49];
  L7(dx5):
    lengths2 = ld lengths;
    check L72() else D21();
  L64():
    goto L6(r38, l8, 1, r49);
  L68():
    dr4 = tryDispatchBuiltin.1("[", reps3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L70() else L69(dr4);
  L69(reps5):
    charskip = ld charskip;
    check L71() else D20();
  D20():
    deopt 81 [reps5, charskip];
  D21():
    deopt 83 [dx5, lengths2];
  L70():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L71():
    charskip1 = force? charskip;
    __ = ldf `[` in base;
    r54 = dyn __(reps5, charskip1);
    goto L7(r54);
  L72():
    lengths3 = force? lengths2;
    checkMissing(lengths3);
    c3 = `is.object`(lengths3);
    if c3 then L73() else L74(dx5, lengths3);
  L8(dx10, dx11):
    r56 = `*`(dx10, dx11);
    l12 = ld lengths;
    c4 = `is.object`(l12);
    if c4 then L77() else L78(r56, l12);
  L73():
    dr6 = tryDispatchBuiltin.1("[", lengths3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L75() else L74(dx5, dr6);
  L74(dx7, lengths5):
    charskip2 = ld charskip;
    check L76() else D22();
  D22():
    deopt 85 [dx7, lengths5, charskip2];
  L9(dx13):
    st lengths = dx13;
    l15 = ld reps;
    c5 = `is.object`(l15);
    if c5 then L81() else L82(1.0, l15);
  L75():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx5, dx9);
  L76():
    charskip3 = force? charskip2;
    __1 = ldf `[` in base;
    r55 = dyn __1(lengths5, charskip3);
    goto L8(dx7, r55);
  L77():
    dr8 = tryDispatchBuiltin.0("[<-", l12, r56);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L79() else L78(r56, dr8);
  L78(r58, l14):
    charskip4 = ld charskip;
    check L80() else D23();
  D23():
    deopt 90 [r58, l14, r56, charskip4];
  L10(dx15):
    st reps = dx15;
    sym5 = ldf anyNA;
    base5 = ldf anyNA in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L79():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L9(dx12);
  L80():
    charskip5 = force? charskip4;
    ___2 = ldf `[<-` in base;
    r61 = dyn ___2(l14, r56, charskip5);
    goto L9(r61);
  L81():
    dr10 = tryDispatchBuiltin.0("[<-", l15, 1.0);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L83() else L82(1.0, dr10);
  L82(r63, l17):
    charskip6 = ld charskip;
    check L84() else D24();
  D24():
    deopt 97 [r63, l17, 1.0, charskip6];
  L11(r68):
    c6 = `as.logical`(r68);
    if c6 then L89() else L12();
  L83():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L10(dx14);
  L84():
    charskip7 = force? charskip6;
    ___3 = ldf `[<-` in base;
    r66 = dyn ___3(l17, 1.0, charskip7);
    goto L10(r66);
  L85():
    lengths6 = ld lengths;
    check L87() else D25();
  L86():
    r67 = dyn base5(<sym lengths>);
    goto L11(r67);
  D25():
    deopt 103 [lengths6];
  L12():
    goto L13();
  L13():
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L93() else L94();
  L87():
    lengths7 = force? lengths6;
    checkMissing(lengths7);
    anyNA = ldf anyNA in base;
    r69 = dyn anyNA(lengths7);
    check L88() else D26();
  L89():
    stop = ldf stop;
    check L90() else D27();
  D26():
    deopt 106 [r69];
  D27():
    deopt 108 [];
  L14(r73):
    st lengths = r73;
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  L88():
    goto L11(r69);
  L90():
    r70 = dyn stop("missing lengths for some fields");
    check L91() else D28();
  L93():
    lengths8 = ld lengths;
    check L95() else D29();
  L94():
    r72 = dyn base6(<sym lengths>, <sym reps>);
    goto L14(r72);
  D28():
    deopt 110 [r70];
  D29():
    deopt 115 [lengths8];
  L15(r76):
    st types = r76;
    sym8 = ldf `rep.int`;
    base8 = ldf `rep.int` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L103() else L104();
  L91():
    goto L13();
  L95():
    lengths9 = force? lengths8;
    checkMissing(lengths9);
    reps6 = ld reps;
    check L96() else D30();
  L98():
    types4 = ld types;
    check L100() else D32();
  L99():
    r75 = dyn base7(<sym types>, <sym reps>);
    goto L15(r75);
  D30():
    deopt 117 [reps6];
  D32():
    deopt 124 [types4];
  L16(r79):
    st decimals = r79;
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L108() else L109();
  L96():
    reps7 = force? reps6;
    checkMissing(reps7);
    rep_int = ldf `rep.int` in base;
    r74 = dyn rep_int(lengths9, reps7);
    check L97() else D31();
  L100():
    types5 = force? types4;
    checkMissing(types5);
    reps8 = ld reps;
    check L101() else D33();
  L103():
    decimals = ld decimals;
    check L105() else D35();
  L104():
    r78 = dyn base8(<sym decimals>, <sym reps>);
    goto L16(r78);
  D31():
    deopt 120 [r74];
  D33():
    deopt 126 [reps8];
  D35():
    deopt 133 [decimals];
  L17(r82):
    st types = r82;
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L115() else L116();
  L97():
    goto L14(r74);
  L101():
    reps9 = force? reps8;
    checkMissing(reps9);
    rep_int1 = ldf `rep.int` in base;
    r77 = dyn rep_int1(types5, reps9);
    check L102() else D34();
  L105():
    decimals1 = force? decimals;
    checkMissing(decimals1);
    reps10 = ld reps;
    check L106() else D36();
  L108():
    types6 = ld types;
    check L110() else D38();
  L109():
    r81 = dyn base9(<sym types>, <lang c("F", "D", "X", "A", "I")>);
    goto L17(r81);
  D34():
    deopt 129 [r77];
  D36():
    deopt 135 [reps10];
  D38():
    deopt 142 [types6];
  L19(r88):
    c8 = `as.logical`(r88);
    if c8 then L123() else L21();
  L102():
    goto L15(r77);
  L106():
    reps11 = force? reps10;
    checkMissing(reps11);
    rep_int2 = ldf `rep.int` in base;
    r80 = dyn rep_int2(decimals1, reps11);
    check L107() else D37();
  L110():
    types7 = force? types6;
    checkMissing(types7);
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L111() else L112();
  L115():
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L117() else L118();
  L116():
    r87 = dyn base11(<lang `&`(`!`(is.na(decimals)), `>`(types, 2))>);
    goto L19(r87);
  D37():
    deopt 138 [r80];
  L18(r84):
    match = ldf match in base;
    r86 = dyn match(types7, r84, NA_INT, NULL);
    check L114() else D40();
  L20(r90):
    r92 = `!`(r90);
    types8 = ld types;
    check L121() else D43();
  L21():
    goto L22();
  L22():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L127() else L128();
  L107():
    goto L16(r80);
  L111():
    c7 = ldf c in base;
    r85 = dyn c7("F", "D", "X", "A", "I");
    check L113() else D39();
  L112():
    r83 = dyn base10("F", "D", "X", "A", "I");
    goto L18(r83);
  L117():
    decimals2 = ld decimals;
    check L119() else D41();
  L118():
    r89 = dyn base12(<sym decimals>);
    goto L20(r89);
  L123():
    stop1 = ldf stop;
    check L124() else D45();
  D39():
    deopt 152 [r85];
  D40():
    deopt 156 [r86];
  D41():
    deopt 162 [decimals2];
  D43():
    deopt 166 [r92, types8];
  D45():
    deopt 174 [];
  L23(r99):
    c11 = `is.object`(r99);
    if c11 then L133() else L134(r99);
  L113():
    goto L18(r85);
  L114():
    goto L17(r86);
  L119():
    decimals3 = force? decimals2;
    checkMissing(decimals3);
    is_na2 = ldf `is.na` in base;
    r91 = dyn is_na2(decimals3);
    check L120() else D42();
  L121():
    types9 = force? types8;
    checkMissing(types9);
    r93 = `>`(types9, 2);
    r94 = `&&`(r92, r93);
    any = ldf any in base;
    r95 = dyn any(r94);
    check L122() else D44();
  L124():
    r96 = dyn stop1("invalid format");
    check L125() else D46();
  L127():
    as_is = ld `as.is`;
    check L129() else D47();
  L128():
    r98 = dyn base13("numeric", "numeric", NA_LGL, <lang if(as.is, "character", NA_LGL)>, "integer");
    goto L23(r98);
  D42():
    deopt 165 [r91];
  D44():
    deopt 172 [r95];
  D46():
    deopt 176 [r96];
  D47():
    deopt 184 [as_is];
  L26(dx17):
    st colClasses = dx17;
    colClasses = ld colClasses;
    check L137() else D50();
  L120():
    goto L20(r91);
  L122():
    goto L19(r95);
  L125():
    goto L22();
  L129():
    as_is1 = force? as_is;
    checkMissing(as_is1);
    c9 = `as.logical`(as_is1);
    if c9 then L130() else L24();
  L133():
    dr12 = tryDispatchBuiltin.1("[", r99);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L135() else L134(dr12);
  L134(r103):
    types10 = ld types;
    check L136() else D49();
  D49():
    deopt 193 [r103, types10];
  D50():
    deopt 197 [colClasses];
  L24():
    goto L25(NA_LGL);
  L25(r100):
    c10 = ldf c in base;
    r101 = dyn c10("numeric", "numeric", NA_LGL, r100, "integer");
    check L132() else D48();
  L130():
    goto L25("character");
  L135():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L26(dx16);
  L136():
    types11 = force? types10;
    __2 = ldf `[` in base;
    r104 = dyn __2(r103, types11);
    goto L26(r104);
  L137():
    colClasses1 = force? colClasses;
    checkMissing(colClasses1);
    c12 = `is.object`(colClasses1);
    if c12 then L138() else L139(colClasses1);
  D48():
    deopt 192 [r101];
  L27(dx19):
    st colClasses = dx19;
    decimals4 = ld decimals;
    check L142() else D52();
  L132():
    goto L23(r101);
  L138():
    dr14 = tryDispatchBuiltin.1("[", colClasses1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L140() else L139(dr14);
  L139(colClasses3):
    types12 = ld types;
    check L141() else D51();
  D51():
    deopt 199 [colClasses3, types12];
  D52():
    deopt 206 [decimals4];
  L140():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L27(dx18);
  L141():
    types13 = force? types12;
    checkMissing(types13);
    r105 = `==`(types13, 3);
    r106 = `!`(r105);
    __3 = ldf `[` in base;
    r107 = dyn __3(colClasses3, r106);
    goto L27(r107);
  L142():
    decimals5 = force? decimals4;
    checkMissing(decimals5);
    c13 = `is.object`(decimals5);
    if c13 then L143() else L144(decimals5);
  L28(dx21):
    st decimals = dx21;
    lengths10 = ld lengths;
    check L147() else D54();
  L143():
    dr16 = tryDispatchBuiltin.1("[", decimals5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L145() else L144(dr16);
  L144(decimals7):
    types14 = ld types;
    check L146() else D53();
  D53():
    deopt 208 [decimals7, types14];
  D54():
    deopt 215 [lengths10];
  L145():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L28(dx20);
  L146():
    types15 = force? types14;
    checkMissing(types15);
    r108 = `==`(types15, 3);
    r109 = `!`(r108);
    __4 = ldf `[` in base;
    r110 = dyn __4(decimals7, r109);
    goto L28(r110);
  L147():
    lengths11 = force? lengths10;
    checkMissing(lengths11);
    c14 = `is.object`(lengths11);
    if c14 then L148() else L149(lengths11);
  L29(dx23):
    r113 = `-`(<missing>, dx23);
    l18 = ld lengths;
    c15 = `is.object`(l18);
    if c15 then L152() else L153(r113, l18);
  L148():
    dr18 = tryDispatchBuiltin.1("[", lengths11);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L150() else L149(dr18);
  L149(lengths13):
    types16 = ld types;
    check L151() else D55();
  D55():
    deopt 217 [lengths13, types16];
  L30(dx25):
    st lengths = dx25;
    sym14 = ldf list;
    base14 = ldf list in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L156() else L157();
  L150():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L29(dx22);
  L151():
    types17 = force? types16;
    checkMissing(types17);
    r111 = `==`(types17, 3);
    __5 = ldf `[` in base;
    r112 = dyn __5(lengths13, r111);
    goto L29(r112);
  L152():
    dr20 = tryDispatchBuiltin.0("[<-", l18, r113);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L154() else L153(r113, dr20);
  L153(r115, l20):
    types18 = ld types;
    check L155() else D56();
  D56():
    deopt 224 [r115, l20, r113, types18];
  L31(r121):
    popenv;
    return r121;
  L154():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L30(dx24);
  L155():
    types19 = force? types18;
    checkMissing(types19);
    r118 = `==`(types19, 3.0);
    ___4 = ldf `[<-` in base;
    r119 = dyn ___4(l20, r113, r118);
    goto L30(r119);
  L156():
    lengths14 = ld lengths;
    check L158() else D57();
  L157():
    r120 = dyn base14(<sym lengths>, <sym colClasses>, <sym decimals>);
    goto L31(r120);
  D57():
    deopt 232 [lengths14];
  L158():
    lengths15 = force? lengths14;
    checkMissing(lengths15);
    colClasses4 = ld colClasses;
    check L159() else D58();
  D58():
    deopt 234 [colClasses4];
  L159():
    colClasses5 = force? colClasses4;
    checkMissing(colClasses5);
    decimals8 = ld decimals;
    check L160() else D59();
  D59():
    deopt 236 [decimals8];
  L160():
    decimals9 = force? decimals8;
    checkMissing(decimals9);
    list = ldf list in base;
    r122 = dyn list(lengths15, colClasses5, decimals9);
    check L161() else D60();
  D60():
    deopt 239 [r122];
  L161():
    goto L31(r122);
  }
}