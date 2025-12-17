fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2954720067;
    st `.fixupPkgMat` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2954720067(mat, fields, priority, subarch) {
  (reg mat:*, reg fields:*, reg priority:*, reg subarch:*) -+> V { var mat:*, var fields:*, var priority:*, var subarch:*, reg subarch_isMissing:L, reg subarch_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fields1:*, reg fields2:V, reg c:cls, reg r2:V, reg l:*, reg colnames__:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg mat1:*, reg mat2:V, reg length:cls, reg r6:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c6:L, reg r8:V, reg priority1:*, reg priority2:V, reg c7:V, reg r9:V, reg c8:L, reg c9:V, reg c11:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg pmatch:cls, reg mat3:*, reg mat4:V, reg c12:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg p:p(V +), reg priority3:*, reg priority4:V, reg p1:p(V +), reg r15:V, reg is_na:cls, reg r16:V, reg r17:V, reg mat7:*, reg mat8:V, reg c13:L, reg mat10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg keep:*, reg keep1:V, reg __1:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg mat11:*, reg mat12:V, reg length1:cls, reg r21:V, reg c14:L, reg c16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg c19:L, reg r23:V, reg subarch1:*, reg subarch2:V, reg c20:V, reg r24:V, reg c21:L, reg c22:V, reg c24:L, reg c26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg c29:L, reg r26:V, reg subarch3:*, reg subarch4:V, reg nzchar:cls, reg r27:V, reg c30:L, reg c31:V, reg c33:L, reg strsplit:cls, reg mat13:*, reg mat14:V, reg c34:L, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r28:V, reg p2:p(V +), reg r30:V, reg unlist:cls, reg lapply:cls, reg archs:*, reg archs1:V, reg p3:p(V +), reg r32:cls, reg p4:p(V +), reg r34:V, reg p5:p(V +), reg r36:V, reg mat17:*, reg mat18:V, reg c35:L, reg mat20:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg keep2:*, reg keep3:V, reg __3:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg mat21:*, reg mat22:V, reg length2:cls, reg r40:V, reg c36:L, reg mat23:*, reg mat24:V, reg c37:L, reg mat26:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg colnames:cls, reg mat27:*, reg mat28:V, reg p6:p(V +), reg r42:V, reg r43:V, reg __4:cls, reg r44:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg mat29:*, reg mat30:V, reg length3:cls, reg r47:V, reg c38:L, reg mat31:*, reg mat32:V, reg c39:L, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg __5:cls, reg r48:V, reg l1:*, reg rownames__:cls, reg r49:V, reg mat35:*, reg mat36:V |
    mkenv;
    st mat = mat;
    st fields = fields;
    st priority = priority;
    subarch_isMissing = missing.0(subarch);
    if subarch_isMissing then L0(NULL) else L0(subarch);
  L0(subarch_orDefault):
    st subarch = subarch_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L1(r1):
    l = ld mat;
    colnames__ = ldf `colnames<-`;
    check L29() else D2();
  L25():
    fields1 = ld fields;
    check L27() else D0();
  L26():
    r = dyn base("Package", "LibPath", <sym fields>);
    goto L1(r);
  D0():
    deopt 4 [fields1];
  D2():
    deopt 9 [r1, l, r1];
  L27():
    fields2 = force? fields1;
    checkMissing(fields2);
    c = ldf c in base;
    r2 = dyn c("Package", "LibPath", fields2);
    check L28() else D1();
  L29():
    r3 = dyn colnames__(l, NULL, r1);
    check L30() else D3();
  D1():
    deopt 7 [r2];
  D3():
    deopt 11 [r1, r3];
  L28():
    goto L1(r2);
  L30():
    st mat = r3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L35() else L3(c1);
  L31():
    mat1 = ld mat;
    check L33() else D4();
  L32():
    r4 = dyn base1(<sym mat>);
    goto L2(r4);
  D4():
    deopt 15 [mat1];
  L3(c3):
    c11 = `as.logical`(c3);
    if c11 then L40() else L5();
  L33():
    mat2 = force? mat1;
    checkMissing(mat2);
    length = ldf length in base;
    r6 = dyn length(mat2);
    check L34() else D5();
  L35():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  D5():
    deopt 18 [r6];
  L4(c6, r8):
    r9 = `!`(r8);
    c8 = `as.logical`(r9);
    c9 = `&&`(c6, c8);
    goto L3(c9);
  L5():
    goto L8();
  L8():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L34():
    goto L2(r6);
  L36():
    priority1 = ld priority;
    check L38() else D6();
  L37():
    r7 = dyn base2(<sym priority>);
    goto L4(c1, r7);
  L40():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  D6():
    deopt 20 [c1, priority1];
  L6(r11):
    r17 = `!`(r11);
    st keep = r17;
    mat7 = ld mat;
    check L46() else D10();
  L9(r20):
    c14 = `as.logical`(r20);
    if c14 then L56() else L10(c14);
  L38():
    priority2 = force? priority1;
    checkMissing(priority2);
    c7 = `==`(priority2, NULL);
    goto L4(c1, c7);
  L41():
    pmatch = ldf pmatch;
    check L43() else D7();
  L42():
    r10 = dyn base3(<lang pmatch(`[`(mat, , "Priority"), priority, duplicates.ok=TRUE)>);
    goto L6(r10);
  L52():
    mat11 = ld mat;
    check L54() else D12();
  L53():
    r19 = dyn base4(<sym mat>);
    goto L9(r19);
  D7():
    deopt 28 [];
  D10():
    deopt 38 [mat7];
  D12():
    deopt 52 [mat11];
  L10(c16):
    c24 = `as.logical`(c16);
    if c24 then L61() else L12(c24);
  L43():
    p = prom<V +>{
      mat3 = ld mat;
      mat4 = force? mat3;
      checkMissing(mat4);
      c12 = `is.object`(mat4);
      if c12 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", mat4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r12 = dyn __(mat4, <missing>, "Priority");
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      priority3 = ld priority;
      priority4 = force? priority3;
      checkMissing(priority4);
      return priority4;
    };
    r15 = dyn pmatch[, , `duplicates.ok`](p, p1, TRUE);
    check L44() else D8();
  L46():
    mat8 = force? mat7;
    checkMissing(mat8);
    c13 = `is.object`(mat8);
    if c13 then L47() else L48(mat8);
  L54():
    mat12 = force? mat11;
    checkMissing(mat12);
    length1 = ldf length in base;
    r21 = dyn length1(mat12);
    check L55() else D13();
  L56():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  D8():
    deopt 33 [r15];
  D13():
    deopt 55 [r21];
  L7(dx3):
    st mat = dx3;
    goto L8();
  L11(c19, r23):
    r24 = `!`(r23);
    c21 = `as.logical`(r24);
    c22 = `&&`(c19, c21);
    goto L10(c22);
  L12(c26):
    c33 = `as.logical`(c26);
    if c33 then L67() else L14();
  L44():
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(r15);
    check L45() else D9();
  L47():
    dr2 = tryDispatchBuiltin.1("[", mat8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48(dr2);
  L48(mat10):
    keep = ld keep;
    check L50() else D11();
  L55():
    goto L9(r21);
  L57():
    subarch1 = ld subarch;
    check L59() else D14();
  L58():
    r22 = dyn base5(<sym subarch>);
    goto L11(c14, r22);
  L61():
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  D9():
    deopt 35 [r16];
  D11():
    deopt 40 [mat10, keep];
  D14():
    deopt 57 [c14, subarch1];
  L13(c29, r26):
    c30 = `as.logical`(r26);
    c31 = `&&`(c29, c30);
    goto L12(c31);
  L14():
    goto L16();
  L16():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L78() else L79();
  L45():
    goto L6(r16);
  L49():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L50():
    keep1 = force? keep;
    __1 = ldf `[` in base;
    r18 = dyn __1(mat8, keep1, <missing>, FALSE);
    goto L7(r18);
  L59():
    subarch2 = force? subarch1;
    checkMissing(subarch2);
    c20 = `==`(subarch2, NULL);
    goto L11(c14, c20);
  L62():
    subarch3 = ld subarch;
    check L64() else D15();
  L63():
    r25 = dyn base6(<sym subarch>);
    goto L13(c24, r25);
  L67():
    strsplit = ldf strsplit;
    check L68() else D17();
  D15():
    deopt 64 [c24, subarch3];
  D17():
    deopt 70 [];
  L17(r39):
    c36 = `as.logical`(r39);
    if c36 then L82() else L18();
  L64():
    subarch4 = force? subarch3;
    checkMissing(subarch4);
    nzchar = ldf nzchar in base;
    r27 = dyn nzchar(subarch4);
    check L65() else D16();
  L68():
    p2 = prom<V +>{
      mat13 = ld mat;
      mat14 = force? mat13;
      checkMissing(mat14);
      c34 = `is.object`(mat14);
      if c34 then L1() else L2();
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("[", mat14);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r28 = dyn __2(mat14, <missing>, "Archs");
      goto L0(r28);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    r30 = dyn strsplit[, , fixed](p2, ", ", TRUE);
    check L69() else D18();
  L78():
    mat21 = ld mat;
    check L80() else D23();
  L79():
    r38 = dyn base7(<sym mat>);
    goto L17(r38);
  D16():
    deopt 67 [c24, r27];
  D18():
    deopt 75 [r30];
  D23():
    deopt 96 [mat21];
  L18():
    goto L20();
  L20():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L90() else L91();
  L65():
    goto L13(c24, r27);
  L69():
    st archs = r30;
    unlist = ldf unlist;
    check L70() else D19();
  L80():
    mat22 = force? mat21;
    checkMissing(mat22);
    length2 = ldf length in base;
    r40 = dyn length2(mat22);
    check L81() else D24();
  L82():
    mat23 = ld mat;
    check L83() else D25();
  D19():
    deopt 78 [];
  D24():
    deopt 99 [r40];
  D25():
    deopt 100 [mat23];
  L21(r46):
    c38 = `as.logical`(r46);
    if c38 then L94() else L22();
  L70():
    p5 = prom<V +>{
      lapply = ldf lapply;
      p3 = prom<V +>{
        archs = ld archs;
        archs1 = force? archs;
        checkMissing(archs1);
        return archs1;
      };
      p4 = prom<V +>{
        r32 = clos inner2501545716;
        return r32;
      };
      r34 = dyn lapply(p3, p4);
      return r34;
    };
    r36 = dyn unlist(p5);
    check L71() else D20();
  L81():
    goto L17(r40);
  L83():
    mat24 = force? mat23;
    checkMissing(mat24);
    c37 = `is.object`(mat24);
    if c37 then L84() else L85(mat24);
  L90():
    mat29 = ld mat;
    check L92() else D28();
  L91():
    r45 = dyn base8(<sym mat>);
    goto L21(r45);
  D20():
    deopt 80 [r36];
  D28():
    deopt 118 [mat29];
  L19(dx11):
    st mat = dx11;
    goto L20();
  L22():
    goto L24();
  L24():
    mat35 = ld mat;
    check L102() else D33();
  L71():
    st keep = r36;
    mat17 = ld mat;
    check L72() else D21();
  L84():
    dr8 = tryDispatchBuiltin.1("[", mat24);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L86() else L85(dr8);
  L85(mat26):
    colnames = ldf colnames;
    check L87() else D26();
  L92():
    mat30 = force? mat29;
    checkMissing(mat30);
    length3 = ldf length in base;
    r47 = dyn length3(mat30);
    check L93() else D29();
  L94():
    mat31 = ld mat;
    check L95() else D30();
  D21():
    deopt 82 [mat17];
  D26():
    deopt 104 [mat26];
  D29():
    deopt 121 [r47];
  D30():
    deopt 122 [mat31];
  D33():
    deopt 135 [mat35];
  L72():
    mat18 = force? mat17;
    checkMissing(mat18);
    c35 = `is.object`(mat18);
    if c35 then L73() else L74(mat18);
  L86():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L19(dx10);
  L87():
    p6 = prom<V +>{
      mat27 = ld mat;
      mat28 = force? mat27;
      checkMissing(mat28);
      return mat28;
    };
    r42 = dyn colnames(p6);
    check L88() else D27();
  L93():
    goto L21(r47);
  L95():
    mat32 = force? mat31;
    checkMissing(mat32);
    c39 = `is.object`(mat32);
    if c39 then L96() else L97();
  L102():
    mat36 = force? mat35;
    checkMissing(mat36);
    popenv;
    return mat36;
  D27():
    deopt 106 [mat26, r42];
  L15(dx8):
    st mat = dx8;
    goto L16();
  L23(dx14):
    l1 = ld mat;
    rownames__ = ldf `rownames<-`;
    check L99() else D31();
  L73():
    dr6 = tryDispatchBuiltin.1("[", mat18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L75() else L74(dr6);
  L74(mat20):
    keep2 = ld keep;
    check L76() else D22();
  L88():
    r43 = `!=`(r42, "Archs");
    __4 = ldf `[` in base;
    r44 = dyn __4(mat24, <missing>, r43, FALSE);
    goto L19(r44);
  L96():
    dr10 = tryDispatchBuiltin.1("[", mat32);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L98() else L97();
  L97():
    __5 = ldf `[` in base;
    r48 = dyn __5(mat32, <missing>, "Package");
    goto L23(r48);
  D22():
    deopt 84 [mat20, keep2];
  D31():
    deopt 129 [dx14, l1, dx14];
  L75():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx7);
  L76():
    keep3 = force? keep2;
    __3 = ldf `[` in base;
    r37 = dyn __3(mat18, keep3, <missing>, FALSE);
    goto L15(r37);
  L98():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L23(dx13);
  L99():
    r49 = dyn rownames__(l1, NULL, dx14);
    check L100() else D32();
  D32():
    deopt 131 [dx14, r49];
  L100():
    st mat = r49;
    goto L24();
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg is_na:cls, reg r3:V, reg c1:L, reg c2:V, reg _in_:cls, reg subarch:*, reg subarch1:V, reg p:p(V +), reg x5:*, reg x6:V, reg p1:p(V +), reg r6:V, reg c4:L, reg c5:V |
    mkenv;
    st x = x;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L2(c1) else L10();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<lang `[`(x, 1)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L2(c2):
    popenv;
    return c2;
  L5():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L6() else L7(x2);
  L10():
    _in_ = ldf `%in%`;
    check L11() else D2();
  D2():
    deopt 10 [c1];
  L1(dx1):
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(dx1);
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(x4):
    __ = ldf `[` in base;
    r2 = dyn __(x4, 1);
    goto L1(r2);
  L11():
    p = prom<V +>{
      subarch = ld subarch;
      subarch1 = force? subarch;
      checkMissing(subarch1);
      return subarch1;
    };
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r6 = dyn _in_(p, p1);
    check L12() else D3();
  D1():
    deopt 8 [r3];
  D3():
    deopt 13 [c1, r6];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L9():
    goto L0(r3);
  L12():
    c4 = `as.logical`(r6);
    c5 = `||`(c1, c4);
    goto L2(c5);
  }
}