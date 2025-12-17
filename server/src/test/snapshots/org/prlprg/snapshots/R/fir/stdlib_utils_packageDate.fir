fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1873989617;
    st packageDate = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1873989617(pkg, `lib.loc`, `date.fields`, tryFormats, desc) {
  (reg pkg:*, reg lib_loc:*, reg date_fields:*, reg tryFormats:*, reg desc:*) -+> V { var pkg:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var `date.fields`:*, reg date_fields_isMissing:L, reg date_fields_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var tryFormats:*, reg tryFormats_isMissing:L, reg tryFormats_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg p1:p(V +), var desc:*, reg desc_isMissing:L, reg desc_orDefault:*, reg packageDescription:cls, reg pkg1:*, reg pkg2:V, reg p2:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p3:p(V +), reg date_fields1:*, reg date_fields2:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg desc1:*, reg desc2:V, reg is_list:cls, reg r15:V, reg c2:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg c7:L, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg c10:L, reg r19:V, reg desc3:*, reg desc4:V, reg names:cls, reg r20:V, reg length:cls, reg r21:V, reg r22:V, reg c11:L, reg c12:V, reg useDesc:*, reg useDesc1:V, reg r23:V, reg c14:L, reg c16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg c19:L, reg r25:V, reg desc5:*, reg desc6:V, reg is_na:cls, reg r26:V, reg c20:L, reg c21:V, reg c23:L, reg _Date:cls, reg r27:V, reg date_fields3:*, reg date_fields4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c24:L, reg x:V, reg useDesc2:*, reg useDesc3:V, reg c25:L, reg desc7:*, reg desc8:V, reg c26:L, reg i8:I, reg desc10:V, reg dr:V, reg dc:L, reg dx:V, reg i10:I, reg dx1:V, reg fld:*, reg fld1:V, reg __:cls, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg i13:I, reg r32:V, reg r33:*, reg r34:V, reg c27:V, reg c28:L, reg i16:I, reg r35:V, reg r36:*, reg r37:V, reg i17:I, reg r38:V, reg packageDescription1:cls, reg pkg3:*, reg pkg4:V, reg p6:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p7:p(V +), reg fld2:*, reg fld3:V, reg p8:p(V +), reg r42:V, reg fld4:*, reg fld5:V, reg r43:V, reg c29:L, reg i19:I, reg c31:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg i22:I, reg c34:L, reg r45:V, reg res:*, reg res1:V, reg is_na1:cls, reg r46:V, reg r47:V, reg c35:L, reg c36:V, reg c38:L, reg tryCatch:cls, reg asDateBuilt:cls, reg res2:*, reg res3:V, reg p9:p(V +), reg r49:V, reg p10:p(V +), reg r51:cls, reg p11:p(V +), reg r53:V, reg i26:I, reg r54:V, reg as_Date:cls, reg res4:*, reg res5:V, reg p12:p(V +), reg tryFormats1:*, reg tryFormats2:V, reg p13:p(V +), reg r57:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg i29:I, reg r59:V, reg res6:*, reg res7:V, reg is_na2:cls, reg r60:V, reg r61:V, reg c39:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r63:V, reg r64:V, reg res8:*, reg res9:V, reg is_na3:cls, reg r65:V, reg c40:L, reg res10:*, reg res11:V, reg structure:cls, reg res12:*, reg res13:V, reg p14:p(V +), reg fld6:*, reg fld7:V, reg p15:p(V +), reg r68:V |
    mkenv;
    st pkg = pkg;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    date_fields_isMissing = missing.0(date_fields);
    if date_fields_isMissing then L1() else L2(date_fields);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("Date", "Packaged", "Date/Publication", "Built");
      goto L0(r2);
    L2():
      r = dyn base("Date", "Packaged", "Date/Publication", "Built");
      goto L0(r);
    };
    goto L2(p);
  L2(date_fields_orDefault):
    st `date.fields` = date_fields_orDefault;
    tryFormats_isMissing = missing.0(tryFormats);
    if tryFormats_isMissing then L3() else L4(tryFormats);
  L3():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c1 = ldf c in base;
      r6 = dyn c1("%Y-%m-%d", "%Y/%m/%d", "%D", "%m/%d/%y");
      goto L0(r6);
    L2():
      r4 = dyn base1("%Y-%m-%d", "%Y/%m/%d", "%D", "%m/%d/%y");
      goto L0(r4);
    };
    goto L4(p1);
  L4(tryFormats_orDefault):
    st tryFormats = tryFormats_orDefault;
    desc_isMissing = missing.0(desc);
    if desc_isMissing then L5() else L6(desc);
  L5():
    p5 = prom<V +>{
      packageDescription = ldf packageDescription;
      p2 = prom<V +>{
        pkg1 = ld pkg;
        pkg2 = force? pkg1;
        checkMissing(pkg2);
        return pkg2;
      };
      p3 = prom<V +>{
        lib_loc1 = ld `lib.loc`;
        lib_loc2 = force? lib_loc1;
        checkMissing(lib_loc2);
        return lib_loc2;
      };
      p4 = prom<V +>{
        date_fields1 = ld `date.fields`;
        date_fields2 = force? date_fields1;
        checkMissing(date_fields2);
        return date_fields2;
      };
      r11 = dyn packageDescription[, `lib.loc`, fields](p2, p3, p4);
      return r11;
    };
    goto L6(p5);
  L6(desc_orDefault):
    st desc = desc_orDefault;
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L7(r14):
    c2 = `as.logical`(r14);
    if c2 then L37() else L8(c2);
  L33():
    desc1 = ld desc;
    check L35() else D0();
  L34():
    r13 = dyn base2(<sym desc>);
    goto L7(r13);
  D0():
    deopt 2 [desc1];
  L8(c4):
    st useDesc = c4;
    useDesc = ld useDesc;
    check L46() else D5();
  L35():
    desc2 = force? desc1;
    checkMissing(desc2);
    is_list = ldf `is.list` in base;
    r15 = dyn is_list(desc2);
    check L36() else D1();
  L37():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  D1():
    deopt 5 [r15];
  D5():
    deopt 20 [useDesc];
  L9(c7, r17):
    r22 = `>=`(r17, 1.0);
    c11 = `as.logical`(r22);
    c12 = `&&`(c7, c11);
    goto L8(c12);
  L36():
    goto L7(r15);
  L38():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L39():
    r16 = dyn base3(<lang names(desc)>);
    goto L9(c2, r16);
  L46():
    useDesc1 = force? useDesc;
    checkMissing(useDesc1);
    r23 = `!`(useDesc1);
    c14 = `as.logical`(r23);
    if c14 then L47() else L11(c14);
  L10(c10, r19):
    length = ldf length in base;
    r21 = dyn length(r19);
    check L44() else D4();
  L11(c16):
    c23 = `as.logical`(c16);
    if c23 then L53() else L13();
  L40():
    desc3 = ld desc;
    check L42() else D2();
  L41():
    r18 = dyn base4(<sym desc>);
    goto L10(c2, r18);
  L47():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  D2():
    deopt 10 [c2, desc3];
  D4():
    deopt 15 [c10, r21];
  L12(c19, r25):
    c20 = `as.logical`(r25);
    c21 = `&&`(c19, c20);
    goto L11(c21);
  L13():
    date_fields3 = ld `date.fields`;
    check L58() else D10();
  L42():
    desc4 = force? desc3;
    checkMissing(desc4);
    names = ldf names in base;
    r20 = dyn names(desc4);
    check L43() else D3();
  L44():
    goto L9(c10, r21);
  L48():
    desc5 = ld desc;
    check L50() else D6();
  L49():
    r24 = dyn base5(<sym desc>);
    goto L12(c14, r24);
  L53():
    _Date = ldf `.Date`;
    check L54() else D8();
  D3():
    deopt 13 [c2, r20];
  D6():
    deopt 25 [c14, desc5];
  D8():
    deopt 31 [];
  D10():
    deopt 37 [date_fields3];
  L43():
    goto L10(c2, r20);
  L50():
    desc6 = force? desc5;
    checkMissing(desc6);
    is_na = ldf `is.na` in base;
    r26 = dyn is_na(desc6);
    check L51() else D7();
  L54():
    r27 = dyn _Date(NA_LGL);
    check L55() else D9();
  L58():
    date_fields4 = force? date_fields3;
    checkMissing(date_fields4);
    s = toForSeq(date_fields4);
    l = length(s);
    i = 0;
    goto L15(i);
  D7():
    deopt 28 [c14, r26];
  D9():
    deopt 33 [r27];
  L15(i1):
    i2 = `+`.1(i1, 1);
    c24 = `<`.1(l, i2);
    if c24 then L59() else L30();
  L51():
    goto L12(c14, r26);
  L55():
    popenv;
    return r27;
  L28():
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  L30():
    x = `[[`(s, i2, NULL, TRUE);
    st fld = x;
    useDesc2 = ld useDesc;
    check L60() else D11();
  L59():
    goto L28();
  D11():
    deopt 39 [i2, useDesc2];
  L31(r64):
    c40 = `as.logical`(r64);
    if c40 then L100() else L32();
  L60():
    useDesc3 = force? useDesc2;
    checkMissing(useDesc3);
    c25 = `as.logical`(useDesc3);
    if c25 then L61() else L16();
  L96():
    res8 = ld res;
    check L98() else D27();
  L97():
    r63 = dyn base9(<sym res>);
    goto L31(r63);
  D27():
    deopt 107 [res8];
  L16():
    packageDescription1 = ldf packageDescription;
    check L74() else D16();
  L21(i17, r38):
    st res = r38;
    fld4 = ld fld;
    check L76() else D18();
  L32():
    structure = ldf structure;
    check L103() else D30();
  L61():
    desc7 = ld desc;
    check L62() else D12();
  L98():
    res9 = force? res8;
    checkMissing(res9);
    is_na3 = ldf `is.na` in base;
    r65 = dyn is_na3(res9);
    check L99() else D28();
  L100():
    res10 = ld res;
    check L101() else D29();
  D12():
    deopt 41 [i2, desc7];
  D16():
    deopt 56 [i2];
  D18():
    deopt 64 [i17, fld4];
  D28():
    deopt 110 [r65];
  D29():
    deopt 111 [res10];
  D30():
    deopt 114 [];
  L62():
    desc8 = force? desc7;
    checkMissing(desc8);
    c26 = `is.object`(desc8);
    if c26 then L63() else L64(i2, desc8);
  L74():
    p6 = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    p7 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    p8 = prom<V +>{
      fld2 = ld fld;
      fld3 = force? fld2;
      checkMissing(fld3);
      return fld3;
    };
    r42 = dyn packageDescription1[, `lib.loc`, fields](p6, p7, p8);
    check L75() else D17();
  L76():
    fld5 = force? fld4;
    checkMissing(fld5);
    r43 = `==`(fld5, "Built");
    c29 = `as.logical`(r43);
    if c29 then L77() else L22(i17, c29);
  L99():
    goto L31(r65);
  L101():
    res11 = force? res10;
    checkMissing(res11);
    popenv;
    return res11;
  L103():
    p14 = prom<V +>{
      res12 = ld res;
      res13 = force? res12;
      checkMissing(res13);
      return res13;
    };
    p15 = prom<V +>{
      fld6 = ld fld;
      fld7 = force? fld6;
      checkMissing(fld7);
      return fld7;
    };
    r68 = dyn structure[, field](p14, p15);
    check L104() else D31();
  D17():
    deopt 62 [i2, r42];
  D31():
    deopt 118 [r68];
  L17(i10, dx1):
    st r = dx1;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  L22(i19, c31):
    c38 = `as.logical`(c31);
    if c38 then L83() else L24();
  L63():
    dr = tryDispatchBuiltin.1("[[", desc8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L65() else L64(i2, dr);
  L64(i8, desc10):
    fld = ld fld;
    check L66() else D13();
  L75():
    goto L21(i2, r42);
  L77():
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L78() else L79();
  L104():
    popenv;
    return r68;
  D13():
    deopt 43 [i8, desc10, fld];
  L18(i13, r32):
    c28 = `as.logical`(r32);
    if c28 then L70() else L19();
  L23(i22, c34, r45):
    r47 = `!`(r45);
    c35 = `as.logical`(r47);
    c36 = `&&`(c34, c35);
    goto L22(i22, c36);
  L24():
    as_Date = ldf `as.Date`;
    check L87() else D23();
  L25(i26, r54):
    st res = r54;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L89() else L90();
  L65():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(i2, dx);
  L66():
    fld1 = force? fld;
    __ = ldf `[[` in base;
    r30 = dyn __(desc10, fld1);
    goto L17(i8, r30);
  L67():
    r33 = ld r;
    check L69() else D14();
  L68():
    r31 = dyn base6(<sym r>);
    goto L18(i10, r31);
  L78():
    res = ld res;
    check L80() else D19();
  L79():
    r44 = dyn base7(<sym res>);
    goto L23(i17, c29, r44);
  L83():
    tryCatch = ldf tryCatch;
    check L84() else D21();
  D14():
    deopt 48 [i10, r33];
  D19():
    deopt 70 [i17, c29, res];
  D21():
    deopt 77 [i19];
  D23():
    deopt 83 [i19];
  L19():
    r36 = ld r;
    check L72() else D15();
  L20(i16, r35):
    goto L21(i16, r35);
  L26(i29, r59):
    r61 = `!`(r59);
    c39 = `as.logical`(r61);
    if c39 then L93() else L27();
  L69():
    r34 = force? r33;
    checkMissing(r34);
    c27 = `==`(r34, NULL);
    goto L18(i10, c27);
  L70():
    goto L20(i13, NA_STR);
  L80():
    res1 = force? res;
    checkMissing(res1);
    is_na1 = ldf `is.na` in base;
    r46 = dyn is_na1(res1);
    check L81() else D20();
  L84():
    p10 = prom<V +>{
      asDateBuilt = ldf asDateBuilt;
      p9 = prom<V +>{
        res2 = ld res;
        res3 = force? res2;
        checkMissing(res3);
        return res3;
      };
      r49 = dyn asDateBuilt(p9);
      return r49;
    };
    p11 = prom<V +>{
      r51 = clos inner3708401697;
      return r51;
    };
    r53 = dyn tryCatch[, error](p10, p11);
    check L85() else D22();
  L87():
    p12 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      return res5;
    };
    p13 = prom<V +>{
      tryFormats1 = ld tryFormats;
      tryFormats2 = force? tryFormats1;
      checkMissing(tryFormats2);
      return tryFormats2;
    };
    r57 = dyn as_Date[, tryFormats, optional](p12, p13, TRUE);
    check L88() else D24();
  L89():
    res6 = ld res;
    check L91() else D25();
  L90():
    r58 = dyn base8(<sym res>);
    goto L26(i26, r58);
  D15():
    deopt 53 [i13, r36];
  D20():
    deopt 73 [i17, c29, r46];
  D22():
    deopt 81 [i19, r53];
  D24():
    deopt 89 [i19, r57];
  D25():
    deopt 93 [i26, res6];
  L27():
    goto L15(i29);
  L72():
    r37 = force? r36;
    checkMissing(r37);
    goto L20(i13, r37);
  L81():
    goto L23(i17, c29, r46);
  L85():
    goto L25(i19, r53);
  L88():
    goto L25(i19, r57);
  L91():
    res7 = force? res6;
    checkMissing(res7);
    is_na2 = ldf `is.na` in base;
    r60 = dyn is_na2(res7);
    check L92() else D26();
  L93():
    goto L28();
  D26():
    deopt 96 [i26, r60];
  L92():
    goto L26(i26, r60);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg warning:cls, reg conditionMessage:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st e = e;
    warning = ldf warning;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      r1 = dyn conditionMessage(p);
      return r1;
    };
    r3 = dyn warning("Invalid \"Built\": ", p1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return NA_STR;
  }
}