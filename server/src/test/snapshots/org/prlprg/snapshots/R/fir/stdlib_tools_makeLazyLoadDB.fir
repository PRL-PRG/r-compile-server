fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2983973072;
    st makeLazyLoadDB = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2983973072(from, filebase, compress, ascii, variables, `set.install.dir`) {
  (reg from:*, reg filebase:*, reg compress:*, reg ascii:*, reg variables:*, reg set_install_dir:*) -+> V { var from:*, var filebase:*, var compress:*, reg compress_isMissing:L, reg compress_orDefault:*, var ascii:*, reg ascii_isMissing:L, reg ascii_orDefault:*, var variables:*, var `set.install.dir`:*, reg set_install_dir_isMissing:L, reg set_install_dir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ascii1:*, reg ascii2:V, reg as_logical:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg ascii3:*, reg ascii4:V, reg is_na:cls, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg ascii5:*, reg ascii6:V, reg as_integer:cls, reg r10:V, reg r11:cls, reg r12:cls, reg file_exists:cls, reg system_file:cls, reg r13:V, reg p:p(V +), reg r15:V, reg c1:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg c6:L, reg r17:V, reg tryCatch:cls, reg loadNamespace:cls, reg r18:V, reg p1:p(V +), reg identity:*, reg identity1:V, reg p2:p(V +), reg r21:V, reg is_environment:cls, reg r22:V, reg c7:L, reg c8:V, reg c10:L, reg r23:cls, reg r25:cls, reg r26:cls, reg r27:cls, reg paste0:cls, reg filebase1:*, reg filebase2:V, reg p3:p(V +), reg r29:V, reg paste1:cls, reg filebase3:*, reg filebase4:V, reg p4:p(V +), reg r31:V, reg close:cls, reg file:cls, reg datafile:*, reg datafile1:V, reg p5:p(V +), reg r33:V, reg p6:p(V +), reg r35:V, reg envtable:cls, reg r36:V, reg new_env:cls, reg r37:V, reg new_env1:cls, reg r38:V, reg r39:cls, reg r40:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg from1:*, reg from2:V, reg c11:V, reg c12:L, reg c13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg c17:L, reg r44:V, reg from3:*, reg from4:V, reg is_environment1:cls, reg r45:V, reg c18:L, reg c19:V, reg c21:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg missing:cls, reg r48:V, reg r49:V, reg c22:L, reg variables1:*, reg variables2:V, reg variables3:V, reg ls:cls, reg from5:*, reg from6:V, reg p7:p(V +), reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg from7:*, reg from8:V, reg is_list:cls, reg r54:V, reg c23:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg from9:*, reg from10:V, reg names:cls, reg r57:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg vars:*, reg vars1:V, reg length:cls, reg r60:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg r65:V, reg from11:*, reg from12:V, reg length1:cls, reg r66:V, reg r67:V, reg c24:L, reg c25:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r68:V, reg c29:L, reg r69:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg c32:L, reg r71:V, reg vars2:*, reg vars3:V, reg nzchar:cls, reg r72:V, reg r73:V, reg any:cls, reg r74:V, reg c33:L, reg c34:V, reg c36:L, reg stop1:cls, reg r75:V, reg r76:V, reg stop2:cls, reg r77:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r78:V, reg r79:V, reg set_install_dir1:*, reg set_install_dir2:V, reg c37:V, reg r80:V, reg c38:L, reg c40:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r81:V, reg c43:L, reg r82:V, reg from13:*, reg from14:V, reg is_environment2:cls, reg r83:V, reg c44:L, reg c45:V, reg c47:L, reg c49:V, reg _in_:cls, reg vars4:*, reg vars5:V, reg p8:p(V +), reg r85:V, reg c50:L, reg c51:V, reg c53:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r86:V, reg r87:V, reg from15:*, reg from16:V, reg getVarsFromFrame:cls, reg r88:V, reg x:*, reg x1:V, reg c54:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r89:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r90:V, reg r91:V, reg vars6:*, reg vars7:V, reg r92:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c55:L, reg x4:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r93:V, reg i7:I, reg r94:V, reg from17:*, reg from18:V, reg c56:V, reg c57:L, reg i8:I, reg c58:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r95:V, reg i12:I, reg c62:L, reg r96:V, reg from19:*, reg from20:V, reg is_environment3:cls, reg r97:V, reg c63:L, reg c64:V, reg c66:L, reg lazyLoadDBinsertVariable:cls, reg vars8:*, reg vars9:V, reg c67:L, reg vars11:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg i16:*, reg i17:V, reg __1:cls, reg r98:V, reg p9:p(V +), reg from21:*, reg from22:V, reg p10:p(V +), reg datafile2:*, reg datafile3:V, reg p11:p(V +), reg ascii7:*, reg ascii8:V, reg p12:p(V +), reg compress1:*, reg compress2:V, reg p13:p(V +), reg envhook:*, reg envhook1:V, reg p14:p(V +), reg r105:V, reg i18:I, reg r106:V, reg lazyLoadDBinsertListElement:cls, reg from23:*, reg from24:V, reg p15:p(V +), reg i19:*, reg i20:V, reg p16:p(V +), reg datafile4:*, reg datafile5:V, reg p17:p(V +), reg ascii9:*, reg ascii10:V, reg p18:p(V +), reg compress3:*, reg compress4:V, reg p19:p(V +), reg envhook2:*, reg envhook3:V, reg p20:p(V +), reg r113:V, reg assign:cls, reg vars12:*, reg vars13:V, reg c68:L, reg vars15:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg i21:*, reg i22:V, reg __2:cls, reg r114:V, reg p21:p(V +), reg key:*, reg key1:V, reg p22:p(V +), reg varenv:*, reg varenv1:V, reg p23:p(V +), reg r118:V, reg lapply:cls, reg vars16:*, reg vars17:V, reg p24:p(V +), reg get:*, reg get1:V, reg p25:p(V +), reg varenv2:*, reg varenv3:V, reg p26:p(V +), reg r122:V, reg vars18:*, reg vars19:V, reg l1:*, reg names__:cls, reg r123:V, reg ls1:cls, reg envenv:*, reg envenv1:V, reg p27:p(V +), reg r125:V, reg lapply1:cls, reg rvars:*, reg rvars1:V, reg p28:p(V +), reg get2:*, reg get3:V, reg p29:p(V +), reg envenv2:*, reg envenv3:V, reg p30:p(V +), reg r129:V, reg rvars2:*, reg rvars3:V, reg l2:*, reg names__1:cls, reg r130:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r131:V, reg r132:V, reg vals:*, reg vals1:V, reg rvals:*, reg rvals1:V, reg compress5:*, reg compress6:V, reg list:cls, reg r133:V, reg saveRDS:cls, reg val:*, reg val1:V, reg p31:p(V +), reg mapfile:*, reg mapfile1:V, reg p32:p(V +), reg r136:V |
    mkenv;
    st from = from;
    st filebase = filebase;
    compress_isMissing = missing.0(compress);
    if compress_isMissing then L0(TRUE) else L0(compress);
  L0(compress_orDefault):
    st compress = compress_orDefault;
    ascii_isMissing = missing.0(ascii);
    if ascii_isMissing then L1(FALSE) else L1(ascii);
  L1(ascii_orDefault):
    st ascii = ascii_orDefault;
    st variables = variables;
    set_install_dir_isMissing = missing.0(set_install_dir);
    if set_install_dir_isMissing then L2(NULL) else L2(set_install_dir);
  L2(set_install_dir_orDefault):
    st `set.install.dir` = set_install_dir_orDefault;
    sym = ldf `as.logical`;
    base = ldf `as.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L47() else L48();
  L3(r1):
    st ascii = r1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L47():
    ascii1 = ld ascii;
    check L49() else D0();
  L48():
    r = dyn base(<sym ascii>);
    goto L3(r);
  D0():
    deopt 2 [ascii1];
  L4(r4):
    c = `as.logical`(r4);
    if c then L55() else L5();
  L49():
    ascii2 = force? ascii1;
    checkMissing(ascii2);
    as_logical = ldf `as.logical` in base;
    r2 = dyn as_logical(ascii2);
    check L50() else D1();
  L51():
    ascii3 = ld ascii;
    check L53() else D2();
  L52():
    r3 = dyn base1(<sym ascii>);
    goto L4(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [ascii3];
  L5():
    goto L6();
  L6():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L50():
    goto L3(r2);
  L53():
    ascii4 = force? ascii3;
    checkMissing(ascii4);
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(ascii4);
    check L54() else D3();
  L55():
    stop = ldf stop;
    check L56() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 14 [];
  L7(r9):
    st ascii = r9;
    r11 = clos inner3708401697;
    st envlist = r11;
    r12 = clos inner2708337952;
    st envtable = r12;
    file_exists = ldf `file.exists`;
    check L63() else D8();
  L54():
    goto L4(r5);
  L56():
    r6 = dyn stop[, domain]("'ascii' must be TRUE or FALSE", NA_LGL);
    check L57() else D5();
  L59():
    ascii5 = ld ascii;
    check L61() else D6();
  L60():
    r8 = dyn base2(<sym ascii>);
    goto L7(r8);
  D5():
    deopt 18 [r6];
  D6():
    deopt 23 [ascii5];
  D8():
    deopt 35 [];
  L57():
    goto L6();
  L61():
    ascii6 = force? ascii5;
    checkMissing(ascii6);
    as_integer = ldf `as.integer` in base;
    r10 = dyn as_integer(ascii6);
    check L62() else D7();
  L63():
    p = prom<V +>{
      system_file = ldf `system.file`;
      r13 = dyn system_file[, , package]("R", "utils.rdx", "utils");
      return r13;
    };
    r15 = dyn file_exists(p);
    check L64() else D9();
  D7():
    deopt 26 [r10];
  D9():
    deopt 37 [r15];
  L62():
    goto L7(r10);
  L64():
    c1 = `as.logical`(r15);
    if c1 then L65() else L8(c1);
  L8(c3):
    c10 = `as.logical`(c3);
    if c10 then L72() else L10();
  L65():
    sym3 = ldf `is.environment`;
    base3 = ldf `is.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L66() else L67();
  L9(c6, r17):
    c7 = `as.logical`(r17);
    c8 = `&&`(c6, c7);
    goto L8(c8);
  L10():
    goto L11();
  L11():
    r25 = clos inner352989033;
    st lazyLoadDBinsertValue = r25;
    r26 = clos inner750562105;
    st lazyLoadDBinsertListElement = r26;
    r27 = clos inner3704037171;
    st lazyLoadDBinsertVariable = r27;
    paste0 = ldf paste0;
    check L74() else D13();
  L66():
    tryCatch = ldf tryCatch;
    check L68() else D10();
  L67():
    r16 = dyn base3(<lang tryCatch(loadNamespace("utils"), error=identity)>);
    goto L9(c1, r16);
  L72():
    r23 = clos inner2708337952;
    st envtable = r23;
    goto L11();
  D10():
    deopt 41 [c1];
  D13():
    deopt 64 [];
  L68():
    p1 = prom<V +>{
      loadNamespace = ldf loadNamespace;
      r18 = dyn loadNamespace("utils");
      return r18;
    };
    p2 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r21 = dyn tryCatch[, error](p1, p2);
    check L69() else D11();
  L74():
    p3 = prom<V +>{
      filebase1 = ld filebase;
      filebase2 = force? filebase1;
      checkMissing(filebase2);
      return filebase2;
    };
    r29 = dyn paste0(p3, ".rdx");
    check L75() else D14();
  D11():
    deopt 45 [c1, r21];
  D14():
    deopt 67 [r29];
  L69():
    is_environment = ldf `is.environment` in base;
    r22 = dyn is_environment(r21);
    check L70() else D12();
  L75():
    st mapfile = r29;
    paste1 = ldf paste0;
    check L76() else D15();
  D12():
    deopt 47 [c1, r22];
  D15():
    deopt 70 [];
  L70():
    goto L9(c1, r22);
  L76():
    p4 = prom<V +>{
      filebase3 = ld filebase;
      filebase4 = force? filebase3;
      checkMissing(filebase4);
      return filebase4;
    };
    r31 = dyn paste1(p4, ".rdb");
    check L77() else D16();
  D16():
    deopt 73 [r31];
  L77():
    st datafile = r31;
    close = ldf close;
    check L78() else D17();
  D17():
    deopt 76 [];
  L78():
    p6 = prom<V +>{
      file = ldf file;
      p5 = prom<V +>{
        datafile = ld datafile;
        datafile1 = force? datafile;
        checkMissing(datafile1);
        return datafile1;
      };
      r33 = dyn file(p5, "wb");
      return r33;
    };
    r35 = dyn close(p6);
    check L79() else D18();
  D18():
    deopt 78 [r35];
  L79():
    envtable = ldf envtable;
    check L80() else D19();
  D19():
    deopt 80 [];
  L80():
    r36 = dyn envtable();
    check L81() else D20();
  D20():
    deopt 81 [r36];
  L81():
    st table = r36;
    new_env = ldf `new.env`;
    check L82() else D21();
  D21():
    deopt 84 [];
  L82():
    r37 = dyn new_env[hash](TRUE);
    check L83() else D22();
  D22():
    deopt 87 [r37];
  L83():
    st varenv = r37;
    new_env1 = ldf `new.env`;
    check L84() else D23();
  D23():
    deopt 90 [];
  L84():
    r38 = dyn new_env1[hash](TRUE);
    check L85() else D24();
  D24():
    deopt 93 [r38];
  L85():
    st envenv = r38;
    r39 = clos inner1468740107;
    st lazyenvhook = r39;
    r40 = clos inner3708401697;
    st envhook = r40;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L86() else L87();
  L12(r42):
    c12 = `as.logical`(r42);
    if c12 then L13(c12) else L89();
  L86():
    from1 = ld from;
    check L88() else D25();
  L87():
    r41 = dyn base4(<sym from>);
    goto L12(r41);
  D25():
    deopt 102 [from1];
  L13(c13):
    c21 = `as.logical`(c13);
    if c21 then L95() else L15();
  L88():
    from2 = force? from1;
    checkMissing(from2);
    c11 = `==`(from2, NULL);
    goto L12(c11);
  L89():
    sym5 = ldf `is.environment`;
    base5 = ldf `is.environment` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L90() else L91();
  L14(c17, r44):
    c18 = `as.logical`(r44);
    c19 = `||`(c17, c18);
    goto L13(c19);
  L15():
    sym7 = ldf `is.list`;
    base7 = ldf `is.list` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L104() else L105();
  L19():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L137() else L138();
  L90():
    from3 = ld from;
    check L92() else D26();
  L91():
    r43 = dyn base5(<sym from>);
    goto L14(c12, r43);
  L95():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L96() else L97();
  D26():
    deopt 107 [c12, from3];
  L16(r47):
    r49 = `!`(r47);
    c22 = `as.logical`(r49);
    if c22 then L98() else L17();
  L20(r53):
    c23 = `as.logical`(r53);
    if c23 then L108() else L21();
  L30(r79):
    r80 = `!`(r79);
    c38 = `as.logical`(r80);
    if c38 then L140() else L31(c38);
  L92():
    from4 = force? from3;
    checkMissing(from4);
    is_environment1 = ldf `is.environment` in base;
    r45 = dyn is_environment1(from4);
    check L93() else D27();
  L96():
    missing = ldf missing in base;
    r48 = dyn missing(<sym variables>);
    goto L16(r48);
  L97():
    r46 = dyn base6(<sym variables>);
    goto L16(r46);
  L104():
    from7 = ld from;
    check L106() else D31();
  L105():
    r52 = dyn base7(<sym from>);
    goto L20(r52);
  L137():
    set_install_dir1 = ld `set.install.dir`;
    check L139() else D46();
  L138():
    r78 = dyn base13(<sym set.install.dir>);
    goto L30(r78);
  D27():
    deopt 110 [c12, r45];
  D31():
    deopt 128 [from7];
  D46():
    deopt 174 [set_install_dir1];
  L17():
    ls = ldf ls;
    check L101() else D29();
  L18(variables3):
    goto L19();
  L21():
    stop2 = ldf stop;
    check L135() else D44();
  L31(c40):
    c47 = `as.logical`(c40);
    if c47 then L146() else L33(c47);
  L93():
    goto L14(c12, r45);
  L98():
    variables1 = ld variables;
    check L99() else D28();
  L106():
    from8 = force? from7;
    checkMissing(from8);
    is_list = ldf `is.list` in base;
    r54 = dyn is_list(from8);
    check L107() else D32();
  L108():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L109() else L110();
  L139():
    set_install_dir2 = force? set_install_dir1;
    checkMissing(set_install_dir2);
    c37 = `==`(set_install_dir2, NULL);
    goto L30(c37);
  L140():
    sym14 = ldf `is.environment`;
    base14 = ldf `is.environment` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L141() else L142();
  D28():
    deopt 116 [variables1];
  D29():
    deopt 120 [];
  D32():
    deopt 131 [r54];
  D44():
    deopt 170 [];
  L22(r56):
    st vars = r56;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L113() else L114();
  L32(c43, r82):
    c44 = `as.logical`(r82);
    c45 = `&&`(c43, c44);
    goto L31(c45);
  L33(c49):
    c53 = `as.logical`(c49);
    if c53 then L150() else L34();
  L99():
    variables2 = force? variables1;
    checkMissing(variables2);
    st vars = variables2;
    goto L18(variables2);
  L101():
    p7 = prom<V +>{
      from5 = ld from;
      from6 = force? from5;
      checkMissing(from6);
      return from6;
    };
    r51 = dyn ls[, `all.names`](p7, TRUE);
    check L102() else D30();
  L107():
    goto L20(r54);
  L109():
    from9 = ld from;
    check L111() else D33();
  L110():
    r55 = dyn base8(<sym from>);
    goto L22(r55);
  L135():
    r77 = dyn stop2("source must be an environment or a list");
    check L136() else D45();
  L141():
    from13 = ld from;
    check L143() else D47();
  L142():
    r81 = dyn base14(<sym from>);
    goto L32(c38, r81);
  L146():
    _in_ = ldf `%in%`;
    check L147() else D49();
  D30():
    deopt 124 [r51];
  D33():
    deopt 134 [from9];
  D45():
    deopt 172 [r77];
  D47():
    deopt 180 [c38, from13];
  D49():
    deopt 186 [c47];
  L23(r59):
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L117() else L118();
  L34():
    st nsinfo = NULL;
    goto L37();
  L37():
    sym16 = ldf seq_along;
    base16 = ldf seq_along in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L160() else L161();
  L102():
    st vars = r51;
    goto L18(r51);
  L111():
    from10 = force? from9;
    checkMissing(from10);
    names = ldf names in base;
    r57 = dyn names(from10);
    check L112() else D34();
  L113():
    vars = ld vars;
    check L115() else D35();
  L114():
    r58 = dyn base9(<sym vars>);
    goto L23(r58);
  L136():
    goto L19();
  L143():
    from14 = force? from13;
    checkMissing(from14);
    is_environment2 = ldf `is.environment` in base;
    r83 = dyn is_environment2(from14);
    check L144() else D48();
  L147():
    p8 = prom<V +>{
      vars4 = ld vars;
      vars5 = force? vars4;
      checkMissing(vars5);
      return vars5;
    };
    r85 = dyn _in_(".__NAMESPACE__.", p8);
    check L148() else D50();
  L150():
    sym15 = ldf `.Internal`;
    base15 = ldf `.Internal` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L151() else L152();
  D34():
    deopt 137 [r57];
  D35():
    deopt 141 [vars];
  D48():
    deopt 183 [c38, r83];
  D50():
    deopt 189 [c47, r85];
  L24(r64, r65):
    r67 = `!=`(r64, r65);
    c24 = `as.logical`(r67);
    if c24 then L25(c24) else L121();
  L35(r87):
    st x = r87;
    x = ld x;
    check L155() else D53();
  L38(r91):
    s = toForSeq(r91);
    l = length(s);
    i = 0;
    goto L39(i);
  L112():
    goto L22(r57);
  L115():
    vars1 = force? vars;
    checkMissing(vars1);
    length = ldf length in base;
    r60 = dyn length(vars1);
    check L116() else D36();
  L117():
    from11 = ld from;
    check L119() else D37();
  L118():
    r63 = dyn base10(<sym from>);
    goto L24(r59, r63);
  L144():
    goto L32(c38, r83);
  L148():
    c50 = `as.logical`(r85);
    c51 = `&&`(c47, c50);
    goto L33(c51);
  L151():
    from15 = ld from;
    check L153() else D51();
  L152():
    r86 = dyn base15(<lang getVarsFromFrame(".__NAMESPACE__.", from, FALSE)>);
    goto L35(r86);
  L160():
    vars6 = ld vars;
    check L162() else D54();
  L161():
    r90 = dyn base16(<sym vars>);
    goto L38(r90);
  D36():
    deopt 144 [r60];
  D37():
    deopt 146 [r59, from11];
  D51():
    deopt 194 [from15];
  D53():
    deopt 200 [x];
  D54():
    deopt 210 [vars6];
  L25(c25):
    c36 = `as.logical`(c25);
    if c36 then L130() else L28();
  L39(i1):
    i2 = `+`.1(i1, 1);
    c55 = `<`.1(l, i2);
    if c55 then L163() else L45();
  L116():
    goto L23(r60);
  L119():
    from12 = force? from11;
    checkMissing(from12);
    length1 = ldf length in base;
    r66 = dyn length1(from12);
    check L120() else D38();
  L121():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L122() else L123();
  L153():
    from16 = force? from15;
    checkMissing(from16);
    getVarsFromFrame = ldf getVarsFromFrame in base;
    r88 = dyn getVarsFromFrame(".__NAMESPACE__.", from16, FALSE);
    check L154() else D52();
  L155():
    x1 = force? x;
    checkMissing(x1);
    c54 = `is.object`(x1);
    if c54 then L156() else L157(x1);
  L162():
    vars7 = force? vars6;
    checkMissing(vars7);
    r92 = seq_along(vars7);
    goto L38(r92);
  D38():
    deopt 149 [r59, r66];
  D52():
    deopt 198 [r88];
  L26(c29, r69):
    c33 = `as.logical`(r69);
    c34 = `||`(c29, c33);
    goto L25(c34);
  L28():
    goto L29(NULL);
  L29(r76):
    goto L19();
  L36(dx1):
    st nsinfo = dx1;
    goto L37();
  L45():
    x4 = `[[`(s, i2, NULL, TRUE);
    st i = x4;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L164() else L165();
  L120():
    goto L24(r59, r66);
  L122():
    sym12 = ldf nzchar;
    base12 = ldf nzchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L124() else L125();
  L123():
    r68 = dyn base11(<lang `!`(nzchar(vars))>);
    goto L26(c24, r68);
  L130():
    stop1 = ldf stop;
    check L131() else D42();
  L154():
    goto L35(r88);
  L156():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L158() else L157(dr);
  L157(x3):
    __ = ldf `[[` in base;
    r89 = dyn __(x3, 1);
    goto L36(r89);
  L163():
    lapply = ldf lapply;
    check L181() else D64();
  D42():
    deopt 164 [];
  D64():
    deopt 254 [];
  L27(c32, r71):
    r73 = `!`(r71);
    any = ldf any in base;
    r74 = dyn any(r73);
    check L128() else D41();
  L40(i7, r94):
    c57 = `as.logical`(r94);
    if c57 then L41(i7, c57) else L167();
  L124():
    vars2 = ld vars;
    check L126() else D39();
  L125():
    r70 = dyn base12(<sym vars>);
    goto L27(c24, r70);
  L131():
    r75 = dyn stop1("source list must have names for all elements");
    check L132() else D43();
  L158():
    dx = getTryDispatchBuiltinValue(dr);
    goto L36(dx);
  L164():
    from17 = ld from;
    check L166() else D55();
  L165():
    r93 = dyn base17(<sym from>);
    goto L40(i2, r93);
  L181():
    p24 = prom<V +>{
      vars16 = ld vars;
      vars17 = force? vars16;
      checkMissing(vars17);
      return vars17;
    };
    p25 = prom<V +>{
      get = ld get;
      get1 = force? get;
      checkMissing(get1);
      return get1;
    };
    p26 = prom<V +>{
      varenv2 = ld varenv;
      varenv3 = force? varenv2;
      checkMissing(varenv3);
      return varenv3;
    };
    r122 = dyn lapply[, , envir, inherits](p24, p25, p26, FALSE);
    check L182() else D65();
  D39():
    deopt 155 [c24, vars2];
  D41():
    deopt 161 [c32, r74];
  D43():
    deopt 166 [r75];
  D55():
    deopt 214 [i2, from17];
  D65():
    deopt 261 [r122];
  L41(i8, c58):
    c66 = `as.logical`(c58);
    if c66 then L173() else L43();
  L126():
    vars3 = force? vars2;
    checkMissing(vars3);
    nzchar = ldf nzchar in base;
    r72 = dyn nzchar(vars3);
    check L127() else D40();
  L128():
    goto L26(c32, r74);
  L132():
    goto L29(r75);
  L166():
    from18 = force? from17;
    checkMissing(from18);
    c56 = `==`(from18, NULL);
    goto L40(i2, c56);
  L167():
    sym18 = ldf `is.environment`;
    base18 = ldf `is.environment` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L168() else L169();
  L182():
    st vals = r122;
    vars18 = ld vars;
    check L183() else D66();
  D40():
    deopt 158 [c24, r72];
  D66():
    deopt 263 [vars18];
  L42(i12, c62, r96):
    c63 = `as.logical`(r96);
    c64 = `||`(c62, c63);
    goto L41(i12, c64);
  L43():
    lazyLoadDBinsertListElement = ldf lazyLoadDBinsertListElement;
    check L177() else D60();
  L44(i18, r106):
    st key = r106;
    assign = ldf assign;
    check L179() else D62();
  L127():
    goto L27(c24, r72);
  L168():
    from19 = ld from;
    check L170() else D56();
  L169():
    r95 = dyn base18(<sym from>);
    goto L42(i7, c57, r95);
  L173():
    lazyLoadDBinsertVariable = ldf lazyLoadDBinsertVariable;
    check L174() else D58();
  L183():
    vars19 = force? vars18;
    checkMissing(vars19);
    l1 = ld vals;
    names__ = ldf `names<-`;
    check L184() else D67();
  D56():
    deopt 219 [i7, c57, from19];
  D58():
    deopt 225 [i8];
  D60():
    deopt 234 [i8];
  D62():
    deopt 244 [i18];
  D67():
    deopt 266 [vars19, l1, vars19];
  L170():
    from20 = force? from19;
    checkMissing(from20);
    is_environment3 = ldf `is.environment` in base;
    r97 = dyn is_environment3(from20);
    check L171() else D57();
  L174():
    p9 = prom<V +>{
      vars8 = ld vars;
      vars9 = force? vars8;
      checkMissing(vars9);
      c67 = `is.object`(vars9);
      if c67 then L1() else L2(vars9);
    L0(dx4):
      return dx4;
    L1():
      dr2 = tryDispatchBuiltin.1("[", vars9);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(vars11):
      i16 = ld i;
      i17 = force? i16;
      __1 = ldf `[` in base;
      r98 = dyn __1(vars11, i17);
      goto L0(r98);
    L3():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    };
    p10 = prom<V +>{
      from21 = ld from;
      from22 = force? from21;
      checkMissing(from22);
      return from22;
    };
    p11 = prom<V +>{
      datafile2 = ld datafile;
      datafile3 = force? datafile2;
      checkMissing(datafile3);
      return datafile3;
    };
    p12 = prom<V +>{
      ascii7 = ld ascii;
      ascii8 = force? ascii7;
      checkMissing(ascii8);
      return ascii8;
    };
    p13 = prom<V +>{
      compress1 = ld compress;
      compress2 = force? compress1;
      checkMissing(compress2);
      return compress2;
    };
    p14 = prom<V +>{
      envhook = ld envhook;
      envhook1 = force? envhook;
      checkMissing(envhook1);
      return envhook1;
    };
    r105 = dyn lazyLoadDBinsertVariable(p9, p10, p11, p12, p13, p14);
    check L175() else D59();
  L177():
    p15 = prom<V +>{
      from23 = ld from;
      from24 = force? from23;
      checkMissing(from24);
      return from24;
    };
    p16 = prom<V +>{
      i19 = ld i;
      i20 = force? i19;
      checkMissing(i20);
      return i20;
    };
    p17 = prom<V +>{
      datafile4 = ld datafile;
      datafile5 = force? datafile4;
      checkMissing(datafile5);
      return datafile5;
    };
    p18 = prom<V +>{
      ascii9 = ld ascii;
      ascii10 = force? ascii9;
      checkMissing(ascii10);
      return ascii10;
    };
    p19 = prom<V +>{
      compress3 = ld compress;
      compress4 = force? compress3;
      checkMissing(compress4);
      return compress4;
    };
    p20 = prom<V +>{
      envhook2 = ld envhook;
      envhook3 = force? envhook2;
      checkMissing(envhook3);
      return envhook3;
    };
    r113 = dyn lazyLoadDBinsertListElement(p15, p16, p17, p18, p19, p20);
    check L178() else D61();
  L179():
    p21 = prom<V +>{
      vars12 = ld vars;
      vars13 = force? vars12;
      checkMissing(vars13);
      c68 = `is.object`(vars13);
      if c68 then L1() else L2(vars13);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("[", vars13);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(vars15):
      i21 = ld i;
      i22 = force? i21;
      __2 = ldf `[` in base;
      r114 = dyn __2(vars15, i22);
      goto L0(r114);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    p22 = prom<V +>{
      key = ld key;
      key1 = force? key;
      checkMissing(key1);
      return key1;
    };
    p23 = prom<V +>{
      varenv = ld varenv;
      varenv1 = force? varenv;
      checkMissing(varenv1);
      return varenv1;
    };
    r118 = dyn assign[, , envir](p21, p22, p23);
    check L180() else D63();
  L184():
    r123 = dyn names__(l1, NULL, vars19);
    check L185() else D68();
  D57():
    deopt 222 [i7, c57, r97];
  D59():
    deopt 232 [i8, r105];
  D61():
    deopt 241 [i8, r113];
  D63():
    deopt 249 [i18, r118];
  D68():
    deopt 268 [vars19, r123];
  L171():
    goto L42(i7, c57, r97);
  L175():
    goto L44(i8, r105);
  L178():
    goto L44(i8, r113);
  L180():
    goto L39(i18);
  L185():
    st vals = r123;
    ls1 = ldf ls;
    check L186() else D69();
  D69():
    deopt 271 [];
  L186():
    p27 = prom<V +>{
      envenv = ld envenv;
      envenv1 = force? envenv;
      checkMissing(envenv1);
      return envenv1;
    };
    r125 = dyn ls1[, `all.names`](p27, TRUE);
    check L187() else D70();
  D70():
    deopt 275 [r125];
  L187():
    st rvars = r125;
    lapply1 = ldf lapply;
    check L188() else D71();
  D71():
    deopt 278 [];
  L188():
    p28 = prom<V +>{
      rvars = ld rvars;
      rvars1 = force? rvars;
      checkMissing(rvars1);
      return rvars1;
    };
    p29 = prom<V +>{
      get2 = ld get;
      get3 = force? get2;
      checkMissing(get3);
      return get3;
    };
    p30 = prom<V +>{
      envenv2 = ld envenv;
      envenv3 = force? envenv2;
      checkMissing(envenv3);
      return envenv3;
    };
    r129 = dyn lapply1[, , envir, inherits](p28, p29, p30, FALSE);
    check L189() else D72();
  D72():
    deopt 285 [r129];
  L189():
    st rvals = r129;
    rvars2 = ld rvars;
    check L190() else D73();
  D73():
    deopt 287 [rvars2];
  L190():
    rvars3 = force? rvars2;
    checkMissing(rvars3);
    l2 = ld rvals;
    names__1 = ldf `names<-`;
    check L191() else D74();
  D74():
    deopt 290 [rvars3, l2, rvars3];
  L191():
    r130 = dyn names__1(l2, NULL, rvars3);
    check L192() else D75();
  D75():
    deopt 292 [rvars3, r130];
  L192():
    st rvals = r130;
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L193() else L194();
  L46(r132):
    st val = r132;
    saveRDS = ldf saveRDS;
    check L199() else D80();
  L193():
    vals = ld vals;
    check L195() else D76();
  L194():
    r131 = dyn base19[variables, references, compressed](<sym vals>, <sym rvals>, <sym compress>);
    goto L46(r131);
  D76():
    deopt 296 [vals];
  D80():
    deopt 309 [];
  L195():
    vals1 = force? vals;
    checkMissing(vals1);
    rvals = ld rvals;
    check L196() else D77();
  L199():
    p31 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      return val1;
    };
    p32 = prom<V +>{
      mapfile = ld mapfile;
      mapfile1 = force? mapfile;
      checkMissing(mapfile1);
      return mapfile1;
    };
    r136 = dyn saveRDS(p31, p32);
    check L200() else D81();
  D77():
    deopt 299 [rvals];
  D81():
    deopt 312 [r136];
  L196():
    rvals1 = force? rvals;
    checkMissing(rvals1);
    compress5 = ld compress;
    check L197() else D78();
  L200():
    popenv;
    return r136;
  D78():
    deopt 302 [compress5];
  L197():
    compress6 = force? compress5;
    checkMissing(compress6);
    list = ldf list in base;
    r133 = dyn list(vals1, rvals1, compress6);
    check L198() else D79();
  D79():
    deopt 306 [r133];
  L198():
    goto L46(r133);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ls:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r3:V, reg e3:*, reg e4:V, reg getVarsFromFrame:cls, reg r4:V |
    mkenv;
    st e = e;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    ls = ldf ls;
    check L3() else D0();
  L2():
    r = dyn base(<lang getVarsFromFrame(ls(e, all.names=TRUE), e, FALSE)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r3 = dyn ls[, `all.names`](p, TRUE);
    check L4() else D1();
  D1():
    deopt 7 [r3];
  L4():
    e3 = ld e;
    check L5() else D2();
  D2():
    deopt 8 [e3];
  L5():
    e4 = force? e3;
    checkMissing(e4);
    getVarsFromFrame = ldf getVarsFromFrame in base;
    r4 = dyn getVarsFromFrame(r3, e4, FALSE);
    check L6() else D3();
  D3():
    deopt 12 [r4];
  L6():
    goto L0(r4);
  }
}
fun inner2708337952() {
  () -+> V { reg character:cls, reg r:V, reg r1:cls, reg r2:cls, reg r3:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg insert:*, reg insert1:V, reg getname:*, reg getname1:V, reg list:cls, reg r6:V |
    mkenv;
    st idx = 0.0;
    st envs = NULL;
    character = ldf character;
    check L1() else D0();
  D0():
    deopt 7 [];
  L1():
    r = dyn character(0);
    check L2() else D1();
  D1():
    deopt 9 [r];
  L2():
    st enames = r;
    r1 = clos inner3074021440;
    st find = r1;
    r2 = clos inner3708401697;
    st getname = r2;
    r3 = clos inner3708401697;
    st insert = r3;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r5):
    popenv;
    return r5;
  L3():
    insert = ld insert;
    check L5() else D2();
  L4():
    r4 = dyn base[insert, getname](<sym insert>, <sym getname>);
    goto L0(r4);
  D2():
    deopt 22 [insert];
  L5():
    insert1 = force? insert;
    checkMissing(insert1);
    getname = ld getname;
    check L6() else D3();
  D3():
    deopt 25 [getname];
  L6():
    getname1 = force? getname;
    checkMissing(getname1);
    list = ldf list in base;
    r6 = dyn list(insert1, getname1);
    check L7() else D4();
  D4():
    deopt 29 [r6];
  L7():
    goto L0(r6);
  }
}
fun inner3074021440(v, keys, vals) {
  (reg v:*, reg keys:*, reg vals:*) -+> V { var v:*, var keys:*, var vals:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg keys1:*, reg keys2:V, reg r2:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg i7:I, reg r4:V, reg v1:*, reg v2:V, reg keys3:*, reg keys4:V, reg c1:L, reg i9:I, reg keys6:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r5:V, reg identical:cls, reg r6:V, reg c2:L, reg vals1:*, reg vals2:V, reg c3:L, reg i17:I, reg vals4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i20:*, reg i21:V, reg __1:cls, reg r7:V |
    mkenv;
    st v = v;
    st keys = keys;
    st vals = vals;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L8():
    keys1 = ld keys;
    check L10() else D0();
  L9():
    r = dyn base(<sym keys>);
    goto L0(r);
  D0():
    deopt 1 [keys1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L11() else L7();
  L10():
    keys2 = force? keys1;
    checkMissing(keys2);
    r2 = seq_along(keys2);
    goto L0(r2);
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L11():
    popenv;
    return NULL;
  L2(i7, r4):
    c2 = `as.logical`(r4);
    if c2 then L21() else L4();
  L12():
    v1 = ld v;
    check L14() else D1();
  L13():
    r3 = dyn base1(<sym v>, <lang `[[`(keys, i)>);
    goto L2(i2, r3);
  D1():
    deopt 6 [i2, v1];
  L4():
    goto L1(i7);
  L14():
    v2 = force? v1;
    checkMissing(v2);
    keys3 = ld keys;
    check L15() else D2();
  L21():
    vals1 = ld vals;
    check L22() else D5();
  D2():
    deopt 8 [i2, keys3];
  D5():
    deopt 22 [i7, vals1];
  L15():
    keys4 = force? keys3;
    checkMissing(keys4);
    c1 = `is.object`(keys4);
    if c1 then L16() else L17(i2, keys4);
  L22():
    vals2 = force? vals1;
    checkMissing(vals2);
    c3 = `is.object`(vals2);
    if c3 then L23() else L24(i7, vals2);
  L3(i11, dx1):
    identical = ldf identical in base;
    r6 = dyn identical(v2, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L20() else D4();
  L5(dx3):
    popenv;
    return dx3;
  L16():
    dr = tryDispatchBuiltin.1("[[", keys4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(i2, dr);
  L17(i9, keys6):
    i12 = ld i;
    check L19() else D3();
  L23():
    dr2 = tryDispatchBuiltin.1("[", vals2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(i7, dr2);
  L24(i17, vals4):
    i20 = ld i;
    check L26() else D6();
  D3():
    deopt 10 [i9, keys6, i12];
  D4():
    deopt 21 [i11, r6];
  D6():
    deopt 24 [i17, vals4, i20];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L19():
    i13 = force? i12;
    __ = ldf `[[` in base;
    r5 = dyn __(keys6, i13);
    goto L3(i9, r5);
  L20():
    goto L2(i11, r6);
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L26():
    i21 = force? i20;
    __1 = ldf `[` in base;
    r7 = dyn __1(vals4, i21);
    goto L5(r7);
  }
}
fun inner352989033(value, file, ascii, compress, hook) {
  (reg value:*, reg file:*, reg ascii:*, reg compress:*, reg hook:*) -+> V { var value:*, var file:*, var ascii:*, var compress:*, var hook:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg value1:*, reg value2:V, reg file1:*, reg file2:V, reg ascii1:*, reg ascii2:V, reg compress1:*, reg compress2:V, reg hook1:*, reg hook2:V, reg lazyLoadDBinsertValue:cls, reg r2:V |
    mkenv;
    st value = value;
    st file = file;
    st ascii = ascii;
    st compress = compress;
    st hook = hook;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    value1 = ld value;
    check L3() else D0();
  L2():
    r = dyn base(<lang lazyLoadDBinsertValue(value, file, ascii, compress, hook)>);
    goto L0(r);
  D0():
    deopt 2 [value1];
  L3():
    value2 = force? value1;
    checkMissing(value2);
    file1 = ld file;
    check L4() else D1();
  D1():
    deopt 4 [file1];
  L4():
    file2 = force? file1;
    checkMissing(file2);
    ascii1 = ld ascii;
    check L5() else D2();
  D2():
    deopt 6 [ascii1];
  L5():
    ascii2 = force? ascii1;
    checkMissing(ascii2);
    compress1 = ld compress;
    check L6() else D3();
  D3():
    deopt 8 [compress1];
  L6():
    compress2 = force? compress1;
    checkMissing(compress2);
    hook1 = ld hook;
    check L7() else D4();
  D4():
    deopt 10 [hook1];
  L7():
    hook2 = force? hook1;
    checkMissing(hook2);
    lazyLoadDBinsertValue = ldf lazyLoadDBinsertValue in base;
    r2 = dyn lazyLoadDBinsertValue(value2, file2, ascii2, compress2, hook2);
    check L8() else D5();
  D5():
    deopt 13 [r2];
  L8():
    goto L0(r2);
  }
}
fun inner750562105(x, i, file, ascii, compress, hook) {
  (reg x:*, reg i:*, reg file:*, reg ascii:*, reg compress:*, reg hook:*) -+> V { var x:*, var i:*, var file:*, var ascii:*, var compress:*, var hook:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r2:V, reg file1:*, reg file2:V, reg ascii1:*, reg ascii2:V, reg compress1:*, reg compress2:V, reg hook1:*, reg hook2:V, reg lazyLoadDBinsertValue:cls, reg r3:V |
    mkenv;
    st x = x;
    st i = i;
    st file = file;
    st ascii = ascii;
    st compress = compress;
    st hook = hook;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<lang lazyLoadDBinsertValue(`[[`(x, i), file, ascii, compress, hook)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L5() else L6(x2);
  L1(dx1):
    file1 = ld file;
    check L9() else D2();
  L5():
    dr = tryDispatchBuiltin.1("[[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(x4):
    i1 = ld i;
    check L8() else D1();
  D1():
    deopt 4 [x4, i1];
  D2():
    deopt 7 [file1];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    i2 = force? i1;
    __ = ldf `[[` in base;
    r2 = dyn __(x4, i2);
    goto L1(r2);
  L9():
    file2 = force? file1;
    checkMissing(file2);
    ascii1 = ld ascii;
    check L10() else D3();
  D3():
    deopt 9 [ascii1];
  L10():
    ascii2 = force? ascii1;
    checkMissing(ascii2);
    compress1 = ld compress;
    check L11() else D4();
  D4():
    deopt 11 [compress1];
  L11():
    compress2 = force? compress1;
    checkMissing(compress2);
    hook1 = ld hook;
    check L12() else D5();
  D5():
    deopt 13 [hook1];
  L12():
    hook2 = force? hook1;
    checkMissing(hook2);
    lazyLoadDBinsertValue = ldf lazyLoadDBinsertValue in base;
    r3 = dyn lazyLoadDBinsertValue(dx1, file2, ascii2, compress2, hook2);
    check L13() else D6();
  D6():
    deopt 16 [r3];
  L13():
    goto L0(r3);
  }
}
fun inner3704037171(n, e, file, ascii, compress, hook) {
  (reg n:*, reg e:*, reg file:*, reg ascii:*, reg compress:*, reg hook:*) -+> V { var n:*, var e:*, var file:*, var ascii:*, var compress:*, var hook:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg e1:*, reg e2:V, reg getVarsFromFrame:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg file1:*, reg file2:V, reg ascii1:*, reg ascii2:V, reg compress1:*, reg compress2:V, reg hook1:*, reg hook2:V, reg lazyLoadDBinsertValue:cls, reg r6:V |
    mkenv;
    st n = n;
    st e = e;
    st file = file;
    st ascii = ascii;
    st compress = compress;
    st hook = hook;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    st x = r1;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L3():
    n1 = ld n;
    check L5() else D0();
  L4():
    r = dyn base(<lang getVarsFromFrame(n, e, FALSE)>);
    goto L0(r);
  D0():
    deopt 2 [n1];
  L1(r4):
    popenv;
    return r4;
  L5():
    n2 = force? n1;
    checkMissing(n2);
    e1 = ld e;
    check L6() else D1();
  L8():
    x = ld x;
    check L10() else D3();
  L9():
    r3 = dyn base1(<lang lazyLoadDBinsertValue(`[[`(x, 1), file, ascii, compress, hook)>);
    goto L1(r3);
  D1():
    deopt 4 [e1];
  D3():
    deopt 12 [x];
  L6():
    e2 = force? e1;
    checkMissing(e2);
    getVarsFromFrame = ldf getVarsFromFrame in base;
    r2 = dyn getVarsFromFrame(n2, e2, FALSE);
    check L7() else D2();
  L10():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L11() else L12(x1);
  D2():
    deopt 8 [r2];
  L2(dx1):
    file1 = ld file;
    check L14() else D4();
  L7():
    goto L0(r2);
  L11():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(x3):
    __ = ldf `[[` in base;
    r5 = dyn __(x3, 1);
    goto L2(r5);
  D4():
    deopt 17 [file1];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L14():
    file2 = force? file1;
    checkMissing(file2);
    ascii1 = ld ascii;
    check L15() else D5();
  D5():
    deopt 19 [ascii1];
  L15():
    ascii2 = force? ascii1;
    checkMissing(ascii2);
    compress1 = ld compress;
    check L16() else D6();
  D6():
    deopt 21 [compress1];
  L16():
    compress2 = force? compress1;
    checkMissing(compress2);
    hook1 = ld hook;
    check L17() else D7();
  D7():
    deopt 23 [hook1];
  L17():
    hook2 = force? hook1;
    checkMissing(hook2);
    lazyLoadDBinsertValue = ldf lazyLoadDBinsertValue in base;
    r6 = dyn lazyLoadDBinsertValue(dx1, file2, ascii2, compress2, hook2);
    check L18() else D8();
  D8():
    deopt 26 [r6];
  L18():
    goto L1(r6);
  }
}
fun inner1468740107(e, bindings, lazy) {
  (reg e:*, reg bindings:*, reg lazy:*) -+> V { var e:*, var bindings:*, var lazy:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg bindings1:*, reg bindings2:V, reg names:cls, reg r2:V, reg intersect:cls, reg bnames:*, reg bnames1:V, reg p:p(V +), reg lazy1:*, reg lazy2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg lnames:*, reg lnames1:V, reg length:cls, reg r8:V, reg c:L, reg setdiff:cls, reg bnames2:*, reg bnames3:V, reg p2:p(V +), reg lazy3:*, reg lazy4:V, reg p3:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg bindings3:*, reg bindings4:V, reg c1:L, reg bindings6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg enames:*, reg enames1:V, reg __:cls, reg r14:V, reg parent_env:cls, reg e1:*, reg e2:V, reg p4:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg e3:*, reg e4:V, reg attributes:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg e5:*, reg e6:V, reg isS4:cls, reg r22:V, reg environmentIsLocked:cls, reg e7:*, reg e8:V, reg p5:p(V +), reg r24:V, reg list:cls, reg r25:V, reg lazyLoadDBinsertValue:cls, reg edata:*, reg edata1:V, reg p6:p(V +), reg datafile:*, reg datafile1:V, reg p7:p(V +), reg ascii:*, reg ascii1:V, reg p8:p(V +), reg compress:*, reg compress1:V, reg p9:p(V +), reg envhook:*, reg envhook1:V, reg p10:p(V +), reg r31:V, reg lapply:cls, reg lnames2:*, reg lnames3:V, reg p11:p(V +), reg r33:cls, reg p12:p(V +), reg r35:V, reg lnames4:*, reg lnames5:V, reg l:*, reg names__:cls, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg ekey:*, reg ekey1:V, reg lkeys:*, reg lkeys1:V, reg list1:cls, reg r39:V |
    mkenv;
    st e = e;
    st bindings = bindings;
    st lazy = lazy;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st bnames = r1;
    intersect = ldf intersect;
    check L12() else D2();
  L8():
    bindings1 = ld bindings;
    check L10() else D0();
  L9():
    r = dyn base(<sym bindings>);
    goto L0(r);
  D0():
    deopt 2 [bindings1];
  D2():
    deopt 8 [];
  L10():
    bindings2 = force? bindings1;
    checkMissing(bindings2);
    names = ldf names in base;
    r2 = dyn names(bindings2);
    check L11() else D1();
  L12():
    p = prom<V +>{
      bnames = ld bnames;
      bnames1 = force? bnames;
      checkMissing(bnames1);
      return bnames1;
    };
    p1 = prom<V +>{
      lazy1 = ld lazy;
      lazy2 = force? lazy1;
      checkMissing(lazy2);
      return lazy2;
    };
    r5 = dyn intersect(p, p1);
    check L13() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 11 [r5];
  L11():
    goto L0(r2);
  L13():
    st lnames = r5;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L1(r7):
    c = `as.logical`(r7);
    if c then L18() else L2();
  L14():
    lnames = ld lnames;
    check L16() else D4();
  L15():
    r6 = dyn base1(<sym lnames>);
    goto L1(r6);
  D4():
    deopt 15 [lnames];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L16():
    lnames1 = force? lnames;
    checkMissing(lnames1);
    length = ldf length in base;
    r8 = dyn length(lnames1);
    check L17() else D5();
  L18():
    setdiff = ldf setdiff;
    check L19() else D6();
  D5():
    deopt 18 [r8];
  D6():
    deopt 20 [];
  L17():
    goto L1(r8);
  L19():
    p2 = prom<V +>{
      bnames2 = ld bnames;
      bnames3 = force? bnames2;
      checkMissing(bnames3);
      return bnames3;
    };
    p3 = prom<V +>{
      lazy3 = ld lazy;
      lazy4 = force? lazy3;
      checkMissing(lazy4);
      return lazy4;
    };
    r11 = dyn setdiff(p2, p3);
    check L20() else D7();
  D7():
    deopt 23 [r11];
  L20():
    st enames = r11;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L3(r13):
    st edata = r13;
    lazyLoadDBinsertValue = ldf lazyLoadDBinsertValue;
    check L41() else D19();
  L21():
    bindings3 = ld bindings;
    check L23() else D8();
  L22():
    r12 = dyn base2[bindings, enclos, attributes, isS4, locked](<lang `[`(bindings, enames)>, <lang parent.env(e)>, <lang attributes(e)>, <lang isS4(e)>, <lang environmentIsLocked(e)>);
    goto L3(r12);
  D8():
    deopt 27 [bindings3];
  D19():
    deopt 61 [];
  L23():
    bindings4 = force? bindings3;
    checkMissing(bindings4);
    c1 = `is.object`(bindings4);
    if c1 then L24() else L25(bindings4);
  L41():
    p6 = prom<V +>{
      edata = ld edata;
      edata1 = force? edata;
      checkMissing(edata1);
      return edata1;
    };
    p7 = prom<V +>{
      datafile = ld datafile;
      datafile1 = force? datafile;
      checkMissing(datafile1);
      return datafile1;
    };
    p8 = prom<V +>{
      ascii = ld ascii;
      ascii1 = force? ascii;
      checkMissing(ascii1);
      return ascii1;
    };
    p9 = prom<V +>{
      compress = ld compress;
      compress1 = force? compress;
      checkMissing(compress1);
      return compress1;
    };
    p10 = prom<V +>{
      envhook = ld envhook;
      envhook1 = force? envhook;
      checkMissing(envhook1);
      return envhook1;
    };
    r31 = dyn lazyLoadDBinsertValue(p6, p7, p8, p9, p10);
    check L42() else D20();
  D20():
    deopt 67 [r31];
  L4(dx1):
    parent_env = ldf `parent.env`;
    check L28() else D10();
  L24():
    dr = tryDispatchBuiltin.1("[", bindings4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(bindings6):
    enames = ld enames;
    check L27() else D9();
  L42():
    st ekey = r31;
    lapply = ldf lapply;
    check L43() else D21();
  D9():
    deopt 29 [bindings6, enames];
  D10():
    deopt 34 [];
  D21():
    deopt 70 [];
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L27():
    enames1 = force? enames;
    __ = ldf `[` in base;
    r14 = dyn __(bindings6, enames1);
    goto L4(r14);
  L28():
    p4 = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r16 = dyn parent_env(p4);
    check L29() else D11();
  L43():
    p11 = prom<V +>{
      lnames2 = ld lnames;
      lnames3 = force? lnames2;
      checkMissing(lnames3);
      return lnames3;
    };
    p12 = prom<V +>{
      r33 = clos inner2750389422;
      return r33;
    };
    r35 = dyn lapply(p11, p12);
    check L44() else D22();
  D11():
    deopt 36 [r16];
  D22():
    deopt 73 [r35];
  L29():
    sym3 = ldf attributes;
    base3 = ldf attributes in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L44():
    st lkeys = r35;
    lnames4 = ld lnames;
    check L45() else D23();
  D23():
    deopt 75 [lnames4];
  L5(r18):
    sym4 = ldf isS4;
    base4 = ldf isS4 in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L30():
    e3 = ld e;
    check L32() else D12();
  L31():
    r17 = dyn base3(<sym e>);
    goto L5(r17);
  L45():
    lnames5 = force? lnames4;
    checkMissing(lnames5);
    l = ld lkeys;
    names__ = ldf `names<-`;
    check L46() else D24();
  D12():
    deopt 40 [e3];
  D24():
    deopt 78 [lnames5, l, lnames5];
  L6(r21):
    environmentIsLocked = ldf environmentIsLocked;
    check L38() else D16();
  L32():
    e4 = force? e3;
    checkMissing(e4);
    attributes = ldf attributes in base;
    r19 = dyn attributes(e4);
    check L33() else D13();
  L34():
    e5 = ld e;
    check L36() else D14();
  L35():
    r20 = dyn base4(<sym e>);
    goto L6(r20);
  L46():
    r36 = dyn names__(l, NULL, lnames5);
    check L47() else D25();
  D13():
    deopt 43 [r19];
  D14():
    deopt 47 [e5];
  D16():
    deopt 53 [];
  D25():
    deopt 80 [lnames5, r36];
  L33():
    goto L5(r19);
  L36():
    e6 = force? e5;
    checkMissing(e6);
    isS4 = ldf isS4 in base;
    r22 = dyn isS4(e6);
    check L37() else D15();
  L38():
    p5 = prom<V +>{
      e7 = ld e;
      e8 = force? e7;
      checkMissing(e8);
      return e8;
    };
    r24 = dyn environmentIsLocked(p5);
    check L39() else D17();
  L47():
    st lkeys = r36;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  D15():
    deopt 50 [r22];
  D17():
    deopt 55 [r24];
  L7(r38):
    popenv;
    return r38;
  L37():
    goto L6(r22);
  L39():
    list = ldf list in base;
    r25 = dyn list(dx1, r16, r18, r21, r24);
    check L40() else D18();
  L48():
    ekey = ld ekey;
    check L50() else D26();
  L49():
    r37 = dyn base5[eagerKey, lazyKeys](<sym ekey>, <sym lkeys>);
    goto L7(r37);
  D18():
    deopt 58 [r25];
  D26():
    deopt 84 [ekey];
  L40():
    goto L3(r25);
  L50():
    ekey1 = force? ekey;
    checkMissing(ekey1);
    lkeys = ld lkeys;
    check L51() else D27();
  D27():
    deopt 87 [lkeys];
  L51():
    lkeys1 = force? lkeys;
    checkMissing(lkeys1);
    list1 = ldf list in base;
    r39 = dyn list1(ekey1, lkeys1);
    check L52() else D28();
  D28():
    deopt 91 [r39];
  L52():
    goto L7(r39);
  }
}
fun inner2750389422(varname) {
  (reg varname:*) -+> V { var varname:*, reg lazyLoadDBinsertValue:cls, reg bindings:*, reg bindings1:V, reg c:L, reg bindings3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg varname1:*, reg varname2:V, reg __:cls, reg r:V, reg p:p(V +), reg datafile:*, reg datafile1:V, reg p1:p(V +), reg ascii:*, reg ascii1:V, reg p2:p(V +), reg compress:*, reg compress1:V, reg p3:p(V +), reg envhook:*, reg envhook1:V, reg p4:p(V +), reg r6:V |
    mkenv;
    st varname = varname;
    lazyLoadDBinsertValue = ldf lazyLoadDBinsertValue;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      bindings = ld bindings;
      bindings1 = force? bindings;
      checkMissing(bindings1);
      c = `is.object`(bindings1);
      if c then L1() else L2(bindings1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", bindings1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(bindings3):
      varname1 = ld varname;
      varname2 = force? varname1;
      __ = ldf `[[` in base;
      r = dyn __(bindings3, varname2);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      datafile = ld datafile;
      datafile1 = force? datafile;
      checkMissing(datafile1);
      return datafile1;
    };
    p2 = prom<V +>{
      ascii = ld ascii;
      ascii1 = force? ascii;
      checkMissing(ascii1);
      return ascii1;
    };
    p3 = prom<V +>{
      compress = ld compress;
      compress1 = force? compress;
      checkMissing(compress1);
      return compress1;
    };
    p4 = prom<V +>{
      envhook = ld envhook;
      envhook1 = force? envhook;
      checkMissing(envhook1);
      return envhook1;
    };
    r6 = dyn lazyLoadDBinsertValue(p, p1, p2, p3, p4);
    check L1() else D1();
  D1():
    deopt 7 [r6];
  L1():
    popenv;
    return r6;
  }
}