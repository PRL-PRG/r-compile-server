fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1845370649;
    st merge_demo_index = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1845370649(hDB, path, pkg) {
  (reg hDB:*, reg path:*, reg pkg:*) -+> V { var hDB:*, var path:*, var pkg:*, reg file_exists:cls, reg file_path:cls, reg path1:*, reg path2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg c5:L, reg r5:V, reg readRDS:cls, reg d_file:*, reg d_file1:V, reg p2:p(V +), reg r7:V, reg c6:V, reg r8:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg nrow:cls, reg dDB:*, reg dDB1:V, reg p3:p(V +), reg r10:V, reg c13:L, reg c14:V, reg c16:L, reg matrix:cls, reg nrow1:cls, reg dDB2:*, reg dDB3:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg colnames:cls, reg hDB1:*, reg hDB2:V, reg c17:L, reg hDB4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg p6:p(V +), reg r17:V, reg l:*, reg colnames__:cls, reg r18:V, reg pkg1:*, reg pkg2:V, reg l1:*, reg c18:L, reg pkg4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r19:V, reg path3:*, reg path4:V, reg l4:*, reg c19:L, reg path6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___1:cls, reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg nrow2:cls, reg dDB4:*, reg dDB5:V, reg p7:p(V +), reg r24:V, reg r25:V, reg NROW:cls, reg hDB5:*, reg hDB6:V, reg c20:L, reg hDB8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r26:V, reg p8:p(V +), reg r28:V, reg r29:V, reg as_character:cls, reg r30:V, reg id:*, reg id1:V, reg l7:*, reg c21:L, reg id3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ___2:cls, reg r31:V, reg dDB6:*, reg dDB7:V, reg c22:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r32:V, reg l10:*, reg c23:L, reg dx13:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx17:V, reg ___3:cls, reg r33:V, reg base2:*, reg base3:V, reg c24:L, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg __3:cls, reg r34:V, reg l13:*, reg c25:L, reg dx21:V, reg dr16:V, reg dc8:L, reg dx23:V, reg dx25:V, reg ___4:cls, reg r35:V, reg dDB10:*, reg dDB11:V, reg c26:L, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg __4:cls, reg r36:V, reg l16:*, reg c27:L, reg dx29:V, reg dr20:V, reg dc10:L, reg dx31:V, reg dx33:V, reg ___5:cls, reg r37:V, reg l19:*, reg c28:L, reg r39:S, reg dr22:V, reg dc11:L, reg dx34:V, reg dx35:V, reg ___6:cls, reg r42:V, reg rbind:cls, reg hDB9:*, reg hDB10:V, reg c29:L, reg hDB12:V, reg dr24:V, reg dc12:L, reg dx36:V, reg dx37:V, reg __5:cls, reg r43:V, reg p9:p(V +), reg base6:*, reg base7:V, reg p10:p(V +), reg r46:V, reg l22:*, reg c30:L, reg r48:V, reg l24:*, reg dr26:V, reg dc13:L, reg dx38:V, reg dx39:V, reg ____:cls, reg r51:V, reg matrix1:cls, reg nrow3:cls, reg dDB14:*, reg dDB15:V, reg p11:p(V +), reg r53:V, reg p12:p(V +), reg r55:V, reg colnames1:cls, reg hDB13:*, reg hDB14:V, reg c31:L, reg hDB16:V, reg dr28:V, reg dc14:L, reg dx40:V, reg dx41:V, reg __6:cls, reg r56:V, reg p13:p(V +), reg r58:V, reg l25:*, reg colnames__1:cls, reg r59:V, reg base8:*, reg base9:V, reg c32:L, reg dr30:V, reg dc15:L, reg dx42:V, reg dx43:V, reg __7:cls, reg r60:V, reg l26:*, reg c33:L, reg dx45:V, reg dr32:V, reg dc16:L, reg dx47:V, reg dx49:V, reg ___7:cls, reg r61:V, reg id6:*, reg id7:V, reg l29:*, reg c34:L, reg id9:V, reg dr34:V, reg dc17:L, reg dx50:V, reg dx51:V, reg ___8:cls, reg r62:V, reg pkg7:*, reg pkg8:V, reg l32:*, reg c35:L, reg pkg10:V, reg dr36:V, reg dc18:L, reg dx52:V, reg dx53:V, reg ___9:cls, reg r63:V, reg rbind1:cls, reg hDB17:*, reg hDB18:V, reg c36:L, reg hDB20:V, reg dr38:V, reg dc19:L, reg dx54:V, reg dx55:V, reg __8:cls, reg r64:V, reg p14:p(V +), reg aliases:*, reg aliases1:V, reg p15:p(V +), reg r67:V, reg l35:*, reg c37:L, reg r69:V, reg l37:*, reg dr40:V, reg dc20:L, reg dx56:V, reg r71:V, reg dx57:V, reg ____1:cls, reg r72:V, reg hDB21:*, reg hDB22:V |
    mkenv;
    st hDB = hDB;
    st path = path;
    st pkg = pkg;
    file_exists = ldf `file.exists`;
    check L22() else D0();
  D0():
    deopt 1 [];
  L22():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        path1 = ld path;
        path2 = force? path1;
        checkMissing(path2);
        return path2;
      };
      r1 = dyn file_path(p, "Meta", "demo.rds");
      st d_file = r1;
      invisible.0();
      return r1;
    };
    r3 = dyn file_exists(p1);
    check L23() else D1();
  D1():
    deopt 3 [r3];
  L23():
    c = `as.logical`(r3);
    if c then L24() else L0(c);
  L0(c2):
    c10 = `as.logical`(c2);
    if c10 then L30() else L2(c10);
  L24():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L1(c5, r5):
    r8 = `!`(r5);
    c7 = `as.logical`(r8);
    c8 = `&&`(c5, c7);
    goto L0(c8);
  L2(c12):
    c16 = `as.logical`(c12);
    if c16 then L34() else L3();
  L25():
    readRDS = ldf readRDS;
    check L27() else D2();
  L26():
    r4 = dyn base(<lang `<-`(dDB, readRDS(d_file))>);
    goto L1(c, r4);
  L30():
    nrow = ldf nrow;
    check L31() else D4();
  D2():
    deopt 6 [c];
  D4():
    deopt 14 [c10];
  L3():
    goto L21();
  L21():
    hDB21 = ld hDB;
    check L116() else D36();
  L27():
    p2 = prom<V +>{
      d_file = ld d_file;
      d_file1 = force? d_file;
      checkMissing(d_file1);
      return d_file1;
    };
    r7 = dyn readRDS(p2);
    check L28() else D3();
  L31():
    p3 = prom<V +>{
      dDB = ld dDB;
      dDB1 = force? dDB;
      checkMissing(dDB1);
      return dDB1;
    };
    r10 = dyn nrow(p3);
    check L32() else D5();
  L34():
    matrix = ldf matrix;
    check L35() else D6();
  D3():
    deopt 8 [c, r7];
  D5():
    deopt 16 [c10, r10];
  D6():
    deopt 19 [];
  D36():
    deopt 187 [hDB21];
  L28():
    st dDB = r7;
    c6 = `==`(r7, NULL);
    goto L1(c, c6);
  L32():
    c13 = `as.logical`(r10);
    c14 = `&&`(c10, c13);
    goto L2(c14);
  L35():
    p5 = prom<V +>{
      nrow1 = ldf nrow;
      p4 = prom<V +>{
        dDB2 = ld dDB;
        dDB3 = force? dDB2;
        checkMissing(dDB3);
        return dDB3;
      };
      r12 = dyn nrow1(p4);
      return r12;
    };
    r14 = dyn matrix[, nrow, ncol]("", p5, 8);
    check L36() else D7();
  L116():
    hDB22 = force? hDB21;
    checkMissing(hDB22);
    popenv;
    return hDB22;
  D7():
    deopt 25 [r14];
  L36():
    st base = r14;
    colnames = ldf colnames;
    check L37() else D8();
  D8():
    deopt 28 [];
  L37():
    p6 = prom<V +>{
      hDB1 = ld hDB;
      hDB2 = force? hDB1;
      checkMissing(hDB2);
      c17 = `is.object`(hDB2);
      if c17 then L1() else L2(hDB2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", hDB2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(hDB4):
      __ = ldf `[[` in base;
      r15 = dyn __(hDB4, 1.0);
      goto L0(r15);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r17 = dyn colnames(p6);
    check L38() else D9();
  D9():
    deopt 30 [r17];
  L38():
    l = ld base;
    colnames__ = ldf `colnames<-`;
    check L39() else D10();
  D10():
    deopt 32 [r17, l, r17];
  L39():
    r18 = dyn colnames__(l, NULL, r17);
    check L40() else D11();
  D11():
    deopt 34 [r17, r18];
  L40():
    st base = r18;
    pkg1 = ld pkg;
    check L41() else D12();
  D12():
    deopt 36 [pkg1];
  L41():
    pkg2 = force? pkg1;
    checkMissing(pkg2);
    l1 = ld base;
    c18 = `is.object`(l1);
    if c18 then L42() else L43(pkg2);
  L4(dx3):
    st base = dx3;
    path3 = ld path;
    check L45() else D13();
  L42():
    dr2 = tryDispatchBuiltin.0("[<-", l1, pkg2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(pkg2);
  L43(pkg4):
    ___ = ldf `[<-` in base;
    r19 = dyn ___(l1, <missing>, "Package", pkg2);
    goto L4(r19);
  D13():
    deopt 44 [path3];
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L45():
    path4 = force? path3;
    checkMissing(path4);
    l4 = ld base;
    c19 = `is.object`(l4);
    if c19 then L46() else L47(path4);
  L5(dx5):
    st base = dx5;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L49() else L50();
  L46():
    dr4 = tryDispatchBuiltin.0("[<-", l4, path4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(path4);
  L47(path6):
    ___1 = ldf `[<-` in base;
    r20 = dyn ___1(l4, <missing>, "LibPath", path4);
    goto L5(r20);
  L6(r22):
    st id = r22;
    id = ld id;
    check L56() else D19();
  L48():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L49():
    nrow2 = ldf nrow;
    check L51() else D14();
  L50():
    r21 = dyn base1(<lang `+`(`:`(1.0, nrow(dDB)), NROW(`[[`(hDB, 1)))>);
    goto L6(r21);
  D14():
    deopt 56 [1.0];
  D19():
    deopt 67 [id];
  L51():
    p7 = prom<V +>{
      dDB4 = ld dDB;
      dDB5 = force? dDB4;
      checkMissing(dDB5);
      return dDB5;
    };
    r24 = dyn nrow2(p7);
    check L52() else D15();
  L56():
    id1 = force? id;
    checkMissing(id1);
    l7 = ld base;
    c21 = `is.object`(l7);
    if c21 then L57() else L58(id1);
  D15():
    deopt 58 [1.0, r24];
  L7(dx9):
    st base = dx9;
    dDB6 = ld dDB;
    check L60() else D20();
  L52():
    r25 = `:`(1.0, r24);
    NROW = ldf NROW;
    check L53() else D16();
  L57():
    dr8 = tryDispatchBuiltin.0("[<-", l7, id1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L59() else L58(id1);
  L58(id3):
    ___2 = ldf `[<-` in base;
    r31 = dyn ___2(l7, <missing>, "ID", id1);
    goto L7(r31);
  D16():
    deopt 60 [r25];
  D20():
    deopt 75 [dDB6];
  L53():
    p8 = prom<V +>{
      hDB5 = ld hDB;
      hDB6 = force? hDB5;
      checkMissing(hDB6);
      c20 = `is.object`(hDB6);
      if c20 then L1() else L2(hDB6);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", hDB6);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(hDB8):
      __1 = ldf `[[` in base;
      r26 = dyn __1(hDB8, 1);
      goto L0(r26);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r28 = dyn NROW(p8);
    check L54() else D17();
  L59():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L7(dx8);
  L60():
    dDB7 = force? dDB6;
    checkMissing(dDB7);
    c22 = `is.object`(dDB7);
    if c22 then L61() else L62();
  D17():
    deopt 62 [r25, r28];
  L8(dx11):
    l10 = ld base;
    c23 = `is.object`(l10);
    if c23 then L64() else L65(dx11);
  L54():
    r29 = `+`(r25, r28);
    as_character = ldf `as.character` in base;
    r30 = dyn as_character(r29);
    check L55() else D18();
  L61():
    dr10 = tryDispatchBuiltin.1("[", dDB7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L63() else L62();
  L62():
    __2 = ldf `[` in base;
    r32 = dyn __2(dDB7, <missing>, 1);
    goto L8(r32);
  D18():
    deopt 65 [r30];
  L9(dx17):
    st base = dx17;
    base2 = ld base;
    check L67() else D21();
  L55():
    goto L6(r30);
  L63():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L8(dx10);
  L64():
    dr12 = tryDispatchBuiltin.0("[<-", l10, dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L66() else L65(dx11);
  L65(dx13):
    ___3 = ldf `[<-` in base;
    r33 = dyn ___3(l10, <missing>, "Name", dx11);
    goto L9(r33);
  D21():
    deopt 87 [base2];
  L66():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L9(dx15);
  L67():
    base3 = force? base2;
    checkMissing(base3);
    c24 = `is.object`(base3);
    if c24 then L68() else L69();
  L10(dx19):
    l13 = ld base;
    c25 = `is.object`(l13);
    if c25 then L71() else L72(dx19);
  L68():
    dr14 = tryDispatchBuiltin.1("[", base3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L70() else L69();
  L69():
    __3 = ldf `[` in base;
    r34 = dyn __3(base3, <missing>, "Name");
    goto L10(r34);
  L11(dx25):
    st base = dx25;
    dDB10 = ld dDB;
    check L74() else D22();
  L70():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L10(dx18);
  L71():
    dr16 = tryDispatchBuiltin.0("[<-", l13, dx19);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L73() else L72(dx19);
  L72(dx21):
    ___4 = ldf `[<-` in base;
    r35 = dyn ___4(l13, <missing>, "Topic", dx19);
    goto L11(r35);
  D22():
    deopt 99 [dDB10];
  L73():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L11(dx23);
  L74():
    dDB11 = force? dDB10;
    checkMissing(dDB11);
    c26 = `is.object`(dDB11);
    if c26 then L75() else L76();
  L12(dx27):
    l16 = ld base;
    c27 = `is.object`(l16);
    if c27 then L78() else L79(dx27);
  L75():
    dr18 = tryDispatchBuiltin.1("[", dDB11);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L77() else L76();
  L76():
    __4 = ldf `[` in base;
    r36 = dyn __4(dDB11, <missing>, 2);
    goto L12(r36);
  L13(dx33):
    st base = dx33;
    l19 = ld base;
    c28 = `is.object`(l19);
    if c28 then L81() else L82("demo");
  L77():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L12(dx26);
  L78():
    dr20 = tryDispatchBuiltin.0("[<-", l16, dx27);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L80() else L79(dx27);
  L79(dx29):
    ___5 = ldf `[<-` in base;
    r37 = dyn ___5(l16, <missing>, "Title", dx27);
    goto L13(r37);
  L14(dx35):
    st base = dx35;
    rbind = ldf rbind;
    check L84() else D23();
  L80():
    dx31 = getTryDispatchBuiltinValue(dr20);
    goto L13(dx31);
  L81():
    dr22 = tryDispatchBuiltin.0("[<-", l19, "demo");
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L83() else L82("demo");
  L82(r39):
    ___6 = ldf `[<-` in base;
    r42 = dyn ___6(l19, <missing>, "Type", "demo");
    goto L14(r42);
  D23():
    deopt 120 [];
  L83():
    dx34 = getTryDispatchBuiltinValue(dr22);
    goto L14(dx34);
  L84():
    p9 = prom<V +>{
      hDB9 = ld hDB;
      hDB10 = force? hDB9;
      checkMissing(hDB10);
      c29 = `is.object`(hDB10);
      if c29 then L1() else L2(hDB10);
    L0(dx37):
      return dx37;
    L1():
      dr24 = tryDispatchBuiltin.1("[[", hDB10);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(hDB12):
      __5 = ldf `[[` in base;
      r43 = dyn __5(hDB12, 1);
      goto L0(r43);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx36);
    };
    p10 = prom<V +>{
      base6 = ld base;
      base7 = force? base6;
      checkMissing(base7);
      return base7;
    };
    r46 = dyn rbind(p9, p10);
    check L85() else D24();
  D24():
    deopt 123 [r46];
  L85():
    l22 = ld hDB;
    c30 = `is.object`(l22);
    if c30 then L86() else L87(r46, l22);
  L15(dx39):
    st hDB = dx39;
    matrix1 = ldf matrix;
    check L89() else D25();
  L86():
    dr26 = tryDispatchBuiltin.0("[[<-", l22, r46);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L88() else L87(r46, dr26);
  L87(r48, l24):
    ____ = ldf `[[<-` in base;
    r51 = dyn ____(l24, r46, 1);
    goto L15(r51);
  D25():
    deopt 130 [];
  L88():
    dx38 = getTryDispatchBuiltinValue(dr26);
    goto L15(dx38);
  L89():
    p12 = prom<V +>{
      nrow3 = ldf nrow;
      p11 = prom<V +>{
        dDB14 = ld dDB;
        dDB15 = force? dDB14;
        checkMissing(dDB15);
        return dDB15;
      };
      r53 = dyn nrow3(p11);
      return r53;
    };
    r55 = dyn matrix1[, nrow, ncol]("", p12, 3);
    check L90() else D26();
  D26():
    deopt 136 [r55];
  L90():
    st aliases = r55;
    colnames1 = ldf colnames;
    check L91() else D27();
  D27():
    deopt 139 [];
  L91():
    p13 = prom<V +>{
      hDB13 = ld hDB;
      hDB14 = force? hDB13;
      checkMissing(hDB14);
      c31 = `is.object`(hDB14);
      if c31 then L1() else L2(hDB14);
    L0(dx41):
      return dx41;
    L1():
      dr28 = tryDispatchBuiltin.1("[[", hDB14);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(hDB16):
      __6 = ldf `[[` in base;
      r56 = dyn __6(hDB16, 2);
      goto L0(r56);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx40);
    };
    r58 = dyn colnames1(p13);
    check L92() else D28();
  D28():
    deopt 141 [r58];
  L92():
    l25 = ld aliases;
    colnames__1 = ldf `colnames<-`;
    check L93() else D29();
  D29():
    deopt 143 [r58, l25, r58];
  L93():
    r59 = dyn colnames__1(l25, NULL, r58);
    check L94() else D30();
  D30():
    deopt 145 [r58, r59];
  L94():
    st aliases = r59;
    base8 = ld base;
    check L95() else D31();
  D31():
    deopt 147 [base8];
  L95():
    base9 = force? base8;
    checkMissing(base9);
    c32 = `is.object`(base9);
    if c32 then L96() else L97();
  L16(dx43):
    l26 = ld aliases;
    c33 = `is.object`(l26);
    if c33 then L99() else L100(dx43);
  L96():
    dr30 = tryDispatchBuiltin.1("[", base9);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L98() else L97();
  L97():
    __7 = ldf `[` in base;
    r60 = dyn __7(base9, <missing>, "Name");
    goto L16(r60);
  L17(dx49):
    st aliases = dx49;
    id6 = ld id;
    check L102() else D32();
  L98():
    dx42 = getTryDispatchBuiltinValue(dr30);
    goto L16(dx42);
  L99():
    dr32 = tryDispatchBuiltin.0("[<-", l26, dx43);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L101() else L100(dx43);
  L100(dx45):
    ___7 = ldf `[<-` in base;
    r61 = dyn ___7(l26, <missing>, "Alias", dx43);
    goto L17(r61);
  D32():
    deopt 159 [id6];
  L101():
    dx47 = getTryDispatchBuiltinValue(dr32);
    goto L17(dx47);
  L102():
    id7 = force? id6;
    checkMissing(id7);
    l29 = ld aliases;
    c34 = `is.object`(l29);
    if c34 then L103() else L104(id7);
  L18(dx51):
    st aliases = dx51;
    pkg7 = ld pkg;
    check L106() else D33();
  L103():
    dr34 = tryDispatchBuiltin.0("[<-", l29, id7);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L105() else L104(id7);
  L104(id9):
    ___8 = ldf `[<-` in base;
    r62 = dyn ___8(l29, <missing>, "ID", id7);
    goto L18(r62);
  D33():
    deopt 167 [pkg7];
  L105():
    dx50 = getTryDispatchBuiltinValue(dr34);
    goto L18(dx50);
  L106():
    pkg8 = force? pkg7;
    checkMissing(pkg8);
    l32 = ld aliases;
    c35 = `is.object`(l32);
    if c35 then L107() else L108(pkg8);
  L19(dx53):
    st aliases = dx53;
    rbind1 = ldf rbind;
    check L110() else D34();
  L107():
    dr36 = tryDispatchBuiltin.0("[<-", l32, pkg8);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L109() else L108(pkg8);
  L108(pkg10):
    ___9 = ldf `[<-` in base;
    r63 = dyn ___9(l32, <missing>, "Package", pkg8);
    goto L19(r63);
  D34():
    deopt 176 [];
  L109():
    dx52 = getTryDispatchBuiltinValue(dr36);
    goto L19(dx52);
  L110():
    p14 = prom<V +>{
      hDB17 = ld hDB;
      hDB18 = force? hDB17;
      checkMissing(hDB18);
      c36 = `is.object`(hDB18);
      if c36 then L1() else L2(hDB18);
    L0(dx55):
      return dx55;
    L1():
      dr38 = tryDispatchBuiltin.1("[[", hDB18);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(hDB20):
      __8 = ldf `[[` in base;
      r64 = dyn __8(hDB20, 2);
      goto L0(r64);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx54);
    };
    p15 = prom<V +>{
      aliases = ld aliases;
      aliases1 = force? aliases;
      checkMissing(aliases1);
      return aliases1;
    };
    r67 = dyn rbind1(p14, p15);
    check L111() else D35();
  D35():
    deopt 179 [r67];
  L111():
    l35 = ld hDB;
    c37 = `is.object`(l35);
    if c37 then L112() else L113(r67, l35);
  L20(r71, dx57):
    st hDB = dx57;
    goto L21();
  L112():
    dr40 = tryDispatchBuiltin.0("[[<-", l35, r67);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L114() else L113(r67, dr40);
  L113(r69, l37):
    ____1 = ldf `[[<-` in base;
    r72 = dyn ____1(l37, r67, 2);
    goto L20(r69, r72);
  L114():
    dx56 = getTryDispatchBuiltinValue(dr40);
    goto L20(r67, dx56);
  }
}