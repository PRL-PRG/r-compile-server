fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner506204425;
    st `.find_calls_in_package_code` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner506204425(dir, predicate, recursive, `.worker`, which) {
  (reg dir:*, reg predicate:*, reg recursive:*, reg _worker:*, reg which:*) -+> V { var dir:*, var predicate:*, reg predicate_isMissing:L, reg predicate_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var `.worker`:*, reg _worker_isMissing:L, reg _worker_orDefault:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r3:V, reg file_exists:cls, reg dfile:*, reg dfile1:V, reg p2:p(V +), reg r5:V, reg c:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p3:p(V +), reg r7:V, reg c1:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg dx2:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg _worker1:*, reg _worker2:V, reg c2:V, reg c3:L, reg r13:cls, reg match_arg:cls, reg which1:*, reg which2:V, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg c4:cls, reg r18:V, reg p5:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg character:cls, reg r23:V, reg _in_:cls, reg which3:*, reg which4:V, reg p6:p(V +), reg r25:V, reg c5:L, reg list_files_with_type:cls, reg file_path1:cls, reg dir5:*, reg dir6:V, reg p7:p(V +), reg r27:V, reg p8:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg c6:cls, reg r31:V, reg p9:p(V +), reg r33:V, reg r34:V, reg _in_1:cls, reg which5:*, reg which6:V, reg p10:p(V +), reg r36:V, reg c7:L, reg c9:V, reg dir_exists:cls, reg file_path2:cls, reg dir7:*, reg dir8:V, reg p11:p(V +), reg r38:V, reg p12:p(V +), reg r40:V, reg c10:L, reg c11:V, reg c13:L, reg c15:V, reg dir_exists1:cls, reg file_path3:cls, reg dir9:*, reg dir10:V, reg p13:p(V +), reg r42:V, reg p14:p(V +), reg r44:V, reg c16:L, reg c17:V, reg c19:L, reg list_files_with_type1:cls, reg fp:*, reg fp1:V, reg p15:p(V +), reg r46:V, reg r47:V, reg _in_2:cls, reg which7:*, reg which8:V, reg p16:p(V +), reg r49:V, reg c20:L, reg c22:V, reg dir_exists2:cls, reg file_path4:cls, reg dir11:*, reg dir12:V, reg p17:p(V +), reg r51:V, reg p18:p(V +), reg r53:V, reg c23:L, reg c24:V, reg c26:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:V, reg list_files:cls, reg fp2:*, reg fp3:V, reg p19:p(V +), reg r57:V, reg dir_exists3:cls, reg file_path5:cls, reg fp4:*, reg fp5:V, reg p20:p(V +), reg r59:V, reg p21:p(V +), reg r61:V, reg c27:L, reg list_files1:cls, reg fp6:*, reg fp7:V, reg p22:p(V +), reg r63:V, reg r64:V, reg c28:cls, reg r65:V, reg r66:V, reg _in_3:cls, reg which9:*, reg which10:V, reg p23:p(V +), reg r68:V, reg c29:L, reg c31:V, reg file_exists1:cls, reg file_path6:cls, reg dir13:*, reg dir14:V, reg p24:p(V +), reg r70:V, reg p25:p(V +), reg r72:V, reg c32:L, reg c33:V, reg c35:L, reg fp8:*, reg fp9:V, reg fp10:V, reg _in_4:cls, reg which11:*, reg which12:V, reg p26:p(V +), reg r74:V, reg c36:L, reg c38:V, reg file_exists2:cls, reg file_path7:cls, reg dir15:*, reg dir16:V, reg p27:p(V +), reg r76:V, reg p28:p(V +), reg r78:V, reg c39:L, reg c40:V, reg c42:L, reg fp11:*, reg fp12:V, reg fp13:V, reg c43:cls, reg r79:V, reg lapply:cls, reg code_files:*, reg code_files1:V, reg p29:p(V +), reg _worker3:*, reg _worker4:V, reg p30:p(V +), reg encoding:*, reg encoding1:V, reg p31:p(V +), reg r83:V, reg _file_path_relative_to_dir:cls, reg code_files2:*, reg code_files3:V, reg p32:p(V +), reg dirname:cls, reg dir17:*, reg dir18:V, reg p33:p(V +), reg r86:V, reg p34:p(V +), reg r88:V, reg l:*, reg names__:cls, reg r89:V, reg calls:*, reg calls1:V |
    mkenv;
    st dir = dir;
    predicate_isMissing = missing.0(predicate);
    if predicate_isMissing then L0(NULL) else L0(predicate);
  L0(predicate_orDefault):
    st predicate = predicate_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L1(FALSE) else L1(recursive);
  L1(recursive_orDefault):
    st recursive = recursive_orDefault;
    _worker_isMissing = missing.0(_worker);
    if _worker_isMissing then L2(NULL) else L2(_worker);
  L2(_worker_orDefault):
    st `.worker` = _worker_orDefault;
    which_isMissing = missing.0(which);
    if which_isMissing then L3("code") else L3(which);
  L3(which_orDefault):
    st which = which_orDefault;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L29() else D0();
  D0():
    deopt 1 [];
  L29():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L30() else D1();
  D1():
    deopt 3 [r1];
  L30():
    st dir = r1;
    file_path = ldf `file.path`;
    check L31() else D2();
  D2():
    deopt 6 [];
  L31():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r3 = dyn file_path(p1, "DESCRIPTION");
    check L32() else D3();
  D3():
    deopt 9 [r3];
  L32():
    st dfile = r3;
    file_exists = ldf `file.exists`;
    check L33() else D4();
  D4():
    deopt 12 [];
  L33():
    p2 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r5 = dyn file_exists(p2);
    check L34() else D5();
  D5():
    deopt 14 [r5];
  L34():
    c = `as.logical`(r5);
    if c then L35() else L4();
  L4():
    goto L6(NA_LGL);
  L6(dx2):
    st encoding = dx2;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L42() else L43();
  L35():
    _read_description = ldf `.read_description`;
    check L36() else D6();
  D6():
    deopt 16 [];
  L7(r12):
    c3 = `as.logical`(r12);
    if c3 then L45() else L8();
  L36():
    p3 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r7 = dyn _read_description(p3);
    check L37() else D7();
  L42():
    _worker1 = ld `.worker`;
    check L44() else D8();
  L43():
    r11 = dyn base(<sym .worker>);
    goto L7(r11);
  D7():
    deopt 18 [r7];
  D8():
    deopt 26 [_worker1];
  L8():
    goto L9();
  L9():
    match_arg = ldf `match.arg`;
    check L47() else D9();
  L37():
    c1 = `is.object`(r7);
    if c1 then L38() else L39(r7);
  L44():
    _worker2 = force? _worker1;
    checkMissing(_worker2);
    c2 = `==`(_worker2, NULL);
    goto L7(c2);
  L45():
    r13 = clos inner808620451;
    st `.worker` = r13;
    goto L9();
  D9():
    deopt 35 [];
  L5(dx1):
    goto L6(dx1);
  L38():
    dr = tryDispatchBuiltin.1("[", r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(dr);
  L39(r9):
    __ = ldf `[` in base;
    r10 = dyn __(r9, "Encoding");
    goto L5(r10);
  L47():
    p4 = prom<V +>{
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      return which2;
    };
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c4 = ldf c in base;
      r18 = dyn c4("code", "vignettes", "tests", "NAMESPACE", "CITATION");
      goto L0(r18);
    L2():
      r16 = dyn base1("code", "vignettes", "tests", "NAMESPACE", "CITATION");
      goto L0(r16);
    };
    r20 = dyn match_arg[, , `several.ok`](p4, p5, TRUE);
    check L48() else D10();
  D10():
    deopt 40 [r20];
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L48():
    st which = r20;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L10(r22):
    st code_files = r22;
    lapply = ldf lapply;
    check L111() else D47();
  L49():
    character = ldf character;
    check L51() else D11();
  L50():
    r21 = dyn base2(<lang character()>, <lang if(`%in%`("code", which), list_files_with_type(file.path(dir, "R"), "code", OS_subdirs=c("unix", "windows")))>, <lang if(`&&`(`&&`(`(`(`%in%`("vignettes", which)), dir.exists(file.path(dir, "vignettes"))), dir.exists(`<-`(fp, file.path(dir, "inst", "doc")))), list_files_with_type(fp, "code"))>, <lang if(`&&`(`(`(`%in%`("tests", which)), dir.exists(`<-`(fp, file.path(dir, "tests")))), c(list.files(fp, pattern="\\.[rR]$", full.names=TRUE), if(dir.exists(`<-`(fp, file.path(fp, "testthat"))), list.files(fp, pattern="\\.[rR]$", full.names=TRUE))))>, <lang if(`&&`(`(`(`%in%`("NAMESPACE", which)), file.exists(`<-`(fp, file.path(dir, "NAMESPACE")))), fp)>, <lang if(`&&`(`(`(`%in%`("CITATION", which)), file.exists(`<-`(fp, file.path(dir, "inst", "CITATION")))), fp)>);
    goto L10(r21);
  D11():
    deopt 45 [];
  D47():
    deopt 153 [];
  L51():
    r23 = dyn character();
    check L52() else D12();
  L111():
    p29 = prom<V +>{
      code_files = ld code_files;
      code_files1 = force? code_files;
      checkMissing(code_files1);
      return code_files1;
    };
    p30 = prom<V +>{
      _worker3 = ld `.worker`;
      _worker4 = force? _worker3;
      checkMissing(_worker4);
      return _worker4;
    };
    p31 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    r83 = dyn lapply(p29, p30, p31);
    check L112() else D48();
  D12():
    deopt 46 [r23];
  D48():
    deopt 157 [r83];
  L52():
    _in_ = ldf `%in%`;
    check L53() else D13();
  L112():
    st calls = r83;
    _file_path_relative_to_dir = ldf `.file_path_relative_to_dir`;
    check L113() else D49();
  D13():
    deopt 48 [];
  D49():
    deopt 160 [];
  L53():
    p6 = prom<V +>{
      which3 = ld which;
      which4 = force? which3;
      checkMissing(which4);
      return which4;
    };
    r25 = dyn _in_("code", p6);
    check L54() else D14();
  L113():
    p32 = prom<V +>{
      code_files2 = ld code_files;
      code_files3 = force? code_files2;
      checkMissing(code_files3);
      return code_files3;
    };
    p34 = prom<V +>{
      dirname = ldf dirname;
      p33 = prom<V +>{
        dir17 = ld dir;
        dir18 = force? dir17;
        checkMissing(dir18);
        return dir18;
      };
      r86 = dyn dirname(p33);
      return r86;
    };
    r88 = dyn _file_path_relative_to_dir(p32, p34);
    check L114() else D50();
  D14():
    deopt 51 [r25];
  D50():
    deopt 163 [r88];
  L54():
    c5 = `as.logical`(r25);
    if c5 then L55() else L11();
  L114():
    l = ld calls;
    names__ = ldf `names<-`;
    check L115() else D51();
  D51():
    deopt 165 [r88, l, r88];
  L11():
    goto L12(NULL);
  L12(r34):
    _in_1 = ldf `%in%`;
    check L59() else D17();
  L55():
    list_files_with_type = ldf list_files_with_type;
    check L56() else D15();
  L115():
    r89 = dyn names__(l, NULL, r88);
    check L116() else D52();
  D15():
    deopt 53 [];
  D17():
    deopt 62 [];
  D52():
    deopt 167 [r88, r89];
  L56():
    p8 = prom<V +>{
      file_path1 = ldf `file.path`;
      p7 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r27 = dyn file_path1(p7, "R");
      return r27;
    };
    p9 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      c6 = ldf c in base;
      r31 = dyn c6("unix", "windows");
      goto L0(r31);
    L2():
      r29 = dyn base3("unix", "windows");
      goto L0(r29);
    };
    r33 = dyn list_files_with_type[, , OS_subdirs](p8, "code", p9);
    check L57() else D16();
  L59():
    p10 = prom<V +>{
      which5 = ld which;
      which6 = force? which5;
      checkMissing(which6);
      return which6;
    };
    r36 = dyn _in_1("vignettes", p10);
    check L60() else D18();
  L116():
    st calls = r89;
    calls = ld calls;
    check L117() else D53();
  D16():
    deopt 58 [r33];
  D18():
    deopt 65 [r36];
  D53():
    deopt 169 [calls];
  L57():
    goto L12(r33);
  L60():
    c7 = `as.logical`(r36);
    if c7 then L61() else L13(c7);
  L117():
    calls1 = force? calls;
    checkMissing(calls1);
    popenv;
    return calls1;
  L13(c9):
    c13 = `as.logical`(c9);
    if c13 then L65() else L14(c13);
  L61():
    dir_exists = ldf `dir.exists`;
    check L62() else D19();
  D19():
    deopt 67 [c7];
  L14(c15):
    c19 = `as.logical`(c15);
    if c19 then L69() else L15();
  L62():
    p12 = prom<V +>{
      file_path2 = ldf `file.path`;
      p11 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r38 = dyn file_path2(p11, "vignettes");
      return r38;
    };
    r40 = dyn dir_exists(p12);
    check L63() else D20();
  L65():
    dir_exists1 = ldf `dir.exists`;
    check L66() else D21();
  D20():
    deopt 69 [c7, r40];
  D21():
    deopt 72 [c13];
  L15():
    goto L16(NULL);
  L16(r47):
    _in_2 = ldf `%in%`;
    check L73() else D25();
  L63():
    c10 = `as.logical`(r40);
    c11 = `&&`(c7, c10);
    goto L13(c11);
  L66():
    p14 = prom<V +>{
      file_path3 = ldf `file.path`;
      p13 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r42 = dyn file_path3(p13, "inst", "doc");
      st fp = r42;
      invisible.0();
      return r42;
    };
    r44 = dyn dir_exists1(p14);
    check L67() else D22();
  L69():
    list_files_with_type1 = ldf list_files_with_type;
    check L70() else D23();
  D22():
    deopt 74 [c13, r44];
  D23():
    deopt 77 [];
  D25():
    deopt 84 [];
  L67():
    c16 = `as.logical`(r44);
    c17 = `&&`(c13, c16);
    goto L14(c17);
  L70():
    p15 = prom<V +>{
      fp = ld fp;
      fp1 = force? fp;
      checkMissing(fp1);
      return fp1;
    };
    r46 = dyn list_files_with_type1(p15, "code");
    check L71() else D24();
  L73():
    p16 = prom<V +>{
      which7 = ld which;
      which8 = force? which7;
      checkMissing(which8);
      return which8;
    };
    r49 = dyn _in_2("tests", p16);
    check L74() else D26();
  D24():
    deopt 80 [r46];
  D26():
    deopt 87 [r49];
  L71():
    goto L16(r46);
  L74():
    c20 = `as.logical`(r49);
    if c20 then L75() else L17(c20);
  L17(c22):
    c26 = `as.logical`(c22);
    if c26 then L79() else L18();
  L75():
    dir_exists2 = ldf `dir.exists`;
    check L76() else D27();
  D27():
    deopt 89 [c20];
  L18():
    goto L22(NULL);
  L22(r66):
    _in_3 = ldf `%in%`;
    check L92() else D36();
  L76():
    p18 = prom<V +>{
      file_path4 = ldf `file.path`;
      p17 = prom<V +>{
        dir11 = ld dir;
        dir12 = force? dir11;
        checkMissing(dir12);
        return dir12;
      };
      r51 = dyn file_path4(p17, "tests");
      st fp = r51;
      invisible.0();
      return r51;
    };
    r53 = dyn dir_exists2(p18);
    check L77() else D28();
  L79():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L80() else L81();
  D28():
    deopt 91 [c20, r53];
  D36():
    deopt 122 [];
  L19(r55):
    goto L22(r55);
  L77():
    c23 = `as.logical`(r53);
    c24 = `&&`(c20, c23);
    goto L17(c24);
  L80():
    list_files = ldf `list.files`;
    check L82() else D29();
  L81():
    r54 = dyn base4(<lang list.files(fp, pattern="\\.[rR]$", full.names=TRUE)>, <lang if(dir.exists(`<-`(fp, file.path(fp, "testthat"))), list.files(fp, pattern="\\.[rR]$", full.names=TRUE))>);
    goto L19(r54);
  L92():
    p23 = prom<V +>{
      which9 = ld which;
      which10 = force? which9;
      checkMissing(which10);
      return which10;
    };
    r68 = dyn _in_3("NAMESPACE", p23);
    check L93() else D37();
  D29():
    deopt 96 [];
  D37():
    deopt 125 [r68];
  L82():
    p19 = prom<V +>{
      fp2 = ld fp;
      fp3 = force? fp2;
      checkMissing(fp3);
      return fp3;
    };
    r57 = dyn list_files[, pattern, `full.names`](p19, "\\.[rR]$", TRUE);
    check L83() else D30();
  L93():
    c29 = `as.logical`(r68);
    if c29 then L94() else L23(c29);
  D30():
    deopt 102 [r57];
  L23(c31):
    c35 = `as.logical`(c31);
    if c35 then L98() else L24();
  L83():
    dir_exists3 = ldf `dir.exists`;
    check L84() else D31();
  L94():
    file_exists1 = ldf `file.exists`;
    check L95() else D38();
  D31():
    deopt 104 [];
  D38():
    deopt 127 [c29];
  L24():
    goto L25(NULL);
  L25(fp10):
    _in_4 = ldf `%in%`;
    check L101() else D41();
  L84():
    p21 = prom<V +>{
      file_path5 = ldf `file.path`;
      p20 = prom<V +>{
        fp4 = ld fp;
        fp5 = force? fp4;
        checkMissing(fp5);
        return fp5;
      };
      r59 = dyn file_path5(p20, "testthat");
      st fp = r59;
      invisible.0();
      return r59;
    };
    r61 = dyn dir_exists3(p21);
    check L85() else D32();
  L95():
    p25 = prom<V +>{
      file_path6 = ldf `file.path`;
      p24 = prom<V +>{
        dir13 = ld dir;
        dir14 = force? dir13;
        checkMissing(dir14);
        return dir14;
      };
      r70 = dyn file_path6(p24, "NAMESPACE");
      st fp = r70;
      invisible.0();
      return r70;
    };
    r72 = dyn file_exists1(p25);
    check L96() else D39();
  L98():
    fp8 = ld fp;
    check L99() else D40();
  D32():
    deopt 106 [r61];
  D39():
    deopt 129 [c29, r72];
  D40():
    deopt 131 [fp8];
  D41():
    deopt 136 [];
  L85():
    c27 = `as.logical`(r61);
    if c27 then L86() else L20();
  L96():
    c32 = `as.logical`(r72);
    c33 = `&&`(c29, c32);
    goto L23(c33);
  L99():
    fp9 = force? fp8;
    checkMissing(fp9);
    goto L25(fp9);
  L101():
    p26 = prom<V +>{
      which11 = ld which;
      which12 = force? which11;
      checkMissing(which12);
      return which12;
    };
    r74 = dyn _in_4("CITATION", p26);
    check L102() else D42();
  D42():
    deopt 139 [r74];
  L20():
    goto L21(NULL);
  L21(r64):
    c28 = ldf c in base;
    r65 = dyn c28(r57, r64);
    check L90() else D35();
  L86():
    list_files1 = ldf `list.files`;
    check L87() else D33();
  L102():
    c36 = `as.logical`(r74);
    if c36 then L103() else L26(c36);
  D33():
    deopt 108 [];
  D35():
    deopt 118 [r65];
  L26(c38):
    c42 = `as.logical`(c38);
    if c42 then L107() else L27();
  L87():
    p22 = prom<V +>{
      fp6 = ld fp;
      fp7 = force? fp6;
      checkMissing(fp7);
      return fp7;
    };
    r63 = dyn list_files1[, pattern, `full.names`](p22, "\\.[rR]$", TRUE);
    check L88() else D34();
  L90():
    goto L19(r65);
  L103():
    file_exists2 = ldf `file.exists`;
    check L104() else D43();
  D34():
    deopt 114 [r63];
  D43():
    deopt 141 [c36];
  L27():
    goto L28(NULL);
  L28(fp13):
    c43 = ldf c in base;
    r79 = dyn c43(r23, r34, r47, r66, fp10, fp13);
    check L110() else D46();
  L88():
    goto L21(r63);
  L104():
    p28 = prom<V +>{
      file_path7 = ldf `file.path`;
      p27 = prom<V +>{
        dir15 = ld dir;
        dir16 = force? dir15;
        checkMissing(dir16);
        return dir16;
      };
      r76 = dyn file_path7(p27, "inst", "CITATION");
      st fp = r76;
      invisible.0();
      return r76;
    };
    r78 = dyn file_exists2(p28);
    check L105() else D44();
  L107():
    fp11 = ld fp;
    check L108() else D45();
  D44():
    deopt 143 [c36, r78];
  D45():
    deopt 145 [fp11];
  D46():
    deopt 150 [r79];
  L105():
    c39 = `as.logical`(r78);
    c40 = `&&`(c36, c39);
    goto L26(c40);
  L108():
    fp12 = force? fp11;
    checkMissing(fp12);
    goto L28(fp12);
  L110():
    goto L10(r79);
  }
}
fun inner808620451(file, encoding) {
  (reg file:*, reg encoding:*) -+> V { var file:*, var encoding:*, reg _find_calls_in_file:cls, reg file1:*, reg file2:V, reg p:p(V +), reg encoding1:*, reg encoding2:V, reg p1:p(V +), reg predicate:*, reg predicate1:V, reg p2:p(V +), reg recursive:*, reg recursive1:V, reg p3:p(V +), reg r4:V |
    mkenv;
    st file = file;
    st encoding = encoding;
    _find_calls_in_file = ldf `.find_calls_in_file`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p1 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    p2 = prom<V +>{
      predicate = ld predicate;
      predicate1 = force? predicate;
      checkMissing(predicate1);
      return predicate1;
    };
    p3 = prom<V +>{
      recursive = ld recursive;
      recursive1 = force? recursive;
      checkMissing(recursive1);
      return recursive1;
    };
    r4 = dyn _find_calls_in_file(p, p1, p2, p3);
    check L1() else D1();
  D1():
    deopt 6 [r4];
  L1():
    popenv;
    return r4;
  }
}