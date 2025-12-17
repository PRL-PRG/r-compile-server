fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1277748473;
    st `.check_package_compact_datasets` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1277748473(pkgDir, thorough) {
  (reg pkgDir:*, reg thorough:*) -+> V { var pkgDir:*, var thorough:*, reg thorough_isMissing:L, reg thorough_orDefault:*, reg checkRdaFiles:cls, reg file_path:cls, reg pkgDir1:*, reg pkgDir2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg basename:cls, reg row_names:cls, reg rdas:*, reg rdas1:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg l:*, reg row_names__:cls, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg with:cls, reg rdas2:*, reg rdas3:V, reg p4:p(V +), reg ASCII:*, reg ASCII1:V, reg compress:*, reg compress1:V, reg r12:V, reg r13:V, reg size:*, reg size1:V, reg r14:V, reg r15:V, reg p5:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg _in_:cls, reg rdas4:*, reg rdas5:V, reg c:L, reg rdas7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r20:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg c1:cls, reg r24:V, reg p7:p(V +), reg r26:V, reg any:cls, reg r27:V, reg c2:L, reg _split_description:cls, reg _read_description:cls, reg file_path1:cls, reg pkgDir3:*, reg pkgDir4:V, reg p8:p(V +), reg r29:V, reg p9:p(V +), reg r31:V, reg p10:p(V +), reg r33:V, reg c3:L, reg r35:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r36:V, reg Rdeps:*, reg Rdeps1:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg _in_1:cls, reg dep:*, reg dep1:V, reg c5:L, reg dep3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r37:V, reg p11:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg c6:cls, reg r41:V, reg p12:p(V +), reg r43:V, reg r44:V, reg c7:L, reg dep4:*, reg dep5:V, reg c8:L, reg i10:I, reg dep7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i12:I, reg dx7:V, reg r46:V, reg package_version:cls, reg r47:V, reg r48:V, reg c9:L, reg OK:*, reg OK1:V, reg r50:V, reg c10:L, reg r51:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg r54:V, reg rdas8:*, reg rdas9:V, reg c11:L, reg rdas11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r55:V, reg sum:cls, reg r56:V, reg r57:V, reg c12:L, reg c13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg c17:L, reg r59:V, reg _in_2:cls, reg rdas12:*, reg rdas13:V, reg c18:L, reg rdas15:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r60:V, reg p13:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r62:V, reg r63:V, reg c19:cls, reg r64:V, reg p14:p(V +), reg r66:V, reg any1:cls, reg r67:V, reg c20:L, reg c21:V, reg c23:L, reg thorough1:*, reg thorough2:V, reg c24:L, reg Sys_glob:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r69:V, reg r70:V, reg file_path2:cls, reg pkgDir5:*, reg pkgDir6:V, reg p15:p(V +), reg r72:V, reg file_path3:cls, reg pkgDir7:*, reg pkgDir8:V, reg p16:p(V +), reg r74:V, reg c25:cls, reg r75:V, reg p17:p(V +), reg r77:V, reg files:*, reg files1:V, reg c26:L, reg files3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg endsWith:cls, reg files4:*, reg files5:V, reg p18:p(V +), reg r79:V, reg r80:V, reg __:cls, reg r81:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg r83:V, reg files6:*, reg files7:V, reg length:cls, reg r84:V, reg c27:L, reg tempfile:cls, reg r85:V, reg dir_create:cls, reg cpdir:*, reg cpdir1:V, reg p19:p(V +), reg r87:V, reg file_copy:cls, reg files8:*, reg files9:V, reg p20:p(V +), reg cpdir2:*, reg cpdir3:V, reg p21:p(V +), reg r90:V, reg resaveRdaFiles:cls, reg cpdir4:*, reg cpdir5:V, reg p22:p(V +), reg r92:V, reg checkRdaFiles1:cls, reg cpdir6:*, reg cpdir7:V, reg p23:p(V +), reg r94:V, reg basename1:cls, reg row_names1:cls, reg rdas16:*, reg rdas17:V, reg p24:p(V +), reg r96:V, reg p25:p(V +), reg r98:V, reg l2:*, reg row_names__1:cls, reg r99:V, reg rdas18:*, reg rdas19:V, reg c28:L, reg rdas21:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r100:V, reg rdas22:*, reg rdas23:V, reg c29:L, reg dx17:V, reg rdas25:V, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg dx21:V, reg r101:V, reg r102:V, reg rdas26:*, reg rdas27:V, reg c30:L, reg r104:V, reg rdas29:V, reg dr18:V, reg dc9:L, reg dx22:V, reg r106:V, reg dx23:V, reg r107:V, reg rdas30:*, reg rdas31:V, reg c31:L, reg r109:V, reg dx25:V, reg rdas33:V, reg dr20:V, reg dc10:L, reg dx27:V, reg r111:V, reg dx28:V, reg dx29:V, reg r112:V, reg r113:V, reg r114:V, reg diff2:*, reg diff3:V, reg rdas34:*, reg rdas35:V, reg c32:L, reg diff5:V, reg rdas37:V, reg dr22:V, reg dc11:L, reg dx30:V, reg diff7:V, reg dx31:V, reg r115:V, reg r116:V, reg r117:V, reg rdas38:*, reg rdas39:V, reg c33:L, reg r119:V, reg rdas41:V, reg dr24:V, reg dc12:L, reg dx32:V, reg r121:V, reg dx33:V, reg r122:V, reg rdas42:*, reg rdas43:V, reg c34:L, reg r125:V, reg dx35:V, reg r126:R, reg rdas45:V, reg dr26:V, reg dc13:L, reg dx37:V, reg r129:V, reg dx38:V, reg r130:R, reg dx39:V, reg r131:V, reg r132:V, reg r133:V, reg r134:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r135:V, reg r136:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r137:V, reg r138:V, reg rdas46:*, reg rdas47:V, reg c35:L, reg rdas49:V, reg dr28:V, reg dc14:L, reg dx40:V, reg dx41:V, reg r139:V, reg sum1:cls, reg r140:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r141:V, reg r142:V, reg rdas50:*, reg rdas51:V, reg c36:L, reg rdas53:V, reg dr30:V, reg dc15:L, reg dx42:V, reg dx43:V, reg r143:V, reg sum2:cls, reg r144:V, reg c37:cls, reg r145:V, reg data_frame:cls, reg rdas54:*, reg rdas55:V, reg c38:L, reg rdas57:V, reg dr32:V, reg dc16:L, reg dx44:V, reg dx45:V, reg r146:V, reg p26:p(V +), reg rdas58:*, reg rdas59:V, reg c39:L, reg rdas61:V, reg dr34:V, reg dc17:L, reg dx46:V, reg dx47:V, reg r148:V, reg p27:p(V +), reg rdas62:*, reg rdas63:V, reg c40:L, reg rdas65:V, reg dr36:V, reg dc18:L, reg dx48:V, reg dx49:V, reg r150:V, reg p28:p(V +), reg row_names2:cls, reg rdas66:*, reg rdas67:V, reg p29:p(V +), reg r153:V, reg p30:p(V +), reg r155:V, reg c41:L, reg r157:V, reg dr38:V, reg dc19:L, reg dx50:V, reg dx51:V, reg diff8:*, reg diff9:V, reg __1:cls, reg r158:V, reg dx52:V, reg structure:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r159:V, reg r160:V, reg rdas68:*, reg rdas69:V, reg c42:L, reg rdas71:V, reg dr40:V, reg dc20:L, reg dx54:V, reg dx55:V, reg problems:*, reg problems1:V, reg __2:cls, reg r161:V, reg msg:*, reg msg1:V, reg sizes:*, reg sizes1:V, reg improve:*, reg improve1:V, reg list:cls, reg r162:V, reg p31:p(V +), reg r164:V |
    mkenv;
    st pkgDir = pkgDir;
    thorough_isMissing = missing.0(thorough);
    if thorough_isMissing then L0(FALSE) else L0(thorough);
  L0(thorough_orDefault):
    st thorough = thorough_orDefault;
    st msg = NULL;
    checkRdaFiles = ldf checkRdaFiles;
    check L29() else D0();
  D0():
    deopt 4 [];
  L29():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        pkgDir1 = ld pkgDir;
        pkgDir2 = force? pkgDir1;
        checkMissing(pkgDir2);
        return pkgDir2;
      };
      r1 = dyn file_path(p, "data");
      return r1;
    };
    r3 = dyn checkRdaFiles(p1);
    check L30() else D1();
  D1():
    deopt 6 [r3];
  L30():
    st rdas = r3;
    basename = ldf basename;
    check L31() else D2();
  D2():
    deopt 9 [];
  L31():
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
    check L32() else D3();
  D3():
    deopt 11 [r7];
  L32():
    l = ld rdas;
    row_names__ = ldf `row.names<-`;
    check L33() else D4();
  D4():
    deopt 13 [r7, l, r7];
  L33():
    r8 = dyn row_names__(l, NULL, r7);
    check L34() else D5();
  D5():
    deopt 15 [r7, r8];
  L34():
    st rdas = r8;
    sym = ldf with;
    base = ldf with in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L1(r10):
    st problems = r10;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L35():
    with = ldf with;
    check L37() else D6();
  L36():
    r9 = dyn base(<sym rdas>, <lang `&`(`(`(`|`(ASCII, `==`(compress, "none"))), `(`(`>`(size, 100000.0)))>);
    goto L1(r9);
  D6():
    deopt 19 [];
  L2(r19):
    c2 = `as.logical`(r19);
    if c2 then L44() else L3();
  L37():
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
    check L38() else D7();
  L39():
    _in_ = ldf `%in%`;
    check L41() else D8();
  L40():
    r18 = dyn base1(<lang `%in%`(`$`(rdas, compress), c("bzip2", "xz"))>);
    goto L2(r18);
  D7():
    deopt 22 [r17];
  D8():
    deopt 27 [];
  L3():
    goto L13();
  L13():
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L72() else L73();
  L38():
    goto L1(r17);
  L41():
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
    check L42() else D9();
  L44():
    st OK = FALSE;
    _split_description = ldf `.split_description`;
    check L45() else D11();
  D9():
    deopt 30 [r26];
  D11():
    deopt 37 [];
  L14(r54):
    r57 = `<`(r54, 100000.0);
    c12 = `as.logical`(r57);
    if c12 then L15(c12) else L80();
  L42():
    any = ldf any in base;
    r27 = dyn any(r26);
    check L43() else D10();
  L45():
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
    check L46() else D12();
  L72():
    rdas8 = ld rdas;
    check L74() else D20();
  L73():
    r53 = dyn base4(<lang `$`(rdas, size)>);
    goto L14(r53);
  D10():
    deopt 32 [r27];
  D12():
    deopt 39 [r33];
  D20():
    deopt 83 [rdas8];
  L15(c13):
    c23 = `as.logical`(c13);
    if c23 then L87() else L17();
  L43():
    goto L2(r27);
  L46():
    c3 = `is.object`(r33);
    if c3 then L48() else L49(r33);
  L74():
    rdas9 = force? rdas8;
    checkMissing(rdas9);
    c11 = `is.object`(rdas9);
    if c11 then L76() else L77(rdas9);
  L80():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L81() else L82();
  L16(c17, r59):
    c20 = `as.logical`(r59);
    c21 = `||`(c17, c20);
    goto L15(c21);
  L17():
    goto L18();
  L18():
    st improve = NULL;
    st sizes = NULL;
    thorough1 = ld thorough;
    check L89() else D25();
  L47(dx3):
    st Rdeps = dx3;
    Rdeps = ld Rdeps;
    check L51() else D13();
  L48():
    dr2 = tryDispatchBuiltin.1("$", r33);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(dr2);
  L49(r35):
    r36 = `$`(r35, <sym Rdepends2>);
    goto L47(r36);
  L75(dx9):
    sum = ldf sum in base;
    r56 = dyn sum(dx9);
    check L79() else D21();
  L76():
    dr8 = tryDispatchBuiltin.1("$", rdas9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L78() else L77(dr8);
  L77(rdas11):
    r55 = `$`(rdas11, <sym size>);
    goto L75(r55);
  L81():
    _in_2 = ldf `%in%`;
    check L83() else D22();
  L82():
    r58 = dyn base5(<lang `%in%`(`$`(rdas, compress), c("bzip2", "xz"))>);
    goto L16(c12, r58);
  L87():
    st thorough = FALSE;
    goto L18();
  D13():
    deopt 42 [Rdeps];
  D21():
    deopt 87 [r56];
  D22():
    deopt 93 [c12];
  D25():
    deopt 109 [thorough1];
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L47(dx2);
  L51():
    Rdeps1 = force? Rdeps;
    checkMissing(Rdeps1);
    s = toForSeq(Rdeps1);
    l1 = length(s);
    i = 0;
    goto L4(i);
  L78():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L75(dx8);
  L79():
    goto L14(r56);
  L83():
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
    check L84() else D23();
  L89():
    thorough2 = force? thorough1;
    checkMissing(thorough2);
    c24 = `as.logical`(thorough2);
    if c24 then L90() else L19();
  D23():
    deopt 96 [c12, r66];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l1, i2);
    if c4 then L52() else L10();
  L19():
    goto L28();
  L28():
    structure = ldf structure;
    check L181() else D63();
  L84():
    any1 = ldf any in base;
    r67 = dyn any1(r66);
    check L85() else D24();
  L90():
    Sys_glob = ldf `Sys.glob`;
    check L91() else D26();
  D24():
    deopt 98 [c12, r67];
  D26():
    deopt 112 [];
  D63():
    deopt 234 [];
  L8():
    OK = ld OK;
    check L68() else D19();
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st dep = x;
    _in_1 = ldf `%in%`;
    check L53() else D14();
  L52():
    goto L8();
  L85():
    goto L16(c12, r67);
  L91():
    p17 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      file_path2 = ldf `file.path`;
      p15 = prom<V +>{
        pkgDir5 = ld pkgDir;
        pkgDir6 = force? pkgDir5;
        checkMissing(pkgDir6);
        return pkgDir6;
      };
      r72 = dyn file_path2(p15, "data", "*.rda");
      file_path3 = ldf `file.path`;
      p16 = prom<V +>{
        pkgDir7 = ld pkgDir;
        pkgDir8 = force? pkgDir7;
        checkMissing(pkgDir8);
        return pkgDir8;
      };
      r74 = dyn file_path3(p16, "data", "*.RData");
      c25 = ldf c in base;
      r75 = dyn c25(r72, r74);
      goto L0(r75);
    L2():
      r69 = dyn base7(<lang file.path(pkgDir, "data", "*.rda")>, <lang file.path(pkgDir, "data", "*.RData")>);
      goto L0(r69);
    };
    r77 = dyn Sys_glob(p17);
    check L92() else D27();
  L181():
    p31 = prom<V +>{
      sym12 = ldf list;
      base12 = ldf list in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r160):
      return r160;
    L2():
      rdas68 = ld rdas;
      rdas69 = force? rdas68;
      checkMissing(rdas69);
      c42 = `is.object`(rdas69);
      if c42 then L4() else L5(rdas69);
    L3():
      r159 = dyn base12[rdas, msg, sizes, improve](<lang `[`(rdas, problems, `:`(1.0, 3.0))>, <sym msg>, <sym sizes>, <sym improve>);
      goto L0(r159);
    L1(dx55):
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
      r162 = dyn list(dx55, msg1, sizes1, improve1);
      goto L0(r162);
    L4():
      dr40 = tryDispatchBuiltin.1("[", rdas69);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L6() else L5(dr40);
    L5(rdas71):
      problems = ld problems;
      problems1 = force? problems;
      __2 = ldf `[` in base;
      r161 = dyn __2(rdas71, problems1, <int 1, 2, 3>);
      goto L1(r161);
    L6():
      dx54 = getTryDispatchBuiltinValue(dr40);
      goto L1(dx54);
    };
    r164 = dyn structure[, class](p31, "check_package_compact_datasets");
    check L182() else D64();
  D14():
    deopt 45 [i2];
  D19():
    deopt 71 [OK];
  D27():
    deopt 114 [r77];
  D64():
    deopt 238 [r164];
  L53():
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
    check L54() else D15();
  L68():
    OK1 = force? OK;
    checkMissing(OK1);
    r50 = `!`(OK1);
    c10 = `as.logical`(r50);
    if c10 then L69() else L11();
  L92():
    st files = r77;
    files = ld files;
    check L93() else D28();
  L182():
    popenv;
    return r164;
  D15():
    deopt 48 [i2, r43];
  D28():
    deopt 116 [files];
  L11():
    goto L12(NULL);
  L12(r51):
    goto L13();
  L54():
    r44 = `!`(r43);
    c7 = `as.logical`(r44);
    if c7 then L55() else L5();
  L69():
    st msg = "Warning: package needs dependence on R (>= 2.10)";
    goto L12("Warning: package needs dependence on R (>= 2.10)");
  L93():
    files1 = force? files;
    checkMissing(files1);
    c26 = `is.object`(files1);
    if c26 then L94() else L95(files1);
  L5():
    dep4 = ld dep;
    check L58() else D16();
  L20(dx13):
    st files = dx13;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L99() else L100();
  L55():
    goto L4(i2);
  L94():
    dr12 = tryDispatchBuiltin.1("[", files1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L96() else L95(dr12);
  L95(files3):
    endsWith = ldf endsWith;
    check L97() else D29();
  D16():
    deopt 54 [i2, dep4];
  D29():
    deopt 119 [files3];
  L21(r83):
    c27 = `as.logical`(r83);
    if c27 then L103() else L22();
  L58():
    dep5 = force? dep4;
    checkMissing(dep5);
    c8 = `is.object`(dep5);
    if c8 then L60() else L61(i2, dep5);
  L96():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L20(dx12);
  L97():
    p18 = prom<V +>{
      files4 = ld files;
      files5 = force? files4;
      checkMissing(files5);
      return files5;
    };
    r79 = dyn endsWith(p18, "/.RData");
    check L98() else D30();
  L99():
    files6 = ld files;
    check L101() else D31();
  L100():
    r82 = dyn base8(<sym files>);
    goto L21(r82);
  D30():
    deopt 122 [files3, r79];
  D31():
    deopt 128 [files6];
  L22():
    goto L27(NULL);
  L27(dx52):
    goto L28();
  L59(i12, dx7):
    package_version = ldf package_version;
    check L63() else D17();
  L60():
    dr6 = tryDispatchBuiltin.1("$", dep5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L62() else L61(i2, dr6);
  L61(i10, dep7):
    r46 = `$`(dep7, <sym version>);
    goto L59(i10, r46);
  L98():
    r80 = `!`(r79);
    __ = ldf `[` in base;
    r81 = dyn __(files3, r80);
    goto L20(r81);
  L101():
    files7 = force? files6;
    checkMissing(files7);
    length = ldf length in base;
    r84 = dyn length(files7);
    check L102() else D32();
  L103():
    tempfile = ldf tempfile;
    check L104() else D33();
  D17():
    deopt 57 [i12, dx7];
  D32():
    deopt 131 [r84];
  D33():
    deopt 133 [];
  L62():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L59(i2, dx6);
  L63():
    r47 = dyn package_version("2.10");
    check L64() else D18();
  L102():
    goto L21(r84);
  L104():
    r85 = dyn tempfile("cp");
    check L105() else D34();
  D18():
    deopt 59 [i12, dx7, r47];
  D34():
    deopt 135 [r85];
  L64():
    r48 = `>=`(dx7, r47);
    c9 = `as.logical`(r48);
    if c9 then L65() else L7();
  L105():
    st cpdir = r85;
    dir_create = ldf `dir.create`;
    check L106() else D35();
  D35():
    deopt 138 [];
  L7():
    goto L4(i12);
  L65():
    st OK = TRUE;
    goto L8();
  L106():
    p19 = prom<V +>{
      cpdir = ld cpdir;
      cpdir1 = force? cpdir;
      checkMissing(cpdir1);
      return cpdir1;
    };
    r87 = dyn dir_create(p19);
    check L107() else D36();
  D36():
    deopt 140 [r87];
  L107():
    file_copy = ldf `file.copy`;
    check L108() else D37();
  D37():
    deopt 142 [];
  L108():
    p20 = prom<V +>{
      files8 = ld files;
      files9 = force? files8;
      checkMissing(files9);
      return files9;
    };
    p21 = prom<V +>{
      cpdir2 = ld cpdir;
      cpdir3 = force? cpdir2;
      checkMissing(cpdir3);
      return cpdir3;
    };
    r90 = dyn file_copy(p20, p21);
    check L109() else D38();
  D38():
    deopt 145 [r90];
  L109():
    resaveRdaFiles = ldf resaveRdaFiles;
    check L110() else D39();
  D39():
    deopt 147 [];
  L110():
    p22 = prom<V +>{
      cpdir4 = ld cpdir;
      cpdir5 = force? cpdir4;
      checkMissing(cpdir5);
      return cpdir5;
    };
    r92 = dyn resaveRdaFiles(p22);
    check L111() else D40();
  D40():
    deopt 149 [r92];
  L111():
    checkRdaFiles1 = ldf checkRdaFiles;
    check L112() else D41();
  D41():
    deopt 151 [];
  L112():
    p23 = prom<V +>{
      cpdir6 = ld cpdir;
      cpdir7 = force? cpdir6;
      checkMissing(cpdir7);
      return cpdir7;
    };
    r94 = dyn checkRdaFiles1(p23);
    check L113() else D42();
  D42():
    deopt 153 [r94];
  L113():
    st rdas2 = r94;
    basename1 = ldf basename;
    check L114() else D43();
  D43():
    deopt 156 [];
  L114():
    p25 = prom<V +>{
      row_names1 = ldf `row.names`;
      p24 = prom<V +>{
        rdas16 = ld rdas2;
        rdas17 = force? rdas16;
        checkMissing(rdas17);
        return rdas17;
      };
      r96 = dyn row_names1(p24);
      return r96;
    };
    r98 = dyn basename1(p25);
    check L115() else D44();
  D44():
    deopt 158 [r98];
  L115():
    l2 = ld rdas2;
    row_names__1 = ldf `row.names<-`;
    check L116() else D45();
  D45():
    deopt 160 [r98, l2, r98];
  L116():
    r99 = dyn row_names__1(l2, NULL, r98);
    check L117() else D46();
  D46():
    deopt 162 [r98, r99];
  L117():
    st rdas2 = r99;
    rdas18 = ld rdas2;
    check L118() else D47();
  D47():
    deopt 164 [rdas18];
  L118():
    rdas19 = force? rdas18;
    checkMissing(rdas19);
    c28 = `is.object`(rdas19);
    if c28 then L120() else L121(rdas19);
  L119(dx15):
    rdas22 = ld rdas;
    check L123() else D48();
  L120():
    dr14 = tryDispatchBuiltin.1("$", rdas19);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L122() else L121(dr14);
  L121(rdas21):
    r100 = `$`(rdas21, <sym ASCII>);
    goto L119(r100);
  D48():
    deopt 166 [dx15, rdas22];
  L122():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L119(dx14);
  L123():
    rdas23 = force? rdas22;
    checkMissing(rdas23);
    c29 = `is.object`(rdas23);
    if c29 then L125() else L126(dx15, rdas23);
  L124(dx20, dx21):
    r102 = `!=`(dx20, dx21);
    rdas26 = ld rdas2;
    check L128() else D49();
  L125():
    dr16 = tryDispatchBuiltin.1("$", rdas23);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L127() else L126(dx15, dr16);
  L126(dx17, rdas25):
    r101 = `$`(rdas25, <sym ASCII>);
    goto L124(dx17, r101);
  D49():
    deopt 169 [r102, rdas26];
  L127():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L124(dx15, dx19);
  L128():
    rdas27 = force? rdas26;
    checkMissing(rdas27);
    c30 = `is.object`(rdas27);
    if c30 then L130() else L131(r102, rdas27);
  L129(r106, dx23):
    rdas30 = ld rdas;
    check L133() else D50();
  L130():
    dr18 = tryDispatchBuiltin.1("$", rdas27);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L132() else L131(r102, dr18);
  L131(r104, rdas29):
    r107 = `$`(rdas29, <sym compress>);
    goto L129(r104, r107);
  D50():
    deopt 171 [r106, dx23, rdas30];
  L132():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L129(r102, dx22);
  L133():
    rdas31 = force? rdas30;
    checkMissing(rdas31);
    c31 = `is.object`(rdas31);
    if c31 then L135() else L136(r106, dx23, rdas31);
  L134(r111, dx28, dx29):
    r113 = `!=`(dx28, dx29);
    r114 = `||`(r111, r113);
    st diff2 = r114;
    diff2 = ld diff2;
    check L138() else D51();
  L135():
    dr20 = tryDispatchBuiltin.1("$", rdas31);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L137() else L136(r106, dx23, dr20);
  L136(r109, dx25, rdas33):
    r112 = `$`(rdas33, <sym compress>);
    goto L134(r109, dx25, r112);
  D51():
    deopt 177 [diff2];
  L137():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L134(r106, dx23, dx27);
  L138():
    diff3 = force? diff2;
    checkMissing(diff3);
    rdas34 = ld rdas;
    check L139() else D52();
  D52():
    deopt 178 [diff3, rdas34];
  L139():
    rdas35 = force? rdas34;
    checkMissing(rdas35);
    c32 = `is.object`(rdas35);
    if c32 then L141() else L142(diff3, rdas35);
  L140(diff7, dx31):
    r116 = `>`(dx31, 10000.0);
    r117 = `&&`(diff7, r116);
    rdas38 = ld rdas2;
    check L144() else D53();
  L141():
    dr22 = tryDispatchBuiltin.1("$", rdas35);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L143() else L142(diff3, dr22);
  L142(diff5, rdas37):
    r115 = `$`(rdas37, <sym size>);
    goto L140(diff5, r115);
  D53():
    deopt 183 [r117, rdas38];
  L143():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L140(diff3, dx30);
  L144():
    rdas39 = force? rdas38;
    checkMissing(rdas39);
    c33 = `is.object`(rdas39);
    if c33 then L146() else L147(r117, rdas39);
  L145(r121, dx33):
    rdas42 = ld rdas;
    check L149() else D54();
  L146():
    dr24 = tryDispatchBuiltin.1("$", rdas39);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L148() else L147(r117, dr24);
  L147(r119, rdas41):
    r122 = `$`(rdas41, <sym size>);
    goto L145(r119, r122);
  D54():
    deopt 186 [r121, dx33, 0.9, rdas42];
  L148():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L145(r117, dx32);
  L149():
    rdas43 = force? rdas42;
    checkMissing(rdas43);
    c34 = `is.object`(rdas43);
    if c34 then L151() else L152(r121, dx33, 0.9, rdas43);
  L150(r129, dx38, r130, dx39):
    r132 = `*`(r130, dx39);
    r133 = `<`(dx38, r132);
    r134 = `&&`(r129, r133);
    st diff2 = r134;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L154() else L155();
  L151():
    dr26 = tryDispatchBuiltin.1("$", rdas43);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L153() else L152(r121, dx33, 0.9, dr26);
  L152(r125, dx35, r126, rdas45):
    r131 = `$`(rdas45, <sym size>);
    goto L150(r125, dx35, r126, r131);
  L23(r136):
    st sizes = r136;
    data_frame = ldf `data.frame`;
    check L173() else D60();
  L153():
    dx37 = getTryDispatchBuiltinValue(dr26);
    goto L150(r121, dx33, 0.9, dx37);
  L154():
    sym10 = ldf sum;
    base10 = ldf sum in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L156() else L157();
  L155():
    r135 = dyn base9(<lang sum(`$`(rdas, size))>, <lang sum(`$`(rdas2, size))>);
    goto L23(r135);
  D60():
    deopt 213 [];
  L24(r138):
    sym11 = ldf sum;
    base11 = ldf sum in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L164() else L165();
  L156():
    rdas46 = ld rdas;
    check L158() else D55();
  L157():
    r137 = dyn base10(<lang `$`(rdas, size)>);
    goto L24(r137);
  L173():
    p26 = prom<V +>{
      rdas54 = ld rdas;
      rdas55 = force? rdas54;
      checkMissing(rdas55);
      c38 = `is.object`(rdas55);
      if c38 then L1() else L2(rdas55);
    L0(dx45):
      return dx45;
    L1():
      dr32 = tryDispatchBuiltin.1("$", rdas55);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(rdas57):
      r146 = `$`(rdas57, <sym size>);
      goto L0(r146);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx44);
    };
    p27 = prom<V +>{
      rdas58 = ld rdas2;
      rdas59 = force? rdas58;
      checkMissing(rdas59);
      c39 = `is.object`(rdas59);
      if c39 then L1() else L2(rdas59);
    L0(dx47):
      return dx47;
    L1():
      dr34 = tryDispatchBuiltin.1("$", rdas59);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(rdas61):
      r148 = `$`(rdas61, <sym size>);
      goto L0(r148);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx46);
    };
    p28 = prom<V +>{
      rdas62 = ld rdas2;
      rdas63 = force? rdas62;
      checkMissing(rdas63);
      c40 = `is.object`(rdas63);
      if c40 then L1() else L2(rdas63);
    L0(dx49):
      return dx49;
    L1():
      dr36 = tryDispatchBuiltin.1("$", rdas63);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(rdas65):
      r150 = `$`(rdas65, <sym compress>);
      goto L0(r150);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx48);
    };
    p30 = prom<V +>{
      row_names2 = ldf `row.names`;
      p29 = prom<V +>{
        rdas66 = ld rdas;
        rdas67 = force? rdas66;
        checkMissing(rdas67);
        return rdas67;
      };
      r153 = dyn row_names2(p29);
      return r153;
    };
    r155 = dyn data_frame[old_size, new_size, compress, `row.names`](p26, p27, p28, p30);
    check L174() else D61();
  D55():
    deopt 197 [rdas46];
  D61():
    deopt 222 [r155];
  L25(r142):
    c37 = ldf c in base;
    r145 = dyn c37(r138, r142);
    check L172() else D59();
  L158():
    rdas47 = force? rdas46;
    checkMissing(rdas47);
    c35 = `is.object`(rdas47);
    if c35 then L160() else L161(rdas47);
  L164():
    rdas50 = ld rdas2;
    check L166() else D57();
  L165():
    r141 = dyn base11(<lang `$`(rdas2, size)>);
    goto L25(r141);
  L174():
    c41 = `is.object`(r155);
    if c41 then L175() else L176(r155);
  D57():
    deopt 204 [rdas50];
  D59():
    deopt 210 [r145];
  L26(dx51):
    st improve = dx51;
    goto L27(dx51);
  L159(dx41):
    sum1 = ldf sum in base;
    r140 = dyn sum1(dx41);
    check L163() else D56();
  L160():
    dr28 = tryDispatchBuiltin.1("$", rdas47);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L162() else L161(dr28);
  L161(rdas49):
    r139 = `$`(rdas49, <sym size>);
    goto L159(r139);
  L166():
    rdas51 = force? rdas50;
    checkMissing(rdas51);
    c36 = `is.object`(rdas51);
    if c36 then L168() else L169(rdas51);
  L172():
    goto L23(r145);
  L175():
    dr38 = tryDispatchBuiltin.1("[", r155);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L177() else L176(dr38);
  L176(r157):
    diff8 = ld diff2;
    check L178() else D62();
  D56():
    deopt 201 [r140];
  D62():
    deopt 223 [r157, diff8];
  L162():
    dx40 = getTryDispatchBuiltinValue(dr28);
    goto L159(dx40);
  L163():
    goto L24(r140);
  L167(dx43):
    sum2 = ldf sum in base;
    r144 = dyn sum2(dx43);
    check L171() else D58();
  L168():
    dr30 = tryDispatchBuiltin.1("$", rdas51);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L170() else L169(dr30);
  L169(rdas53):
    r143 = `$`(rdas53, <sym size>);
    goto L167(r143);
  L177():
    dx50 = getTryDispatchBuiltinValue(dr38);
    goto L26(dx50);
  L178():
    diff9 = force? diff8;
    __1 = ldf `[` in base;
    r158 = dyn __1(r155, diff9, <missing>);
    goto L26(r158);
  D58():
    deopt 208 [r144];
  L170():
    dx42 = getTryDispatchBuiltinValue(dr30);
    goto L167(dx42);
  L171():
    goto L25(r144);
  }
}