fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1277748473;
    st `.check_package_compact_sysdata` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1277748473(pkgDir, thorough) {
  (reg pkgDir:*, reg thorough:*) -+> V { var pkgDir:*, var thorough:*, reg thorough_isMissing:L, reg thorough_orDefault:*, reg file_path:cls, reg pkgDir1:*, reg pkgDir2:V, reg p:p(V +), reg r1:V, reg checkRdaFiles:cls, reg files:*, reg files1:V, reg p1:p(V +), reg r3:V, reg basename:cls, reg row_names:cls, reg rdas:*, reg rdas1:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg l:*, reg row_names__:cls, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg with:cls, reg rdas2:*, reg rdas3:V, reg p4:p(V +), reg ASCII:*, reg ASCII1:V, reg compress:*, reg compress1:V, reg r12:V, reg r13:V, reg size:*, reg size1:V, reg r14:V, reg r15:V, reg p5:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg _in_:cls, reg rdas4:*, reg rdas5:V, reg c:L, reg rdas7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r20:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg c1:cls, reg r24:V, reg p7:p(V +), reg r26:V, reg any:cls, reg r27:V, reg c2:L, reg _split_description:cls, reg _read_description:cls, reg file_path1:cls, reg pkgDir3:*, reg pkgDir4:V, reg p8:p(V +), reg r29:V, reg p9:p(V +), reg r31:V, reg p10:p(V +), reg r33:V, reg c3:L, reg r35:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r36:V, reg Rdeps:*, reg Rdeps1:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg _in_1:cls, reg dep:*, reg dep1:V, reg c5:L, reg dep3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r37:V, reg p11:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg c6:cls, reg r41:V, reg p12:p(V +), reg r43:V, reg r44:V, reg c7:L, reg dep4:*, reg dep5:V, reg c8:L, reg i10:I, reg dep7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i12:I, reg dx7:V, reg r46:V, reg package_version:cls, reg r47:V, reg r48:V, reg c9:L, reg OK:*, reg OK1:V, reg r50:V, reg c10:L, reg r51:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg r54:V, reg rdas8:*, reg rdas9:V, reg c11:L, reg rdas11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r55:V, reg sum:cls, reg r56:V, reg r57:V, reg c12:L, reg c13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg c17:L, reg r59:V, reg _in_2:cls, reg rdas12:*, reg rdas13:V, reg c18:L, reg rdas15:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r60:V, reg p13:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r62:V, reg r63:V, reg c19:cls, reg r64:V, reg p14:p(V +), reg r66:V, reg any1:cls, reg r67:V, reg c20:L, reg c21:V, reg c23:L, reg thorough1:*, reg thorough2:V, reg c24:L, reg tempfile:cls, reg r69:V, reg dir_create:cls, reg cpdir:*, reg cpdir1:V, reg p15:p(V +), reg r71:V, reg file_copy:cls, reg files2:*, reg files3:V, reg p16:p(V +), reg cpdir2:*, reg cpdir3:V, reg p17:p(V +), reg r74:V, reg resaveRdaFiles:cls, reg cpdir4:*, reg cpdir5:V, reg p18:p(V +), reg r76:V, reg checkRdaFiles1:cls, reg cpdir6:*, reg cpdir7:V, reg p19:p(V +), reg r78:V, reg basename1:cls, reg row_names1:cls, reg rdas16:*, reg rdas17:V, reg p20:p(V +), reg r80:V, reg p21:p(V +), reg r82:V, reg l2:*, reg row_names__1:cls, reg r83:V, reg rdas18:*, reg rdas19:V, reg c25:L, reg rdas21:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r84:V, reg rdas22:*, reg rdas23:V, reg c26:L, reg dx15:V, reg rdas25:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg dx19:V, reg r85:V, reg r86:V, reg rdas26:*, reg rdas27:V, reg c27:L, reg r88:V, reg rdas29:V, reg dr16:V, reg dc8:L, reg dx20:V, reg r90:V, reg dx21:V, reg r91:V, reg rdas30:*, reg rdas31:V, reg c28:L, reg r93:V, reg dx23:V, reg rdas33:V, reg dr18:V, reg dc9:L, reg dx25:V, reg r95:V, reg dx26:V, reg dx27:V, reg r96:V, reg r97:V, reg r98:V, reg diff2:*, reg diff3:V, reg rdas34:*, reg rdas35:V, reg c29:L, reg diff5:V, reg rdas37:V, reg dr20:V, reg dc10:L, reg dx28:V, reg diff7:V, reg dx29:V, reg r99:V, reg r100:V, reg r101:V, reg rdas38:*, reg rdas39:V, reg c30:L, reg r103:V, reg rdas41:V, reg dr22:V, reg dc11:L, reg dx30:V, reg r105:V, reg dx31:V, reg r106:V, reg rdas42:*, reg rdas43:V, reg c31:L, reg r109:V, reg dx33:V, reg r110:R, reg rdas45:V, reg dr24:V, reg dc12:L, reg dx35:V, reg r113:V, reg dx36:V, reg r114:R, reg dx37:V, reg r115:V, reg r116:V, reg r117:V, reg r118:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r119:V, reg r120:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r121:V, reg r122:V, reg rdas46:*, reg rdas47:V, reg c32:L, reg rdas49:V, reg dr26:V, reg dc13:L, reg dx38:V, reg dx39:V, reg r123:V, reg sum1:cls, reg r124:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r125:V, reg r126:V, reg rdas50:*, reg rdas51:V, reg c33:L, reg rdas53:V, reg dr28:V, reg dc14:L, reg dx40:V, reg dx41:V, reg r127:V, reg sum2:cls, reg r128:V, reg c34:cls, reg r129:V, reg data_frame:cls, reg rdas54:*, reg rdas55:V, reg c35:L, reg rdas57:V, reg dr30:V, reg dc15:L, reg dx42:V, reg dx43:V, reg r130:V, reg p22:p(V +), reg rdas58:*, reg rdas59:V, reg c36:L, reg rdas61:V, reg dr32:V, reg dc16:L, reg dx44:V, reg dx45:V, reg r132:V, reg p23:p(V +), reg rdas62:*, reg rdas63:V, reg c37:L, reg rdas65:V, reg dr34:V, reg dc17:L, reg dx46:V, reg dx47:V, reg r134:V, reg p24:p(V +), reg row_names2:cls, reg rdas66:*, reg rdas67:V, reg p25:p(V +), reg r137:V, reg p26:p(V +), reg r139:V, reg c38:L, reg r141:V, reg dr36:V, reg dc18:L, reg dx48:V, reg dx49:V, reg diff8:*, reg diff9:V, reg __:cls, reg r142:V, reg structure:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r143:V, reg r144:V, reg rdas68:*, reg rdas69:V, reg c39:L, reg rdas71:V, reg dr38:V, reg dc19:L, reg dx51:V, reg dx52:V, reg problems:*, reg problems1:V, reg __1:cls, reg r145:V, reg msg:*, reg msg1:V, reg sizes:*, reg sizes1:V, reg improve:*, reg improve1:V, reg list:cls, reg r146:V, reg p27:p(V +), reg r148:V |
    mkenv;
    st pkgDir = pkgDir;
    thorough_isMissing = missing.0(thorough);
    if thorough_isMissing then L0(FALSE) else L0(thorough);
  L0(thorough_orDefault):
    st thorough = thorough_orDefault;
    st msg = NULL;
    file_path = ldf `file.path`;
    check L25() else D0();
  D0():
    deopt 4 [];
  L25():
    p = prom<V +>{
      pkgDir1 = ld pkgDir;
      pkgDir2 = force? pkgDir1;
      checkMissing(pkgDir2);
      return pkgDir2;
    };
    r1 = dyn file_path(p, "R", "sysdata.rda");
    check L26() else D1();
  D1():
    deopt 8 [r1];
  L26():
    st files = r1;
    checkRdaFiles = ldf checkRdaFiles;
    check L27() else D2();
  D2():
    deopt 11 [];
  L27():
    p1 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    r3 = dyn checkRdaFiles(p1);
    check L28() else D3();
  D3():
    deopt 13 [r3];
  L28():
    st rdas = r3;
    basename = ldf basename;
    check L29() else D4();
  D4():
    deopt 16 [];
  L29():
    p3 = prom<V +>{
      row_names = ldf `row.names`;
      p2 = prom<V +>{
        rdas = ld rdas;
        rdas1 = force? rdas;
        checkMissing(rdas1);
        return rdas1;
      };
      r5 = dyn row_names(p2);
      return r5;
    };
    r7 = dyn basename(p3);
    check L30() else D5();
  D5():
    deopt 18 [r7];
  L30():
    l = ld rdas;
    row_names__ = ldf `row.names<-`;
    check L31() else D6();
  D6():
    deopt 20 [r7, l, r7];
  L31():
    r8 = dyn row_names__(l, NULL, r7);
    check L32() else D7();
  D7():
    deopt 22 [r7, r8];
  L32():
    st rdas = r8;
    sym = ldf with;
    base = ldf with in base;
    guard = `==`.4(sym, base);
    if guard then L33() else L34();
  L1(r10):
    st problems = r10;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L33():
    with = ldf with;
    check L35() else D8();
  L34():
    r9 = dyn base(<sym rdas>, <lang `&`(`(`(`|`(ASCII, `==`(compress, "none"))), `(`(`>`(size, 100000.0)))>);
    goto L1(r9);
  D8():
    deopt 26 [];
  L2(r19):
    c2 = `as.logical`(r19);
    if c2 then L42() else L3();
  L35():
    p4 = prom<V +>{
      rdas2 = ld rdas;
      rdas3 = force? rdas2;
      checkMissing(rdas3);
      return rdas3;
    };
    p5 = prom<V +>{
      ASCII = ld ASCII;
      ASCII1 = force? ASCII;
      checkMissing(ASCII1);
      compress = ld compress;
      compress1 = force? compress;
      checkMissing(compress1);
      r12 = `==`(compress1, "none");
      r13 = `||`(ASCII1, r12);
      size = ld size;
      size1 = force? size;
      checkMissing(size1);
      r14 = `>`(size1, 100000.0);
      r15 = `&&`(r13, r14);
      return r15;
    };
    r17 = dyn with(p4, p5);
    check L36() else D9();
  L37():
    _in_ = ldf `%in%`;
    check L39() else D10();
  L38():
    r18 = dyn base1(<lang `%in%`(`$`(rdas, compress), c("bzip2", "xz"))>);
    goto L2(r18);
  D9():
    deopt 29 [r17];
  D10():
    deopt 34 [];
  L3():
    goto L13();
  L13():
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L36():
    goto L1(r17);
  L39():
    p6 = prom<V +>{
      rdas4 = ld rdas;
      rdas5 = force? rdas4;
      checkMissing(rdas5);
      c = `is.object`(rdas5);
      if c then L1() else L2(rdas5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", rdas5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(rdas7):
      r20 = `$`(rdas7, <sym compress>);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p7 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c1 = ldf c in base;
      r24 = dyn c1("bzip2", "xz");
      goto L0(r24);
    L2():
      r22 = dyn base2("bzip2", "xz");
      goto L0(r22);
    };
    r26 = dyn _in_(p6, p7);
    check L40() else D11();
  L42():
    st OK = FALSE;
    _split_description = ldf `.split_description`;
    check L43() else D13();
  D11():
    deopt 37 [r26];
  D13():
    deopt 44 [];
  L14(r54):
    r57 = `<`(r54, 100000.0);
    c12 = `as.logical`(r57);
    if c12 then L15(c12) else L78();
  L40():
    any = ldf any in base;
    r27 = dyn any(r26);
    check L41() else D12();
  L43():
    p10 = prom<V +>{
      _read_description = ldf `.read_description`;
      p9 = prom<V +>{
        file_path1 = ldf `file.path`;
        p8 = prom<V +>{
          pkgDir3 = ld pkgDir;
          pkgDir4 = force? pkgDir3;
          checkMissing(pkgDir4);
          return pkgDir4;
        };
        r29 = dyn file_path1(p8, "DESCRIPTION");
        return r29;
      };
      r31 = dyn _read_description(p9);
      return r31;
    };
    r33 = dyn _split_description(p10);
    check L44() else D14();
  L70():
    rdas8 = ld rdas;
    check L72() else D22();
  L71():
    r53 = dyn base4(<lang `$`(rdas, size)>);
    goto L14(r53);
  D12():
    deopt 39 [r27];
  D14():
    deopt 46 [r33];
  D22():
    deopt 90 [rdas8];
  L15(c13):
    c23 = `as.logical`(c13);
    if c23 then L85() else L17();
  L41():
    goto L2(r27);
  L44():
    c3 = `is.object`(r33);
    if c3 then L46() else L47(r33);
  L72():
    rdas9 = force? rdas8;
    checkMissing(rdas9);
    c11 = `is.object`(rdas9);
    if c11 then L74() else L75(rdas9);
  L78():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L16(c17, r59):
    c20 = `as.logical`(r59);
    c21 = `||`(c17, c20);
    goto L15(c21);
  L17():
    goto L18();
  L18():
    thorough1 = ld thorough;
    check L87() else D27();
  L45(dx3):
    st Rdeps = dx3;
    Rdeps = ld Rdeps;
    check L49() else D15();
  L46():
    dr2 = tryDispatchBuiltin.1("$", r33);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(dr2);
  L47(r35):
    r36 = `$`(r35, <sym Rdepends2>);
    goto L45(r36);
  L73(dx9):
    sum = ldf sum in base;
    r56 = dyn sum(dx9);
    check L77() else D23();
  L74():
    dr8 = tryDispatchBuiltin.1("$", rdas9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(dr8);
  L75(rdas11):
    r55 = `$`(rdas11, <sym size>);
    goto L73(r55);
  L79():
    _in_2 = ldf `%in%`;
    check L81() else D24();
  L80():
    r58 = dyn base5(<lang `%in%`(`$`(rdas, compress), c("bzip2", "xz"))>);
    goto L16(c12, r58);
  L85():
    st thorough = FALSE;
    goto L18();
  D15():
    deopt 49 [Rdeps];
  D23():
    deopt 94 [r56];
  D24():
    deopt 100 [c12];
  D27():
    deopt 112 [thorough1];
  L48():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L45(dx2);
  L49():
    Rdeps1 = force? Rdeps;
    checkMissing(Rdeps1);
    s = toForSeq(Rdeps1);
    l1 = length(s);
    i = 0;
    goto L4(i);
  L76():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L73(dx8);
  L77():
    goto L14(r56);
  L81():
    p13 = prom<V +>{
      rdas12 = ld rdas;
      rdas13 = force? rdas12;
      checkMissing(rdas13);
      c18 = `is.object`(rdas13);
      if c18 then L1() else L2(rdas13);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", rdas13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(rdas15):
      r60 = `$`(rdas15, <sym compress>);
      goto L0(r60);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p14 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      c19 = ldf c in base;
      r64 = dyn c19("bzip2", "xz");
      goto L0(r64);
    L2():
      r62 = dyn base6("bzip2", "xz");
      goto L0(r62);
    };
    r66 = dyn _in_2(p13, p14);
    check L82() else D25();
  L87():
    thorough2 = force? thorough1;
    checkMissing(thorough2);
    c24 = `as.logical`(thorough2);
    if c24 then L88() else L19();
  D25():
    deopt 103 [c12, r66];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l1, i2);
    if c4 then L50() else L10();
  L19():
    st improve = NULL;
    st sizes = NULL;
    goto L24();
  L24():
    structure = ldf structure;
    check L165() else D58();
  L82():
    any1 = ldf any in base;
    r67 = dyn any1(r66);
    check L83() else D26();
  L88():
    tempfile = ldf tempfile;
    check L89() else D28();
  D26():
    deopt 105 [c12, r67];
  D28():
    deopt 115 [];
  D58():
    deopt 216 [];
  L8():
    OK = ld OK;
    check L66() else D21();
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st dep = x;
    _in_1 = ldf `%in%`;
    check L51() else D16();
  L50():
    goto L8();
  L83():
    goto L16(c12, r67);
  L89():
    r69 = dyn tempfile("cp");
    check L90() else D29();
  L165():
    p27 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r144):
      return r144;
    L2():
      rdas68 = ld rdas;
      rdas69 = force? rdas68;
      checkMissing(rdas69);
      c39 = `is.object`(rdas69);
      if c39 then L4() else L5(rdas69);
    L3():
      r143 = dyn base10[rdas, msg, sizes, improve](<lang `[`(rdas, problems, `:`(1.0, 3.0))>, <sym msg>, <sym sizes>, <sym improve>);
      goto L0(r143);
    L1(dx52):
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      sizes = ld sizes;
      sizes1 = force? sizes;
      checkMissing(sizes1);
      improve = ld improve;
      improve1 = force? improve;
      checkMissing(improve1);
      list = ldf list in base;
      r146 = dyn list(dx52, msg1, sizes1, improve1);
      goto L0(r146);
    L4():
      dr38 = tryDispatchBuiltin.1("[", rdas69);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L6() else L5(dr38);
    L5(rdas71):
      problems = ld problems;
      problems1 = force? problems;
      __1 = ldf `[` in base;
      r145 = dyn __1(rdas71, problems1, <int 1, 2, 3>);
      goto L1(r145);
    L6():
      dx51 = getTryDispatchBuiltinValue(dr38);
      goto L1(dx51);
    };
    r148 = dyn structure[, class](p27, "check_package_compact_datasets");
    check L166() else D59();
  D16():
    deopt 52 [i2];
  D21():
    deopt 78 [OK];
  D29():
    deopt 117 [r69];
  D59():
    deopt 220 [r148];
  L51():
    p11 = prom<V +>{
      dep = ld dep;
      dep1 = force? dep;
      checkMissing(dep1);
      c5 = `is.object`(dep1);
      if c5 then L1() else L2(dep1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", dep1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(dep3):
      r37 = `$`(dep3, <sym op>);
      goto L0(r37);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p12 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      c6 = ldf c in base;
      r41 = dyn c6(">=", ">");
      goto L0(r41);
    L2():
      r39 = dyn base3(">=", ">");
      goto L0(r39);
    };
    r43 = dyn _in_1(p11, p12);
    check L52() else D17();
  L66():
    OK1 = force? OK;
    checkMissing(OK1);
    r50 = `!`(OK1);
    c10 = `as.logical`(r50);
    if c10 then L67() else L11();
  L90():
    st cpdir = r69;
    dir_create = ldf `dir.create`;
    check L91() else D30();
  L166():
    popenv;
    return r148;
  D17():
    deopt 55 [i2, r43];
  D30():
    deopt 120 [];
  L11():
    goto L12(NULL);
  L12(r51):
    goto L13();
  L52():
    r44 = `!`(r43);
    c7 = `as.logical`(r44);
    if c7 then L53() else L5();
  L67():
    st msg = "Warning: package needs dependence on R (>= 2.10)";
    goto L12("Warning: package needs dependence on R (>= 2.10)");
  L91():
    p15 = prom<V +>{
      cpdir = ld cpdir;
      cpdir1 = force? cpdir;
      checkMissing(cpdir1);
      return cpdir1;
    };
    r71 = dyn dir_create(p15);
    check L92() else D31();
  D31():
    deopt 122 [r71];
  L5():
    dep4 = ld dep;
    check L56() else D18();
  L53():
    goto L4(i2);
  L92():
    file_copy = ldf `file.copy`;
    check L93() else D32();
  D18():
    deopt 61 [i2, dep4];
  D32():
    deopt 124 [];
  L56():
    dep5 = force? dep4;
    checkMissing(dep5);
    c8 = `is.object`(dep5);
    if c8 then L58() else L59(i2, dep5);
  L93():
    p16 = prom<V +>{
      files2 = ld files;
      files3 = force? files2;
      checkMissing(files3);
      return files3;
    };
    p17 = prom<V +>{
      cpdir2 = ld cpdir;
      cpdir3 = force? cpdir2;
      checkMissing(cpdir3);
      return cpdir3;
    };
    r74 = dyn file_copy(p16, p17);
    check L94() else D33();
  D33():
    deopt 127 [r74];
  L57(i12, dx7):
    package_version = ldf package_version;
    check L61() else D19();
  L58():
    dr6 = tryDispatchBuiltin.1("$", dep5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L60() else L59(i2, dr6);
  L59(i10, dep7):
    r46 = `$`(dep7, <sym version>);
    goto L57(i10, r46);
  L94():
    resaveRdaFiles = ldf resaveRdaFiles;
    check L95() else D34();
  D19():
    deopt 64 [i12, dx7];
  D34():
    deopt 129 [];
  L60():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L57(i2, dx6);
  L61():
    r47 = dyn package_version("2.10");
    check L62() else D20();
  L95():
    p18 = prom<V +>{
      cpdir4 = ld cpdir;
      cpdir5 = force? cpdir4;
      checkMissing(cpdir5);
      return cpdir5;
    };
    r76 = dyn resaveRdaFiles(p18);
    check L96() else D35();
  D20():
    deopt 66 [i12, dx7, r47];
  D35():
    deopt 131 [r76];
  L62():
    r48 = `>=`(dx7, r47);
    c9 = `as.logical`(r48);
    if c9 then L63() else L7();
  L96():
    checkRdaFiles1 = ldf checkRdaFiles;
    check L97() else D36();
  D36():
    deopt 133 [];
  L7():
    goto L4(i12);
  L63():
    st OK = TRUE;
    goto L8();
  L97():
    p19 = prom<V +>{
      cpdir6 = ld cpdir;
      cpdir7 = force? cpdir6;
      checkMissing(cpdir7);
      return cpdir7;
    };
    r78 = dyn checkRdaFiles1(p19);
    check L98() else D37();
  D37():
    deopt 135 [r78];
  L98():
    st rdas2 = r78;
    basename1 = ldf basename;
    check L99() else D38();
  D38():
    deopt 138 [];
  L99():
    p21 = prom<V +>{
      row_names1 = ldf `row.names`;
      p20 = prom<V +>{
        rdas16 = ld rdas2;
        rdas17 = force? rdas16;
        checkMissing(rdas17);
        return rdas17;
      };
      r80 = dyn row_names1(p20);
      return r80;
    };
    r82 = dyn basename1(p21);
    check L100() else D39();
  D39():
    deopt 140 [r82];
  L100():
    l2 = ld rdas2;
    row_names__1 = ldf `row.names<-`;
    check L101() else D40();
  D40():
    deopt 142 [r82, l2, r82];
  L101():
    r83 = dyn row_names__1(l2, NULL, r82);
    check L102() else D41();
  D41():
    deopt 144 [r82, r83];
  L102():
    st rdas2 = r83;
    rdas18 = ld rdas2;
    check L103() else D42();
  D42():
    deopt 146 [rdas18];
  L103():
    rdas19 = force? rdas18;
    checkMissing(rdas19);
    c25 = `is.object`(rdas19);
    if c25 then L105() else L106(rdas19);
  L104(dx13):
    rdas22 = ld rdas;
    check L108() else D43();
  L105():
    dr12 = tryDispatchBuiltin.1("$", rdas19);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L107() else L106(dr12);
  L106(rdas21):
    r84 = `$`(rdas21, <sym ASCII>);
    goto L104(r84);
  D43():
    deopt 148 [dx13, rdas22];
  L107():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L104(dx12);
  L108():
    rdas23 = force? rdas22;
    checkMissing(rdas23);
    c26 = `is.object`(rdas23);
    if c26 then L110() else L111(dx13, rdas23);
  L109(dx18, dx19):
    r86 = `!=`(dx18, dx19);
    rdas26 = ld rdas2;
    check L113() else D44();
  L110():
    dr14 = tryDispatchBuiltin.1("$", rdas23);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L112() else L111(dx13, dr14);
  L111(dx15, rdas25):
    r85 = `$`(rdas25, <sym ASCII>);
    goto L109(dx15, r85);
  D44():
    deopt 151 [r86, rdas26];
  L112():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L109(dx13, dx17);
  L113():
    rdas27 = force? rdas26;
    checkMissing(rdas27);
    c27 = `is.object`(rdas27);
    if c27 then L115() else L116(r86, rdas27);
  L114(r90, dx21):
    rdas30 = ld rdas;
    check L118() else D45();
  L115():
    dr16 = tryDispatchBuiltin.1("$", rdas27);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L117() else L116(r86, dr16);
  L116(r88, rdas29):
    r91 = `$`(rdas29, <sym compress>);
    goto L114(r88, r91);
  D45():
    deopt 153 [r90, dx21, rdas30];
  L117():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L114(r86, dx20);
  L118():
    rdas31 = force? rdas30;
    checkMissing(rdas31);
    c28 = `is.object`(rdas31);
    if c28 then L120() else L121(r90, dx21, rdas31);
  L119(r95, dx26, dx27):
    r97 = `!=`(dx26, dx27);
    r98 = `||`(r95, r97);
    st diff2 = r98;
    diff2 = ld diff2;
    check L123() else D46();
  L120():
    dr18 = tryDispatchBuiltin.1("$", rdas31);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L122() else L121(r90, dx21, dr18);
  L121(r93, dx23, rdas33):
    r96 = `$`(rdas33, <sym compress>);
    goto L119(r93, dx23, r96);
  D46():
    deopt 159 [diff2];
  L122():
    dx25 = getTryDispatchBuiltinValue(dr18);
    goto L119(r90, dx21, dx25);
  L123():
    diff3 = force? diff2;
    checkMissing(diff3);
    rdas34 = ld rdas;
    check L124() else D47();
  D47():
    deopt 160 [diff3, rdas34];
  L124():
    rdas35 = force? rdas34;
    checkMissing(rdas35);
    c29 = `is.object`(rdas35);
    if c29 then L126() else L127(diff3, rdas35);
  L125(diff7, dx29):
    r100 = `>`(dx29, 10000.0);
    r101 = `&&`(diff7, r100);
    rdas38 = ld rdas2;
    check L129() else D48();
  L126():
    dr20 = tryDispatchBuiltin.1("$", rdas35);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L128() else L127(diff3, dr20);
  L127(diff5, rdas37):
    r99 = `$`(rdas37, <sym size>);
    goto L125(diff5, r99);
  D48():
    deopt 165 [r101, rdas38];
  L128():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L125(diff3, dx28);
  L129():
    rdas39 = force? rdas38;
    checkMissing(rdas39);
    c30 = `is.object`(rdas39);
    if c30 then L131() else L132(r101, rdas39);
  L130(r105, dx31):
    rdas42 = ld rdas;
    check L134() else D49();
  L131():
    dr22 = tryDispatchBuiltin.1("$", rdas39);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L133() else L132(r101, dr22);
  L132(r103, rdas41):
    r106 = `$`(rdas41, <sym size>);
    goto L130(r103, r106);
  D49():
    deopt 168 [r105, dx31, 0.9, rdas42];
  L133():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L130(r101, dx30);
  L134():
    rdas43 = force? rdas42;
    checkMissing(rdas43);
    c31 = `is.object`(rdas43);
    if c31 then L136() else L137(r105, dx31, 0.9, rdas43);
  L135(r113, dx36, r114, dx37):
    r116 = `*`(r114, dx37);
    r117 = `<`(dx36, r116);
    r118 = `&&`(r113, r117);
    st diff2 = r118;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L139() else L140();
  L136():
    dr24 = tryDispatchBuiltin.1("$", rdas43);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L138() else L137(r105, dx31, 0.9, dr24);
  L137(r109, dx33, r110, rdas45):
    r115 = `$`(rdas45, <sym size>);
    goto L135(r109, dx33, r110, r115);
  L20(r120):
    st sizes = r120;
    data_frame = ldf `data.frame`;
    check L158() else D55();
  L138():
    dx35 = getTryDispatchBuiltinValue(dr24);
    goto L135(r105, dx31, 0.9, dx35);
  L139():
    sym8 = ldf sum;
    base8 = ldf sum in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L141() else L142();
  L140():
    r119 = dyn base7(<lang sum(`$`(rdas, size))>, <lang sum(`$`(rdas2, size))>);
    goto L20(r119);
  D55():
    deopt 195 [];
  L21(r122):
    sym9 = ldf sum;
    base9 = ldf sum in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L149() else L150();
  L141():
    rdas46 = ld rdas;
    check L143() else D50();
  L142():
    r121 = dyn base8(<lang `$`(rdas, size)>);
    goto L21(r121);
  L158():
    p22 = prom<V +>{
      rdas54 = ld rdas;
      rdas55 = force? rdas54;
      checkMissing(rdas55);
      c35 = `is.object`(rdas55);
      if c35 then L1() else L2(rdas55);
    L0(dx43):
      return dx43;
    L1():
      dr30 = tryDispatchBuiltin.1("$", rdas55);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(rdas57):
      r130 = `$`(rdas57, <sym size>);
      goto L0(r130);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx42);
    };
    p23 = prom<V +>{
      rdas58 = ld rdas2;
      rdas59 = force? rdas58;
      checkMissing(rdas59);
      c36 = `is.object`(rdas59);
      if c36 then L1() else L2(rdas59);
    L0(dx45):
      return dx45;
    L1():
      dr32 = tryDispatchBuiltin.1("$", rdas59);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(rdas61):
      r132 = `$`(rdas61, <sym size>);
      goto L0(r132);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx44);
    };
    p24 = prom<V +>{
      rdas62 = ld rdas2;
      rdas63 = force? rdas62;
      checkMissing(rdas63);
      c37 = `is.object`(rdas63);
      if c37 then L1() else L2(rdas63);
    L0(dx47):
      return dx47;
    L1():
      dr34 = tryDispatchBuiltin.1("$", rdas63);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(rdas65):
      r134 = `$`(rdas65, <sym compress>);
      goto L0(r134);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx46);
    };
    p26 = prom<V +>{
      row_names2 = ldf `row.names`;
      p25 = prom<V +>{
        rdas66 = ld rdas;
        rdas67 = force? rdas66;
        checkMissing(rdas67);
        return rdas67;
      };
      r137 = dyn row_names2(p25);
      return r137;
    };
    r139 = dyn data_frame[old_size, new_size, compress, `row.names`](p22, p23, p24, p26);
    check L159() else D56();
  D50():
    deopt 179 [rdas46];
  D56():
    deopt 204 [r139];
  L22(r126):
    c34 = ldf c in base;
    r129 = dyn c34(r122, r126);
    check L157() else D54();
  L143():
    rdas47 = force? rdas46;
    checkMissing(rdas47);
    c32 = `is.object`(rdas47);
    if c32 then L145() else L146(rdas47);
  L149():
    rdas50 = ld rdas2;
    check L151() else D52();
  L150():
    r125 = dyn base9(<lang `$`(rdas2, size)>);
    goto L22(r125);
  L159():
    c38 = `is.object`(r139);
    if c38 then L160() else L161(r139);
  D52():
    deopt 186 [rdas50];
  D54():
    deopt 192 [r129];
  L23(dx49):
    st improve = dx49;
    goto L24();
  L144(dx39):
    sum1 = ldf sum in base;
    r124 = dyn sum1(dx39);
    check L148() else D51();
  L145():
    dr26 = tryDispatchBuiltin.1("$", rdas47);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L147() else L146(dr26);
  L146(rdas49):
    r123 = `$`(rdas49, <sym size>);
    goto L144(r123);
  L151():
    rdas51 = force? rdas50;
    checkMissing(rdas51);
    c33 = `is.object`(rdas51);
    if c33 then L153() else L154(rdas51);
  L157():
    goto L20(r129);
  L160():
    dr36 = tryDispatchBuiltin.1("[", r139);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L162() else L161(dr36);
  L161(r141):
    diff8 = ld diff2;
    check L163() else D57();
  D51():
    deopt 183 [r124];
  D57():
    deopt 205 [r141, diff8];
  L147():
    dx38 = getTryDispatchBuiltinValue(dr26);
    goto L144(dx38);
  L148():
    goto L21(r124);
  L152(dx41):
    sum2 = ldf sum in base;
    r128 = dyn sum2(dx41);
    check L156() else D53();
  L153():
    dr28 = tryDispatchBuiltin.1("$", rdas51);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L155() else L154(dr28);
  L154(rdas53):
    r127 = `$`(rdas53, <sym size>);
    goto L152(r127);
  L162():
    dx48 = getTryDispatchBuiltinValue(dr36);
    goto L23(dx48);
  L163():
    diff9 = force? diff8;
    __ = ldf `[` in base;
    r142 = dyn __(r139, diff9, <missing>);
    goto L23(r142);
  D53():
    deopt 190 [r128];
  L155():
    dx40 = getTryDispatchBuiltinValue(dr28);
    goto L152(dx40);
  L156():
    goto L22(r128);
  }
}