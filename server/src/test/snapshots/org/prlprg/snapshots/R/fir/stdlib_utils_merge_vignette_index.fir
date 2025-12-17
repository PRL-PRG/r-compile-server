fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1845370649;
    st merge_vignette_index = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1845370649(hDB, path, pkg) {
  (reg hDB:*, reg path:*, reg pkg:*) -+> V { var hDB:*, var path:*, var pkg:*, reg file_exists:cls, reg file_path:cls, reg path1:*, reg path2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg c5:L, reg r5:V, reg readRDS:cls, reg v_file:*, reg v_file1:V, reg p2:p(V +), reg r7:V, reg c6:V, reg r8:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg nrow:cls, reg vDB:*, reg vDB1:V, reg p3:p(V +), reg r10:V, reg c13:L, reg c14:V, reg c16:L, reg matrix:cls, reg nrow1:cls, reg vDB2:*, reg vDB3:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg colnames:cls, reg hDB1:*, reg hDB2:V, reg c17:L, reg hDB4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg p6:p(V +), reg r17:V, reg l:*, reg colnames__:cls, reg r18:V, reg pkg1:*, reg pkg2:V, reg l1:*, reg c18:L, reg pkg4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r19:V, reg path3:*, reg path4:V, reg l4:*, reg c19:L, reg path6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___1:cls, reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg nrow2:cls, reg vDB4:*, reg vDB5:V, reg p7:p(V +), reg r24:V, reg r25:V, reg NROW:cls, reg hDB5:*, reg hDB6:V, reg c20:L, reg hDB8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r26:V, reg p8:p(V +), reg r28:V, reg r29:V, reg as_character:cls, reg r30:V, reg id:*, reg id1:V, reg l7:*, reg c21:L, reg id3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ___2:cls, reg r31:V, reg __2:cls, reg r32:V, reg r33:cls, reg basename:cls, reg vDB6:*, reg vDB7:V, reg c22:L, reg vDB9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r34:V, reg p9:p(V +), reg r36:V, reg p10:p(V +), reg r38:V, reg l10:*, reg c23:L, reg r40:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ___3:cls, reg r43:V, reg base2:*, reg base3:V, reg c24:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __3:cls, reg r44:V, reg l13:*, reg c25:L, reg dx17:V, reg dr16:V, reg dc8:L, reg dx19:V, reg dx21:V, reg ___4:cls, reg r45:V, reg vDB10:*, reg vDB11:V, reg c26:L, reg vDB13:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r46:V, reg l16:*, reg c27:L, reg dx25:V, reg dr20:V, reg dc10:L, reg dx27:V, reg dx29:V, reg ___5:cls, reg r47:V, reg l19:*, reg c28:L, reg r49:S, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg ___6:cls, reg r52:V, reg rbind:cls, reg hDB9:*, reg hDB10:V, reg c29:L, reg hDB12:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg __4:cls, reg r53:V, reg p11:p(V +), reg base6:*, reg base7:V, reg p12:p(V +), reg r56:V, reg l22:*, reg c30:L, reg r58:V, reg l24:*, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg ____:cls, reg r61:V, reg matrix1:cls, reg nrow3:cls, reg vDB14:*, reg vDB15:V, reg p13:p(V +), reg r63:V, reg p14:p(V +), reg r65:V, reg colnames1:cls, reg hDB13:*, reg hDB14:V, reg c31:L, reg hDB16:V, reg dr28:V, reg dc14:L, reg dx36:V, reg dx37:V, reg __5:cls, reg r66:V, reg p15:p(V +), reg r68:V, reg l25:*, reg colnames__1:cls, reg r69:V, reg base8:*, reg base9:V, reg c32:L, reg dr30:V, reg dc15:L, reg dx38:V, reg dx39:V, reg __6:cls, reg r70:V, reg l26:*, reg c33:L, reg dx41:V, reg dr32:V, reg dc16:L, reg dx43:V, reg dx45:V, reg ___7:cls, reg r71:V, reg id6:*, reg id7:V, reg l29:*, reg c34:L, reg id9:V, reg dr34:V, reg dc17:L, reg dx46:V, reg dx47:V, reg ___8:cls, reg r72:V, reg pkg7:*, reg pkg8:V, reg l32:*, reg c35:L, reg pkg10:V, reg dr36:V, reg dc18:L, reg dx48:V, reg dx49:V, reg ___9:cls, reg r73:V, reg rbind1:cls, reg hDB17:*, reg hDB18:V, reg c36:L, reg hDB20:V, reg dr38:V, reg dc19:L, reg dx50:V, reg dx51:V, reg __7:cls, reg r74:V, reg p16:p(V +), reg aliases:*, reg aliases1:V, reg p17:p(V +), reg r77:V, reg l35:*, reg c37:L, reg r79:V, reg l37:*, reg dr40:V, reg dc20:L, reg dx52:V, reg dx53:V, reg ____1:cls, reg r82:V, reg sym2:cls, reg base12:cls, reg guard2:L, reg r83:V, reg r84:V, reg lengths:cls, reg vDB16:*, reg vDB17:V, reg c38:L, reg vDB19:V, reg dr42:V, reg dc21:L, reg dx54:V, reg dx55:V, reg r85:V, reg p18:p(V +), reg r87:V, reg sum:cls, reg r88:V, reg nkeywords:*, reg nkeywords1:V, reg c39:L, reg matrix2:cls, reg nkeywords2:*, reg nkeywords3:V, reg p19:p(V +), reg r90:V, reg colnames2:cls, reg hDB21:*, reg hDB22:V, reg c40:L, reg hDB24:V, reg dr44:V, reg dc22:L, reg dx56:V, reg dx57:V, reg __8:cls, reg r91:V, reg p20:p(V +), reg r93:V, reg l38:*, reg colnames__2:cls, reg r94:V, reg unlist:cls, reg vDB20:*, reg vDB21:V, reg c41:L, reg vDB23:V, reg dr46:V, reg dc23:L, reg dx58:V, reg dx59:V, reg r95:V, reg p21:p(V +), reg r97:V, reg l39:*, reg c42:L, reg r99:V, reg dr48:V, reg dc24:L, reg dx60:V, reg dx61:V, reg ___10:cls, reg r102:V, reg unlist1:cls, reg lapply:cls, reg nrow4:cls, reg vDB24:*, reg vDB25:V, reg p22:p(V +), reg r104:V, reg r105:V, reg p23:p(V +), reg r107:cls, reg p24:p(V +), reg r109:V, reg p25:p(V +), reg r111:V, reg l42:*, reg c43:L, reg r113:V, reg dr50:V, reg dc25:L, reg dx62:V, reg dx63:V, reg ___11:cls, reg r116:V, reg pkg13:*, reg pkg14:V, reg l45:*, reg c44:L, reg pkg16:V, reg dr52:V, reg dc26:L, reg dx64:V, reg dx65:V, reg ___12:cls, reg r117:V, reg rbind2:cls, reg hDB25:*, reg hDB26:V, reg c45:L, reg hDB28:V, reg dr54:V, reg dc27:L, reg dx66:V, reg dx67:V, reg __9:cls, reg r118:V, reg p26:p(V +), reg keywords:*, reg keywords1:V, reg p27:p(V +), reg r121:V, reg l48:*, reg c46:L, reg r123:V, reg l50:*, reg dr56:V, reg dc28:L, reg dx68:V, reg r125:V, reg dx69:V, reg ____2:cls, reg r126:V, reg r127:V, reg hDB29:*, reg hDB30:V |
    mkenv;
    st hDB = hDB;
    st path = path;
    st pkg = pkg;
    file_exists = ldf `file.exists`;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        path1 = ld path;
        path2 = force? path1;
        checkMissing(path2);
        return path2;
      };
      r1 = dyn file_path(p, "Meta", "vignette.rds");
      st v_file = r1;
      invisible.0();
      return r1;
    };
    r3 = dyn file_exists(p1);
    check L28() else D1();
  D1():
    deopt 3 [r3];
  L28():
    c = `as.logical`(r3);
    if c then L29() else L0(c);
  L0(c2):
    c10 = `as.logical`(c2);
    if c10 then L35() else L2(c10);
  L29():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L1(c5, r5):
    r8 = `!`(r5);
    c7 = `as.logical`(r8);
    c8 = `&&`(c5, c7);
    goto L0(c8);
  L2(c12):
    c16 = `as.logical`(c12);
    if c16 then L39() else L3();
  L30():
    readRDS = ldf readRDS;
    check L32() else D2();
  L31():
    r4 = dyn base(<lang `<-`(vDB, readRDS(v_file))>);
    goto L1(c, r4);
  L35():
    nrow = ldf nrow;
    check L36() else D4();
  D2():
    deopt 6 [c];
  D4():
    deopt 14 [c10];
  L3():
    goto L26();
  L26():
    hDB29 = ld hDB;
    check L154() else D55();
  L32():
    p2 = prom<V +>{
      v_file = ld v_file;
      v_file1 = force? v_file;
      checkMissing(v_file1);
      return v_file1;
    };
    r7 = dyn readRDS(p2);
    check L33() else D3();
  L36():
    p3 = prom<V +>{
      vDB = ld vDB;
      vDB1 = force? vDB;
      checkMissing(vDB1);
      return vDB1;
    };
    r10 = dyn nrow(p3);
    check L37() else D5();
  L39():
    matrix = ldf matrix;
    check L40() else D6();
  D3():
    deopt 8 [c, r7];
  D5():
    deopt 16 [c10, r10];
  D6():
    deopt 19 [];
  D55():
    deopt 255 [hDB29];
  L33():
    st vDB = r7;
    c6 = `==`(r7, NULL);
    goto L1(c, c6);
  L37():
    c13 = `as.logical`(r10);
    c14 = `&&`(c10, c13);
    goto L2(c14);
  L40():
    p5 = prom<V +>{
      nrow1 = ldf nrow;
      p4 = prom<V +>{
        vDB2 = ld vDB;
        vDB3 = force? vDB2;
        checkMissing(vDB3);
        return vDB3;
      };
      r12 = dyn nrow1(p4);
      return r12;
    };
    r14 = dyn matrix[, nrow, ncol]("", p5, 8);
    check L41() else D7();
  L154():
    hDB30 = force? hDB29;
    checkMissing(hDB30);
    popenv;
    return hDB30;
  D7():
    deopt 25 [r14];
  L41():
    st base = r14;
    colnames = ldf colnames;
    check L42() else D8();
  D8():
    deopt 28 [];
  L42():
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
      r15 = dyn __(hDB4, 1);
      goto L0(r15);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r17 = dyn colnames(p6);
    check L43() else D9();
  D9():
    deopt 30 [r17];
  L43():
    l = ld base;
    colnames__ = ldf `colnames<-`;
    check L44() else D10();
  D10():
    deopt 32 [r17, l, r17];
  L44():
    r18 = dyn colnames__(l, NULL, r17);
    check L45() else D11();
  D11():
    deopt 34 [r17, r18];
  L45():
    st base = r18;
    pkg1 = ld pkg;
    check L46() else D12();
  D12():
    deopt 36 [pkg1];
  L46():
    pkg2 = force? pkg1;
    checkMissing(pkg2);
    l1 = ld base;
    c18 = `is.object`(l1);
    if c18 then L47() else L48(pkg2);
  L4(dx3):
    st base = dx3;
    path3 = ld path;
    check L50() else D13();
  L47():
    dr2 = tryDispatchBuiltin.0("[<-", l1, pkg2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48(pkg2);
  L48(pkg4):
    ___ = ldf `[<-` in base;
    r19 = dyn ___(l1, <missing>, "Package", pkg2);
    goto L4(r19);
  D13():
    deopt 44 [path3];
  L49():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L50():
    path4 = force? path3;
    checkMissing(path4);
    l4 = ld base;
    c19 = `is.object`(l4);
    if c19 then L51() else L52(path4);
  L5(dx5):
    st base = dx5;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L51():
    dr4 = tryDispatchBuiltin.0("[<-", l4, path4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L53() else L52(path4);
  L52(path6):
    ___1 = ldf `[<-` in base;
    r20 = dyn ___1(l4, <missing>, "LibPath", path4);
    goto L5(r20);
  L6(r22):
    st id = r22;
    id = ld id;
    check L61() else D19();
  L53():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L54():
    nrow2 = ldf nrow;
    check L56() else D14();
  L55():
    r21 = dyn base1(<lang `+`(`:`(1.0, nrow(vDB)), NROW(`[[`(hDB, 1)))>);
    goto L6(r21);
  D14():
    deopt 56 [1.0];
  D19():
    deopt 67 [id];
  L56():
    p7 = prom<V +>{
      vDB4 = ld vDB;
      vDB5 = force? vDB4;
      checkMissing(vDB5);
      return vDB5;
    };
    r24 = dyn nrow2(p7);
    check L57() else D15();
  L61():
    id1 = force? id;
    checkMissing(id1);
    l7 = ld base;
    c21 = `is.object`(l7);
    if c21 then L62() else L63(id1);
  D15():
    deopt 58 [1.0, r24];
  L7(dx9):
    st base = dx9;
    __2 = ldf `::`;
    check L65() else D20();
  L57():
    r25 = `:`(1.0, r24);
    NROW = ldf NROW;
    check L58() else D16();
  L62():
    dr8 = tryDispatchBuiltin.0("[<-", l7, id1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L64() else L63(id1);
  L63(id3):
    ___2 = ldf `[<-` in base;
    r31 = dyn ___2(l7, <missing>, "ID", id1);
    goto L7(r31);
  D16():
    deopt 60 [r25];
  D20():
    deopt 76 [];
  L58():
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
    check L59() else D17();
  L64():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L7(dx8);
  L65():
    r32 = dyn __2("tools", "file_path_sans_ext");
    check L66() else D21();
  D17():
    deopt 62 [r25, r28];
  D21():
    deopt 79 [r32];
  L59():
    r29 = `+`(r25, r28);
    as_character = ldf `as.character` in base;
    r30 = dyn as_character(r29);
    check L60() else D18();
  L66():
    checkFun.0(r32);
    r33 = r32 as cls;
    p10 = prom<V +>{
      basename = ldf basename;
      p9 = prom<V +>{
        vDB6 = ld vDB;
        vDB7 = force? vDB6;
        checkMissing(vDB7);
        c22 = `is.object`(vDB7);
        if c22 then L1() else L2(vDB7);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("$", vDB7);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(vDB9):
        r34 = `$`(vDB9, <sym PDF>);
        goto L0(r34);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r36 = dyn basename(p9);
      return r36;
    };
    r38 = dyn r33(p10);
    check L67() else D22();
  D18():
    deopt 65 [r30];
  D22():
    deopt 82 [r38];
  L60():
    goto L6(r30);
  L67():
    l10 = ld base;
    c23 = `is.object`(l10);
    if c23 then L68() else L69(r38);
  L8(dx13):
    st base = dx13;
    base2 = ld base;
    check L71() else D23();
  L68():
    dr12 = tryDispatchBuiltin.0("[<-", l10, r38);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L70() else L69(r38);
  L69(r40):
    ___3 = ldf `[<-` in base;
    r43 = dyn ___3(l10, <missing>, "Name", r38);
    goto L8(r43);
  D23():
    deopt 89 [base2];
  L70():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L8(dx12);
  L71():
    base3 = force? base2;
    checkMissing(base3);
    c24 = `is.object`(base3);
    if c24 then L72() else L73();
  L9(dx15):
    l13 = ld base;
    c25 = `is.object`(l13);
    if c25 then L75() else L76(dx15);
  L72():
    dr14 = tryDispatchBuiltin.1("[", base3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L74() else L73();
  L73():
    __3 = ldf `[` in base;
    r44 = dyn __3(base3, <missing>, "Name");
    goto L9(r44);
  L10(dx21):
    st base = dx21;
    vDB10 = ld vDB;
    check L78() else D24();
  L74():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L9(dx14);
  L75():
    dr16 = tryDispatchBuiltin.0("[<-", l13, dx15);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L77() else L76(dx15);
  L76(dx17):
    ___4 = ldf `[<-` in base;
    r45 = dyn ___4(l13, <missing>, "Topic", dx15);
    goto L10(r45);
  D24():
    deopt 101 [vDB10];
  L77():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L10(dx19);
  L78():
    vDB11 = force? vDB10;
    checkMissing(vDB11);
    c26 = `is.object`(vDB11);
    if c26 then L80() else L81(vDB11);
  L79(dx23):
    l16 = ld base;
    c27 = `is.object`(l16);
    if c27 then L83() else L84(dx23);
  L80():
    dr18 = tryDispatchBuiltin.1("$", vDB11);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L82() else L81(dr18);
  L81(vDB13):
    r46 = `$`(vDB13, <sym Title>);
    goto L79(r46);
  L11(dx29):
    st base = dx29;
    l19 = ld base;
    c28 = `is.object`(l19);
    if c28 then L86() else L87("vignette");
  L82():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L79(dx22);
  L83():
    dr20 = tryDispatchBuiltin.0("[<-", l16, dx23);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L85() else L84(dx23);
  L84(dx25):
    ___5 = ldf `[<-` in base;
    r47 = dyn ___5(l16, <missing>, "Title", dx23);
    goto L11(r47);
  L12(dx31):
    st base = dx31;
    rbind = ldf rbind;
    check L89() else D25();
  L85():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L11(dx27);
  L86():
    dr22 = tryDispatchBuiltin.0("[<-", l19, "vignette");
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L88() else L87("vignette");
  L87(r49):
    ___6 = ldf `[<-` in base;
    r52 = dyn ___6(l19, <missing>, "Type", "vignette");
    goto L12(r52);
  D25():
    deopt 119 [];
  L88():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L12(dx30);
  L89():
    p11 = prom<V +>{
      hDB9 = ld hDB;
      hDB10 = force? hDB9;
      checkMissing(hDB10);
      c29 = `is.object`(hDB10);
      if c29 then L1() else L2(hDB10);
    L0(dx33):
      return dx33;
    L1():
      dr24 = tryDispatchBuiltin.1("[[", hDB10);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(hDB12):
      __4 = ldf `[[` in base;
      r53 = dyn __4(hDB12, 1);
      goto L0(r53);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx32);
    };
    p12 = prom<V +>{
      base6 = ld base;
      base7 = force? base6;
      checkMissing(base7);
      return base7;
    };
    r56 = dyn rbind(p11, p12);
    check L90() else D26();
  D26():
    deopt 122 [r56];
  L90():
    l22 = ld hDB;
    c30 = `is.object`(l22);
    if c30 then L91() else L92(r56, l22);
  L13(dx35):
    st hDB = dx35;
    matrix1 = ldf matrix;
    check L94() else D27();
  L91():
    dr26 = tryDispatchBuiltin.0("[[<-", l22, r56);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L93() else L92(r56, dr26);
  L92(r58, l24):
    ____ = ldf `[[<-` in base;
    r61 = dyn ____(l24, r56, 1);
    goto L13(r61);
  D27():
    deopt 129 [];
  L93():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L13(dx34);
  L94():
    p14 = prom<V +>{
      nrow3 = ldf nrow;
      p13 = prom<V +>{
        vDB14 = ld vDB;
        vDB15 = force? vDB14;
        checkMissing(vDB15);
        return vDB15;
      };
      r63 = dyn nrow3(p13);
      return r63;
    };
    r65 = dyn matrix1[, nrow, ncol]("", p14, 3);
    check L95() else D28();
  D28():
    deopt 135 [r65];
  L95():
    st aliases = r65;
    colnames1 = ldf colnames;
    check L96() else D29();
  D29():
    deopt 138 [];
  L96():
    p15 = prom<V +>{
      hDB13 = ld hDB;
      hDB14 = force? hDB13;
      checkMissing(hDB14);
      c31 = `is.object`(hDB14);
      if c31 then L1() else L2(hDB14);
    L0(dx37):
      return dx37;
    L1():
      dr28 = tryDispatchBuiltin.1("[[", hDB14);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(hDB16):
      __5 = ldf `[[` in base;
      r66 = dyn __5(hDB16, 2);
      goto L0(r66);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx36);
    };
    r68 = dyn colnames1(p15);
    check L97() else D30();
  D30():
    deopt 140 [r68];
  L97():
    l25 = ld aliases;
    colnames__1 = ldf `colnames<-`;
    check L98() else D31();
  D31():
    deopt 142 [r68, l25, r68];
  L98():
    r69 = dyn colnames__1(l25, NULL, r68);
    check L99() else D32();
  D32():
    deopt 144 [r68, r69];
  L99():
    st aliases = r69;
    base8 = ld base;
    check L100() else D33();
  D33():
    deopt 146 [base8];
  L100():
    base9 = force? base8;
    checkMissing(base9);
    c32 = `is.object`(base9);
    if c32 then L101() else L102();
  L14(dx39):
    l26 = ld aliases;
    c33 = `is.object`(l26);
    if c33 then L104() else L105(dx39);
  L101():
    dr30 = tryDispatchBuiltin.1("[", base9);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L103() else L102();
  L102():
    __6 = ldf `[` in base;
    r70 = dyn __6(base9, <missing>, "Name");
    goto L14(r70);
  L15(dx45):
    st aliases = dx45;
    id6 = ld id;
    check L107() else D34();
  L103():
    dx38 = getTryDispatchBuiltinValue(dr30);
    goto L14(dx38);
  L104():
    dr32 = tryDispatchBuiltin.0("[<-", l26, dx39);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L106() else L105(dx39);
  L105(dx41):
    ___7 = ldf `[<-` in base;
    r71 = dyn ___7(l26, <missing>, "Alias", dx39);
    goto L15(r71);
  D34():
    deopt 158 [id6];
  L106():
    dx43 = getTryDispatchBuiltinValue(dr32);
    goto L15(dx43);
  L107():
    id7 = force? id6;
    checkMissing(id7);
    l29 = ld aliases;
    c34 = `is.object`(l29);
    if c34 then L108() else L109(id7);
  L16(dx47):
    st aliases = dx47;
    pkg7 = ld pkg;
    check L111() else D35();
  L108():
    dr34 = tryDispatchBuiltin.0("[<-", l29, id7);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L110() else L109(id7);
  L109(id9):
    ___8 = ldf `[<-` in base;
    r72 = dyn ___8(l29, <missing>, "ID", id7);
    goto L16(r72);
  D35():
    deopt 166 [pkg7];
  L110():
    dx46 = getTryDispatchBuiltinValue(dr34);
    goto L16(dx46);
  L111():
    pkg8 = force? pkg7;
    checkMissing(pkg8);
    l32 = ld aliases;
    c35 = `is.object`(l32);
    if c35 then L112() else L113(pkg8);
  L17(dx49):
    st aliases = dx49;
    rbind1 = ldf rbind;
    check L115() else D36();
  L112():
    dr36 = tryDispatchBuiltin.0("[<-", l32, pkg8);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L114() else L113(pkg8);
  L113(pkg10):
    ___9 = ldf `[<-` in base;
    r73 = dyn ___9(l32, <missing>, "Package", pkg8);
    goto L17(r73);
  D36():
    deopt 175 [];
  L114():
    dx48 = getTryDispatchBuiltinValue(dr36);
    goto L17(dx48);
  L115():
    p16 = prom<V +>{
      hDB17 = ld hDB;
      hDB18 = force? hDB17;
      checkMissing(hDB18);
      c36 = `is.object`(hDB18);
      if c36 then L1() else L2(hDB18);
    L0(dx51):
      return dx51;
    L1():
      dr38 = tryDispatchBuiltin.1("[[", hDB18);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(hDB20):
      __7 = ldf `[[` in base;
      r74 = dyn __7(hDB20, 2);
      goto L0(r74);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx50);
    };
    p17 = prom<V +>{
      aliases = ld aliases;
      aliases1 = force? aliases;
      checkMissing(aliases1);
      return aliases1;
    };
    r77 = dyn rbind1(p16, p17);
    check L116() else D37();
  D37():
    deopt 178 [r77];
  L116():
    l35 = ld hDB;
    c37 = `is.object`(l35);
    if c37 then L117() else L118(r77, l35);
  L18(dx53):
    st hDB = dx53;
    sym2 = ldf sum;
    base12 = ldf sum in base;
    guard2 = `==`.4(sym2, base12);
    if guard2 then L120() else L121();
  L117():
    dr40 = tryDispatchBuiltin.0("[[<-", l35, r77);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L119() else L118(r77, dr40);
  L118(r79, l37):
    ____1 = ldf `[[<-` in base;
    r82 = dyn ____1(l37, r77, 2);
    goto L18(r82);
  L19(r84):
    st nkeywords = r84;
    nkeywords = ld nkeywords;
    check L125() else D41();
  L119():
    dx52 = getTryDispatchBuiltinValue(dr40);
    goto L18(dx52);
  L120():
    lengths = ldf lengths;
    check L122() else D38();
  L121():
    r83 = dyn base12(<lang lengths(`$`(vDB, Keywords))>);
    goto L19(r83);
  D38():
    deopt 187 [];
  D41():
    deopt 193 [nkeywords];
  L122():
    p18 = prom<V +>{
      vDB16 = ld vDB;
      vDB17 = force? vDB16;
      checkMissing(vDB17);
      c38 = `is.object`(vDB17);
      if c38 then L1() else L2(vDB17);
    L0(dx55):
      return dx55;
    L1():
      dr42 = tryDispatchBuiltin.1("$", vDB17);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(vDB19):
      r85 = `$`(vDB19, <sym Keywords>);
      goto L0(r85);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx54);
    };
    r87 = dyn lengths(p18);
    check L123() else D39();
  L125():
    nkeywords1 = force? nkeywords;
    checkMissing(nkeywords1);
    c39 = `as.logical`(nkeywords1);
    if c39 then L126() else L20();
  D39():
    deopt 189 [r87];
  L20():
    goto L25(NULL);
  L25(r127):
    goto L26();
  L123():
    sum = ldf sum in base;
    r88 = dyn sum(r87);
    check L124() else D40();
  L126():
    matrix2 = ldf matrix;
    check L127() else D42();
  D40():
    deopt 191 [r88];
  D42():
    deopt 196 [];
  L124():
    goto L19(r88);
  L127():
    p19 = prom<V +>{
      nkeywords2 = ld nkeywords;
      nkeywords3 = force? nkeywords2;
      checkMissing(nkeywords3);
      return nkeywords3;
    };
    r90 = dyn matrix2[, nrow, ncol]("", p19, 3);
    check L128() else D43();
  D43():
    deopt 202 [r90];
  L128():
    st keywords = r90;
    colnames2 = ldf colnames;
    check L129() else D44();
  D44():
    deopt 205 [];
  L129():
    p20 = prom<V +>{
      hDB21 = ld hDB;
      hDB22 = force? hDB21;
      checkMissing(hDB22);
      c40 = `is.object`(hDB22);
      if c40 then L1() else L2(hDB22);
    L0(dx57):
      return dx57;
    L1():
      dr44 = tryDispatchBuiltin.1("[[", hDB22);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(hDB24):
      __8 = ldf `[[` in base;
      r91 = dyn __8(hDB24, 4);
      goto L0(r91);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx56);
    };
    r93 = dyn colnames2(p20);
    check L130() else D45();
  D45():
    deopt 207 [r93];
  L130():
    l38 = ld keywords;
    colnames__2 = ldf `colnames<-`;
    check L131() else D46();
  D46():
    deopt 209 [r93, l38, r93];
  L131():
    r94 = dyn colnames__2(l38, NULL, r93);
    check L132() else D47();
  D47():
    deopt 211 [r93, r94];
  L132():
    st keywords = r94;
    unlist = ldf unlist;
    check L133() else D48();
  D48():
    deopt 214 [];
  L133():
    p21 = prom<V +>{
      vDB20 = ld vDB;
      vDB21 = force? vDB20;
      checkMissing(vDB21);
      c41 = `is.object`(vDB21);
      if c41 then L1() else L2(vDB21);
    L0(dx59):
      return dx59;
    L1():
      dr46 = tryDispatchBuiltin.1("$", vDB21);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(vDB23):
      r95 = `$`(vDB23, <sym Keywords>);
      goto L0(r95);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx58);
    };
    r97 = dyn unlist(p21);
    check L134() else D49();
  D49():
    deopt 216 [r97];
  L134():
    l39 = ld keywords;
    c42 = `is.object`(l39);
    if c42 then L135() else L136(r97);
  L21(dx61):
    st keywords = dx61;
    unlist1 = ldf unlist;
    check L138() else D50();
  L135():
    dr48 = tryDispatchBuiltin.0("[<-", l39, r97);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L137() else L136(r97);
  L136(r99):
    ___10 = ldf `[<-` in base;
    r102 = dyn ___10(l39, <missing>, "Concept", r97);
    goto L21(r102);
  D50():
    deopt 224 [];
  L137():
    dx60 = getTryDispatchBuiltinValue(dr48);
    goto L21(dx60);
  L138():
    p25 = prom<V +>{
      lapply = ldf lapply;
      p23 = prom<V +>{
        nrow4 = ldf nrow;
        p22 = prom<V +>{
          vDB24 = ld vDB;
          vDB25 = force? vDB24;
          checkMissing(vDB25);
          return vDB25;
        };
        r104 = dyn nrow4(p22);
        r105 = `:`(1.0, r104);
        return r105;
      };
      p24 = prom<V +>{
        r107 = clos inner3002224933;
        return r107;
      };
      r109 = dyn lapply(p23, p24);
      return r109;
    };
    r111 = dyn unlist1(p25);
    check L139() else D51();
  D51():
    deopt 226 [r111];
  L139():
    l42 = ld keywords;
    c43 = `is.object`(l42);
    if c43 then L140() else L141(r111);
  L22(dx63):
    st keywords = dx63;
    pkg13 = ld pkg;
    check L143() else D52();
  L140():
    dr50 = tryDispatchBuiltin.0("[<-", l42, r111);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L142() else L141(r111);
  L141(r113):
    ___11 = ldf `[<-` in base;
    r116 = dyn ___11(l42, <missing>, "ID", r111);
    goto L22(r116);
  D52():
    deopt 233 [pkg13];
  L142():
    dx62 = getTryDispatchBuiltinValue(dr50);
    goto L22(dx62);
  L143():
    pkg14 = force? pkg13;
    checkMissing(pkg14);
    l45 = ld keywords;
    c44 = `is.object`(l45);
    if c44 then L144() else L145(pkg14);
  L23(dx65):
    st keywords = dx65;
    rbind2 = ldf rbind;
    check L147() else D53();
  L144():
    dr52 = tryDispatchBuiltin.0("[<-", l45, pkg14);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L146() else L145(pkg14);
  L145(pkg16):
    ___12 = ldf `[<-` in base;
    r117 = dyn ___12(l45, <missing>, "Package", pkg14);
    goto L23(r117);
  D53():
    deopt 242 [];
  L146():
    dx64 = getTryDispatchBuiltinValue(dr52);
    goto L23(dx64);
  L147():
    p26 = prom<V +>{
      hDB25 = ld hDB;
      hDB26 = force? hDB25;
      checkMissing(hDB26);
      c45 = `is.object`(hDB26);
      if c45 then L1() else L2(hDB26);
    L0(dx67):
      return dx67;
    L1():
      dr54 = tryDispatchBuiltin.1("[[", hDB26);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(hDB28):
      __9 = ldf `[[` in base;
      r118 = dyn __9(hDB28, 4);
      goto L0(r118);
    L3():
      dx66 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx66);
    };
    p27 = prom<V +>{
      keywords = ld keywords;
      keywords1 = force? keywords;
      checkMissing(keywords1);
      return keywords1;
    };
    r121 = dyn rbind2(p26, p27);
    check L148() else D54();
  D54():
    deopt 245 [r121];
  L148():
    l48 = ld hDB;
    c46 = `is.object`(l48);
    if c46 then L149() else L150(r121, l48);
  L24(r125, dx69):
    st hDB = dx69;
    goto L25(r125);
  L149():
    dr56 = tryDispatchBuiltin.0("[[<-", l48, r121);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L151() else L150(r121, dr56);
  L150(r123, l50):
    ____2 = ldf `[[<-` in base;
    r126 = dyn ____2(l50, r121, 4);
    goto L24(r123, r126);
  L151():
    dx68 = getTryDispatchBuiltinValue(dr56);
    goto L24(r121, dx68);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg id:*, reg id1:V, reg c:L, reg id3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg vDB:*, reg vDB1:V, reg c1:L, reg vDB3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg i3:*, reg i4:V, reg __1:cls, reg r6:V, reg length:cls, reg r7:V, reg rep_int:cls, reg r8:V |
    mkenv;
    st i = i;
    sym = ldf `rep.int`;
    base = ldf `rep.int` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    popenv;
    return r1;
  L4():
    id = ld id;
    check L6() else D0();
  L5():
    r = dyn base(<lang `[`(id, i)>, <lang length(`[[`(`$`(vDB, Keywords), i))>);
    goto L0(r);
  D0():
    deopt 2 [id];
  L6():
    id1 = force? id;
    checkMissing(id1);
    c = `is.object`(id1);
    if c then L7() else L8(id1);
  L1(dx1):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    dr = tryDispatchBuiltin.1("[", id1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(id3):
    i1 = ld i;
    check L10() else D1();
  D1():
    deopt 4 [id3, i1];
  L2(r4):
    rep_int = ldf `rep.int` in base;
    r8 = dyn rep_int(dx1, r4);
    check L23() else D5();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L10():
    i2 = force? i1;
    __ = ldf `[` in base;
    r2 = dyn __(id3, i2);
    goto L1(r2);
  L11():
    vDB = ld vDB;
    check L13() else D2();
  L12():
    r3 = dyn base1(<lang `[[`(`$`(vDB, Keywords), i)>);
    goto L2(r3);
  D2():
    deopt 9 [vDB];
  D5():
    deopt 18 [r8];
  L13():
    vDB1 = force? vDB;
    checkMissing(vDB1);
    c1 = `is.object`(vDB1);
    if c1 then L15() else L16(vDB1);
  L23():
    goto L0(r8);
  L14(dx3):
    c2 = `is.object`(dx3);
    if c2 then L18() else L19(dx3);
  L15():
    dr2 = tryDispatchBuiltin.1("$", vDB1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(dr2);
  L16(vDB3):
    r5 = `$`(vDB3, <sym Keywords>);
    goto L14(r5);
  L3(dx7):
    length = ldf length in base;
    r7 = dyn length(dx7);
    check L22() else D4();
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx2);
  L18():
    dr4 = tryDispatchBuiltin.1("[[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L20() else L19(dr4);
  L19(dx5):
    i3 = ld i;
    check L21() else D3();
  D3():
    deopt 12 [dx5, i3];
  D4():
    deopt 16 [r7];
  L20():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx6);
  L21():
    i4 = force? i3;
    __1 = ldf `[[` in base;
    r6 = dyn __1(dx5, i4);
    goto L3(r6);
  L22():
    goto L2(r7);
  }
}