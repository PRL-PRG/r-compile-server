fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2417351884;
    st `.process_package_files_for_repository_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2417351884(files, type, fields, verbose, validate) {
  (reg files:*, reg type:*, reg fields:*, reg verbose:*, reg validate:*) -+> V { var files:*, var type:*, var fields:*, var verbose:*, var validate:*, reg validate_isMissing:L, reg validate_orDefault:*, reg normalizePath:cls, reg files1:*, reg files2:V, reg p:p(V +), reg r1:V, reg unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg _get_standard_repository_db_fields:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg fields1:*, reg fields2:V, reg c:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg basename:cls, reg files3:*, reg files4:V, reg p3:p(V +), reg r10:V, reg sapply:cls, reg strsplit:cls, reg filetbs:*, reg filetbs1:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg __:*, reg __1:V, reg p6:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg files5:*, reg files6:V, reg length:cls, reg r20:V, reg vector:cls, reg r21:V, reg filetbs2:*, reg filetbs3:V, reg l:*, reg names__:cls, reg r22:V, reg options:cls, reg p7:p(V +), reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg on_exit:cls, reg r27:V, reg verbose1:*, reg verbose2:V, reg c1:L, reg message:cls, reg r28:V, reg type3:*, reg type4:V, reg r30:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg files7:*, reg files8:V, reg r33:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg verbose3:*, reg verbose4:V, reg c4:L, reg message1:cls, reg paste0:cls, reg files9:*, reg files10:V, reg c5:L, reg files12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i7:*, reg i8:V, reg __2:cls, reg r34:V, reg p8:p(V +), reg r36:V, reg p9:p(V +), reg r38:V, reg i9:I, reg unz:cls, reg files13:*, reg files14:V, reg c6:L, reg files16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i10:*, reg i11:V, reg __3:cls, reg r40:V, reg p10:p(V +), reg file_path:cls, reg packages:*, reg packages1:V, reg c7:L, reg packages3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i12:*, reg i13:V, reg __4:cls, reg r42:V, reg p11:p(V +), reg r44:V, reg p12:p(V +), reg r46:V, reg tryCatch:cls, reg read_dcf:cls, reg con:*, reg con1:V, reg p13:p(V +), reg fields3:*, reg fields4:V, reg p14:p(V +), reg r49:V, reg c8:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __5:cls, reg r52:V, reg p15:p(V +), reg identity:*, reg identity1:V, reg p16:p(V +), reg r55:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r56:V, reg i16:I, reg r57:V, reg temp:*, reg temp1:V, reg inherits:cls, reg r58:V, reg c9:L, reg close:cls, reg con2:*, reg con3:V, reg p17:p(V +), reg r60:V, reg temp2:*, reg temp3:V, reg l2:*, reg c10:L, reg i22:I, reg temp5:V, reg l4:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i24:I, reg dx9:V, reg i25:*, reg i26:V, reg ____:cls, reg r62:V, reg close1:cls, reg con4:*, reg con5:V, reg p18:p(V +), reg r64:V, reg getwd:cls, reg r65:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r66:V, reg r67:V, reg cwd:*, reg cwd1:V, reg c11:V, reg c12:L, reg stop:cls, reg r68:V, reg tempfile:cls, reg r70:V, reg dir_create:cls, reg td:*, reg td1:V, reg p19:p(V +), reg r72:V, reg r73:V, reg c13:L, reg stop1:cls, reg td2:*, reg td3:V, reg p20:p(V +), reg r75:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r77:V, reg on_exit1:cls, reg r79:V, reg setwd:cls, reg td4:*, reg td5:V, reg p21:p(V +), reg r81:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg r83:V, reg files17:*, reg files18:V, reg r84:I, reg s1:V, reg l5:I, reg i28:I, reg i29:I, reg i30:I, reg c14:L, reg x1:V, reg verbose5:*, reg verbose6:V, reg c15:L, reg message2:cls, reg paste1:cls, reg files19:*, reg files20:V, reg c16:L, reg files22:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i35:*, reg i36:V, reg __6:cls, reg r85:V, reg p22:p(V +), reg r87:V, reg p23:p(V +), reg r89:V, reg i37:I, reg file_path1:cls, reg packages4:*, reg packages5:V, reg c17:L, reg packages7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg i38:*, reg i39:V, reg __7:cls, reg r91:V, reg p24:p(V +), reg r93:V, reg try:cls, reg __8:cls, reg r94:V, reg r95:cls, reg files23:*, reg files24:V, reg c18:L, reg files26:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i40:*, reg i41:V, reg __9:cls, reg r96:V, reg p25:p(V +), reg p26:*, reg p27:V, reg p28:p(V +), reg r99:V, reg p29:p(V +), reg r101:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r102:V, reg i44:I, reg r103:V, reg temp8:*, reg temp9:V, reg inherits1:cls, reg r104:V, reg r105:V, reg c19:L, reg tryCatch1:cls, reg read_dcf1:cls, reg p30:*, reg p31:V, reg p32:p(V +), reg fields5:*, reg fields6:V, reg p33:p(V +), reg r108:V, reg c20:L, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __10:cls, reg r111:V, reg p34:p(V +), reg identity2:*, reg identity3:V, reg p35:p(V +), reg r114:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r115:V, reg i49:I, reg r116:V, reg temp10:*, reg temp11:V, reg inherits2:cls, reg r117:V, reg r118:V, reg c21:L, reg validate1:*, reg validate2:V, reg c22:L, reg _check_package_description:cls, reg temp12:*, reg temp13:V, reg c23:L, reg temp15:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r119:V, reg temp18:V, reg r120:V, reg temp19:*, reg temp20:V, reg is_na:cls, reg r121:V, reg r122:V, reg __11:cls, reg r123:V, reg p36:p(V +), reg r125:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r126:V, reg i56:I, reg r127:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r128:V, reg i59:I, reg r129:V, reg lengths:cls, reg ok:*, reg ok1:V, reg p37:p(V +), reg r131:V, reg as_integer:cls, reg r132:V, reg r133:V, reg any:cls, reg r134:V, reg c24:L, reg message3:cls, reg paste2:cls, reg gettextf:cls, reg sQuote:cls, reg basename1:cls, reg dirname:cls, reg p38:*, reg p39:V, reg p40:p(V +), reg r136:V, reg p41:p(V +), reg r138:V, reg p42:p(V +), reg r140:V, reg p43:p(V +), reg r142:V, reg p44:p(V +), reg paste3:cls, reg format:cls, reg ok2:*, reg ok3:V, reg p45:p(V +), reg r145:V, reg p46:p(V +), reg r147:V, reg p47:p(V +), reg r149:V, reg p48:p(V +), reg r151:V, reg i64:I, reg _in_:cls, reg fields7:*, reg fields8:V, reg p49:p(V +), reg r155:V, reg c25:L, reg i66:I, reg c27:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r156:V, reg i69:I, reg c30:L, reg r157:V, reg temp21:*, reg temp22:V, reg c31:L, reg i71:I, reg c33:L, reg temp24:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i73:I, reg c35:L, reg dx21:V, reg __12:cls, reg r158:V, reg is_na1:cls, reg r159:V, reg c36:L, reg c37:V, reg c39:L, reg __13:cls, reg r160:V, reg r161:cls, reg files27:*, reg files28:V, reg c40:L, reg files30:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg i77:*, reg i78:V, reg __14:cls, reg r162:V, reg p50:p(V +), reg r164:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r165:V, reg i81:I, reg r166:V, reg l6:*, reg l7:V, reg file_path2:cls, reg packages8:*, reg packages9:V, reg c41:L, reg packages11:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg i82:*, reg i83:V, reg __15:cls, reg r167:V, reg p51:p(V +), reg r169:V, reg r170:V, reg any1:cls, reg r171:V, reg c42:L, reg i86:I, reg r172:S, reg l8:*, reg c43:L, reg i88:I, reg r174:S, reg l10:*, reg dr26:V, reg dc13:L, reg dx26:V, reg i90:I, reg r176:S, reg dx27:V, reg ___:cls, reg r177:V, reg i91:I, reg md5sum:cls, reg files31:*, reg files32:V, reg c44:L, reg files34:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg i92:*, reg i93:V, reg __16:cls, reg r179:V, reg p52:p(V +), reg r181:V, reg l11:*, reg c45:L, reg i95:I, reg r183:V, reg l13:*, reg dr30:V, reg dc15:L, reg dx30:V, reg i97:I, reg dx31:V, reg ___1:cls, reg r186:V, reg temp25:*, reg temp26:V, reg l14:*, reg c46:L, reg i99:I, reg temp28:V, reg l16:*, reg dr32:V, reg dc16:L, reg dx32:V, reg i101:I, reg temp30:V, reg dx33:V, reg i102:*, reg i103:V, reg ____1:cls, reg r187:V, reg i104:I, reg temp31:V, reg message4:cls, reg gettextf1:cls, reg sQuote1:cls, reg basename2:cls, reg dirname1:cls, reg p53:*, reg p54:V, reg p55:p(V +), reg r189:V, reg p56:p(V +), reg r191:V, reg p57:p(V +), reg r193:V, reg p58:p(V +), reg conditionMessage:cls, reg temp32:*, reg temp33:V, reg p59:p(V +), reg r196:V, reg p60:p(V +), reg r198:V, reg p61:p(V +), reg r200:V, reg i105:I, reg unlink:cls, reg packages12:*, reg packages13:V, reg c47:L, reg packages15:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg i106:*, reg i107:V, reg __17:cls, reg r201:V, reg p62:p(V +), reg r203:V, reg setwd1:cls, reg cwd2:*, reg cwd3:V, reg p63:p(V +), reg r205:V, reg verbose7:*, reg verbose8:V, reg c48:L, reg message5:cls, reg r206:V, reg db:*, reg db1:V |
    mkenv;
    st files = files;
    st type = type;
    st fields = fields;
    st verbose = verbose;
    validate_isMissing = missing.0(validate);
    if validate_isMissing then L0(FALSE) else L0(validate);
  L0(validate_orDefault):
    st validate = validate_orDefault;
    normalizePath = ldf normalizePath;
    check L53() else D0();
  D0():
    deopt 1 [];
  L53():
    p = prom<V +>{
      files1 = ld files;
      files2 = force? files1;
      checkMissing(files2);
      return files2;
    };
    r1 = dyn normalizePath[, mustWork](p, TRUE);
    check L54() else D1();
  D1():
    deopt 5 [r1];
  L54():
    st files = r1;
    unique = ldf unique;
    check L55() else D2();
  D2():
    deopt 8 [];
  L55():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      _get_standard_repository_db_fields = ldf `.get_standard_repository_db_fields`;
      p1 = prom<V +>{
        type1 = ld type;
        type2 = force? type1;
        checkMissing(type2);
        return type2;
      };
      r5 = dyn _get_standard_repository_db_fields(p1);
      fields1 = ld fields;
      fields2 = force? fields1;
      checkMissing(fields2);
      c = ldf c in base;
      r6 = dyn c(r5, fields2);
      goto L0(r6);
    L2():
      r2 = dyn base(<lang .get_standard_repository_db_fields(type)>, <sym fields>);
      goto L0(r2);
    };
    r8 = dyn unique(p2);
    check L56() else D3();
  D3():
    deopt 10 [r8];
  L56():
    st fields = r8;
    basename = ldf basename;
    check L57() else D4();
  D4():
    deopt 13 [];
  L57():
    p3 = prom<V +>{
      files3 = ld files;
      files4 = force? files3;
      checkMissing(files4);
      return files4;
    };
    r10 = dyn basename(p3);
    check L58() else D5();
  D5():
    deopt 15 [r10];
  L58():
    st filetbs = r10;
    sapply = ldf sapply;
    check L59() else D6();
  D6():
    deopt 18 [];
  L59():
    p5 = prom<V +>{
      strsplit = ldf strsplit;
      p4 = prom<V +>{
        filetbs = ld filetbs;
        filetbs1 = force? filetbs;
        checkMissing(filetbs1);
        return filetbs1;
      };
      r12 = dyn strsplit[, , fixed](p4, "_", TRUE);
      return r12;
    };
    p6 = prom<V +>{
      __ = ld `[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r15 = dyn sapply(p5, p6, 1);
    check L60() else D7();
  D7():
    deopt 22 [r15];
  L60():
    st packages = r15;
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L61() else L62();
  L1(r17):
    st db = r17;
    filetbs2 = ld filetbs;
    check L68() else D11();
  L61():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L63() else L64();
  L62():
    r16 = dyn base1[, mode](<lang length(files)>, "list");
    goto L1(r16);
  D11():
    deopt 36 [filetbs2];
  L2(r19):
    vector = ldf vector in base;
    r21 = dyn vector("list", r19);
    check L67() else D10();
  L63():
    files5 = ld files;
    check L65() else D8();
  L64():
    r18 = dyn base2(<sym files>);
    goto L2(r18);
  L68():
    filetbs3 = force? filetbs2;
    checkMissing(filetbs3);
    l = ld db;
    names__ = ldf `names<-`;
    check L69() else D12();
  D8():
    deopt 29 [files5];
  D10():
    deopt 34 [r21];
  D12():
    deopt 39 [filetbs3, l, filetbs3];
  L65():
    files6 = force? files5;
    checkMissing(files6);
    length = ldf length in base;
    r20 = dyn length(files6);
    check L66() else D9();
  L67():
    goto L1(r21);
  L69():
    r22 = dyn names__(l, NULL, filetbs3);
    check L70() else D13();
  D9():
    deopt 32 [r20];
  D13():
    deopt 41 [filetbs3, r22];
  L66():
    goto L2(r20);
  L70():
    st db = r22;
    options = ldf options;
    check L71() else D14();
  D14():
    deopt 44 [];
  L71():
    p7 = prom<V +>{
      return -1.0;
    };
    r24 = dyn options[warn](p7);
    check L72() else D15();
  D15():
    deopt 47 [r24];
  L72():
    st op = r24;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  L3():
    verbose1 = ld verbose;
    check L75() else D16();
  L73():
    on_exit = ldf `on.exit` in base;
    r27 = dyn on_exit(<lang options(op)>);
    goto L3();
  L74():
    r25 = dyn base3(<lang options(op)>);
    goto L3();
  D16():
    deopt 52 [verbose1];
  L75():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c1 = `as.logical`(verbose2);
    if c1 then L76() else L4();
  L4():
    goto L5();
  L5():
    type3 = ld type;
    check L80() else D19();
  L76():
    message = ldf message;
    check L77() else D17();
  D17():
    deopt 55 [];
  D19():
    deopt 60 [type3];
  L77():
    r28 = dyn message("Processing packages:");
    check L78() else D18();
  L80():
    type4 = force? type3;
    checkMissing(type4);
    r30 = `==`(type4, "win.binary");
    c2 = `as.logical`(r30);
    if c2 then L81() else L6();
  D18():
    deopt 57 [r28];
  L6():
    getwd = ldf getwd;
    check L112() else D36();
  L16():
    verbose7 = ld verbose;
    check L221() else D93();
  L78():
    goto L5();
  L81():
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L82() else L83();
  D36():
    deopt 120 [];
  D93():
    deopt 324 [verbose7];
  L7(r32):
    s = toForSeq(r32);
    l1 = length(s);
    i = 0;
    goto L8(i);
  L82():
    files7 = ld files;
    check L84() else D20();
  L83():
    r31 = dyn base4(<sym files>);
    goto L7(r31);
  L112():
    r65 = dyn getwd();
    check L113() else D37();
  L221():
    verbose8 = force? verbose7;
    checkMissing(verbose8);
    c48 = `as.logical`(verbose8);
    if c48 then L222() else L51();
  D20():
    deopt 65 [files7];
  D37():
    deopt 121 [r65];
  L8(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l1, i2);
    if c3 then L85() else L15();
  L51():
    goto L52();
  L52():
    db = ld db;
    check L226() else D96();
  L84():
    files8 = force? files7;
    checkMissing(files8);
    r33 = seq_along(files8);
    goto L7(r33);
  L113():
    st cwd = r65;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L114() else L115();
  L222():
    message5 = ldf message;
    check L223() else D94();
  D94():
    deopt 327 [];
  D96():
    deopt 332 [db];
  L15():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    verbose3 = ld verbose;
    check L86() else D21();
  L17(r67):
    c12 = `as.logical`(r67);
    if c12 then L117() else L18();
  L85():
    goto L16();
  L114():
    cwd = ld cwd;
    check L116() else D38();
  L115():
    r66 = dyn base6(<sym cwd>);
    goto L17(r66);
  L223():
    r206 = dyn message5("done");
    check L224() else D95();
  L226():
    db1 = force? db;
    checkMissing(db1);
    popenv;
    return db1;
  D21():
    deopt 68 [i2, verbose3];
  D38():
    deopt 124 [cwd];
  D95():
    deopt 329 [r206];
  L18():
    goto L19();
  L19():
    tempfile = ldf tempfile;
    check L121() else D41();
  L86():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c4 = `as.logical`(verbose4);
    if c4 then L87() else L9();
  L116():
    cwd1 = force? cwd;
    checkMissing(cwd1);
    c11 = `==`(cwd1, NULL);
    goto L17(c11);
  L117():
    stop = ldf stop;
    check L118() else D39();
  L224():
    goto L52();
  D39():
    deopt 128 [];
  D41():
    deopt 134 [];
  L9():
    goto L10(i2);
  L10(i9):
    unz = ldf unz;
    check L91() else D24();
  L87():
    message1 = ldf message;
    check L88() else D22();
  L118():
    r68 = dyn stop("current working directory cannot be ascertained");
    check L119() else D40();
  L121():
    r70 = dyn tempfile("PACKAGES");
    check L122() else D42();
  D22():
    deopt 71 [i2];
  D24():
    deopt 77 [i9];
  D40():
    deopt 130 [r68];
  D42():
    deopt 136 [r70];
  L88():
    p9 = prom<V +>{
      paste0 = ldf paste0;
      p8 = prom<V +>{
        files9 = ld files;
        files10 = force? files9;
        checkMissing(files10);
        c5 = `is.object`(files10);
        if c5 then L1() else L2(files10);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", files10);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(files12):
        i7 = ld i;
        i8 = force? i7;
        __2 = ldf `[` in base;
        r34 = dyn __2(files12, i8);
        goto L0(r34);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r36 = dyn paste0("  ", p8);
      return r36;
    };
    r38 = dyn message1(p9);
    check L89() else D23();
  L91():
    p10 = prom<V +>{
      files13 = ld files;
      files14 = force? files13;
      checkMissing(files14);
      c6 = `is.object`(files14);
      if c6 then L1() else L2(files14);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", files14);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(files16):
      i10 = ld i;
      i11 = force? i10;
      __3 = ldf `[` in base;
      r40 = dyn __3(files16, i11);
      goto L0(r40);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p12 = prom<V +>{
      file_path = ldf `file.path`;
      p11 = prom<V +>{
        packages = ld packages;
        packages1 = force? packages;
        checkMissing(packages1);
        c7 = `is.object`(packages1);
        if c7 then L1() else L2(packages1);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", packages1);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(packages3):
        i12 = ld i;
        i13 = force? i12;
        __4 = ldf `[` in base;
        r42 = dyn __4(packages3, i13);
        goto L0(r42);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r44 = dyn file_path(p11, "DESCRIPTION");
      return r44;
    };
    r46 = dyn unz(p10, p12);
    check L92() else D25();
  L119():
    goto L19();
  L122():
    st td = r70;
    dir_create = ldf `dir.create`;
    check L123() else D43();
  D23():
    deopt 73 [i2, r38];
  D25():
    deopt 80 [i9, r46];
  D43():
    deopt 139 [];
  L89():
    goto L10(i2);
  L92():
    st con = r46;
    tryCatch = ldf tryCatch;
    check L93() else D26();
  L123():
    p19 = prom<V +>{
      td = ld td;
      td1 = force? td;
      checkMissing(td1);
      return td1;
    };
    r72 = dyn dir_create(p19);
    check L124() else D44();
  D26():
    deopt 83 [i9];
  D44():
    deopt 141 [r72];
  L93():
    p15 = prom<V +>{
      read_dcf = ldf `read.dcf`;
      p13 = prom<V +>{
        con = ld con;
        con1 = force? con;
        checkMissing(con1);
        return con1;
      };
      p14 = prom<V +>{
        fields3 = ld fields;
        fields4 = force? fields3;
        checkMissing(fields4);
        return fields4;
      };
      r49 = dyn read_dcf[, fields](p13, p14);
      c8 = `is.object`(r49);
      if c8 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", r49);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r52 = dyn __5(r49, 1, <missing>);
      goto L0(r52);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p16 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r55 = dyn tryCatch[, error](p15, p16);
    check L94() else D27();
  L124():
    r73 = `!`(r72);
    c13 = `as.logical`(r73);
    if c13 then L125() else L20();
  D27():
    deopt 87 [i9, r55];
  L20():
    goto L21();
  L21():
    sym7 = ldf `on.exit`;
    base7 = ldf `on.exit` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L129() else L130();
  L94():
    st temp = r55;
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L95() else L96();
  L125():
    stop1 = ldf stop;
    check L126() else D45();
  D45():
    deopt 144 [];
  L11(i16, r57):
    c9 = `as.logical`(r57);
    if c9 then L99() else L12();
  L22():
    setwd = ldf setwd;
    check L131() else D47();
  L95():
    temp = ld temp;
    check L97() else D28();
  L96():
    r56 = dyn base5(<sym temp>, "error");
    goto L11(i9, r56);
  L126():
    p20 = prom<V +>{
      td2 = ld td;
      td3 = force? td2;
      checkMissing(td3);
      return td3;
    };
    r75 = dyn stop1("unable to create ", p20);
    check L127() else D46();
  L129():
    on_exit1 = ldf `on.exit` in base;
    r79 = dyn on_exit1(<lang unlink(td, recursive=TRUE)>, TRUE);
    goto L22();
  L130():
    r77 = dyn base7[, add](<lang unlink(td, recursive=TRUE)>, TRUE);
    goto L22();
  D28():
    deopt 91 [i9, temp];
  D46():
    deopt 147 [r75];
  D47():
    deopt 154 [];
  L12():
    temp2 = ld temp;
    check L104() else D32();
  L97():
    temp1 = force? temp;
    checkMissing(temp1);
    inherits = ldf inherits in base;
    r58 = dyn inherits(temp1, "error", FALSE);
    check L98() else D29();
  L99():
    close = ldf close;
    check L100() else D30();
  L127():
    goto L21();
  L131():
    p21 = prom<V +>{
      td4 = ld td;
      td5 = force? td4;
      checkMissing(td5);
      return td5;
    };
    r81 = dyn setwd(p21);
    check L132() else D48();
  D29():
    deopt 96 [i9, r58];
  D30():
    deopt 98 [i16];
  D32():
    deopt 105 [i16, temp2];
  D48():
    deopt 156 [r81];
  L98():
    goto L11(i9, r58);
  L100():
    p17 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r60 = dyn close(p17);
    check L101() else D31();
  L104():
    temp3 = force? temp2;
    checkMissing(temp3);
    l2 = ld db;
    c10 = `is.object`(l2);
    if c10 then L105() else L106(i16, temp3, l2);
  L132():
    sym8 = ldf seq_along;
    base8 = ldf seq_along in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L133() else L134();
  D31():
    deopt 100 [i16, r60];
  L14(i24, dx9):
    st db = dx9;
    close1 = ldf close;
    check L109() else D34();
  L23(r83):
    s1 = toForSeq(r83);
    l5 = length(s1);
    i28 = 0;
    goto L24(i28);
  L101():
    goto L8(i16);
  L105():
    dr8 = tryDispatchBuiltin.0("[[<-", l2, temp3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L107() else L106(i16, temp3, dr8);
  L106(i22, temp5, l4):
    i25 = ld i;
    check L108() else D33();
  L133():
    files17 = ld files;
    check L135() else D49();
  L134():
    r82 = dyn base8(<sym files>);
    goto L23(r82);
  D33():
    deopt 108 [i22, temp5, l4, temp3, i25];
  D34():
    deopt 113 [i24];
  D49():
    deopt 158 [files17];
  L24(i29):
    i30 = `+`.1(i29, 1);
    c14 = `<`.1(l5, i30);
    if c14 then L136() else L50();
  L107():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(i16, dx8);
  L108():
    i26 = force? i25;
    ____ = ldf `[[<-` in base;
    r62 = dyn ____(l4, temp3, i26);
    goto L14(i22, r62);
  L109():
    p18 = prom<V +>{
      con4 = ld con;
      con5 = force? con4;
      checkMissing(con5);
      return con5;
    };
    r64 = dyn close1(p18);
    check L110() else D35();
  L135():
    files18 = force? files17;
    checkMissing(files18);
    r84 = seq_along(files18);
    goto L23(r84);
  D35():
    deopt 115 [i24, r64];
  L50():
    x1 = `[[`(s1, i30, NULL, TRUE);
    st i = x1;
    verbose5 = ld verbose;
    check L137() else D50();
  L110():
    goto L8(i24);
  L136():
    setwd1 = ldf setwd;
    check L219() else D91();
  D50():
    deopt 161 [i30, verbose5];
  D91():
    deopt 321 [];
  L137():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    c15 = `as.logical`(verbose6);
    if c15 then L138() else L25();
  L219():
    p63 = prom<V +>{
      cwd2 = ld cwd;
      cwd3 = force? cwd2;
      checkMissing(cwd3);
      return cwd3;
    };
    r205 = dyn setwd1(p63);
    check L220() else D92();
  D92():
    deopt 323 [r205];
  L25():
    goto L26(i30);
  L26(i37):
    file_path1 = ldf `file.path`;
    check L142() else D53();
  L138():
    message2 = ldf message;
    check L139() else D51();
  L220():
    goto L16();
  D51():
    deopt 164 [i30];
  D53():
    deopt 170 [i37];
  L139():
    p23 = prom<V +>{
      paste1 = ldf paste0;
      p22 = prom<V +>{
        files19 = ld files;
        files20 = force? files19;
        checkMissing(files20);
        c16 = `is.object`(files20);
        if c16 then L1() else L2(files20);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", files20);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(files22):
        i35 = ld i;
        i36 = force? i35;
        __6 = ldf `[` in base;
        r85 = dyn __6(files22, i36);
        goto L0(r85);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r87 = dyn paste1("  ", p22);
      return r87;
    };
    r89 = dyn message2(p23);
    check L140() else D52();
  L142():
    p24 = prom<V +>{
      packages4 = ld packages;
      packages5 = force? packages4;
      checkMissing(packages5);
      c17 = `is.object`(packages5);
      if c17 then L1() else L2(packages5);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", packages5);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(packages7):
      i38 = ld i;
      i39 = force? i38;
      __7 = ldf `[` in base;
      r91 = dyn __7(packages7, i39);
      goto L0(r91);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r93 = dyn file_path1(p24, "DESCRIPTION");
    check L143() else D54();
  D52():
    deopt 166 [i30, r89];
  D54():
    deopt 173 [i37, r93];
  L140():
    goto L26(i30);
  L143():
    st p = r93;
    try = ldf try;
    check L144() else D55();
  D55():
    deopt 176 [i37];
  L144():
    p29 = prom<V +>{
      __8 = ldf `::`;
      r94 = dyn __8("utils", "untar");
      checkFun.0(r94);
      r95 = r94 as cls;
      p25 = prom<V +>{
        files23 = ld files;
        files24 = force? files23;
        checkMissing(files24);
        c18 = `is.object`(files24);
        if c18 then L1() else L2(files24);
      L0(dx15):
        return dx15;
      L1():
        dr14 = tryDispatchBuiltin.1("[", files24);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(files26):
        i40 = ld i;
        i41 = force? i40;
        __9 = ldf `[` in base;
        r96 = dyn __9(files26, i41);
        goto L0(r96);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      };
      p28 = prom<V +>{
        p26 = ld p;
        p27 = force? p26;
        checkMissing(p27);
        return p27;
      };
      r99 = dyn r95[, files](p25, p28);
      return r99;
    };
    r101 = dyn try(p29);
    check L145() else D56();
  D56():
    deopt 178 [i37, r101];
  L145():
    st temp = r101;
    sym9 = ldf inherits;
    base9 = ldf inherits in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L146() else L147();
  L27(i44, r103):
    r105 = `!`(r103);
    c19 = `as.logical`(r105);
    if c19 then L150() else L28();
  L146():
    temp8 = ld temp;
    check L148() else D57();
  L147():
    r102 = dyn base9(<sym temp>, "try-error");
    goto L27(i37, r102);
  D57():
    deopt 182 [i37, temp8];
  L28():
    goto L49(i44);
  L49(i105):
    unlink = ldf unlink;
    check L217() else D89();
  L148():
    temp9 = force? temp8;
    checkMissing(temp9);
    inherits1 = ldf inherits in base;
    r104 = dyn inherits1(temp9, "try-error", FALSE);
    check L149() else D58();
  L150():
    tryCatch1 = ldf tryCatch;
    check L151() else D59();
  D58():
    deopt 187 [i37, r104];
  D59():
    deopt 190 [i44];
  D89():
    deopt 312 [i105];
  L149():
    goto L27(i37, r104);
  L151():
    p34 = prom<V +>{
      read_dcf1 = ldf `read.dcf`;
      p32 = prom<V +>{
        p30 = ld p;
        p31 = force? p30;
        checkMissing(p31);
        return p31;
      };
      p33 = prom<V +>{
        fields5 = ld fields;
        fields6 = force? fields5;
        checkMissing(fields6);
        return fields6;
      };
      r108 = dyn read_dcf1[, fields](p32, p33);
      c20 = `is.object`(r108);
      if c20 then L1() else L2();
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", r108);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2();
    L2():
      __10 = ldf `[` in base;
      r111 = dyn __10(r108, 1, <missing>);
      goto L0(r111);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p35 = prom<V +>{
      identity2 = ld identity;
      identity3 = force? identity2;
      checkMissing(identity3);
      return identity3;
    };
    r114 = dyn tryCatch1[, error](p34, p35);
    check L152() else D60();
  L217():
    p62 = prom<V +>{
      packages12 = ld packages;
      packages13 = force? packages12;
      checkMissing(packages13);
      c47 = `is.object`(packages13);
      if c47 then L1() else L2(packages13);
    L0(dx35):
      return dx35;
    L1():
      dr34 = tryDispatchBuiltin.1("[", packages13);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(packages15):
      i106 = ld i;
      i107 = force? i106;
      __17 = ldf `[` in base;
      r201 = dyn __17(packages15, i107);
      goto L0(r201);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx34);
    };
    r203 = dyn unlink[, recursive](p62, TRUE);
    check L218() else D90();
  D60():
    deopt 194 [i44, r114];
  D90():
    deopt 316 [i105, r203];
  L152():
    st temp = r114;
    sym10 = ldf inherits;
    base10 = ldf inherits in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L153() else L154();
  L218():
    goto L24(i105);
  L29(i49, r116):
    r118 = `!`(r116);
    c21 = `as.logical`(r118);
    if c21 then L157() else L30();
  L153():
    temp10 = ld temp;
    check L155() else D61();
  L154():
    r115 = dyn base10(<sym temp>, "error");
    goto L29(i44, r115);
  D61():
    deopt 198 [i44, temp10];
  L30():
    message4 = ldf message;
    check L214() else D87();
  L48(i104, temp31):
    goto L49(i104);
  L155():
    temp11 = force? temp10;
    checkMissing(temp11);
    inherits2 = ldf inherits in base;
    r117 = dyn inherits2(temp11, "error", FALSE);
    check L156() else D62();
  L157():
    validate1 = ld validate;
    check L158() else D63();
  D62():
    deopt 203 [i44, r117];
  D63():
    deopt 205 [i49, validate1];
  D87():
    deopt 304 [i49];
  L156():
    goto L29(i44, r117);
  L158():
    validate2 = force? validate1;
    checkMissing(validate2);
    c22 = `as.logical`(validate2);
    if c22 then L159() else L31();
  L214():
    p61 = prom<V +>{
      gettextf1 = ldf gettextf;
      p58 = prom<V +>{
        sQuote1 = ldf sQuote;
        p57 = prom<V +>{
          basename2 = ldf basename;
          p56 = prom<V +>{
            dirname1 = ldf dirname;
            p55 = prom<V +>{
              p53 = ld p;
              p54 = force? p53;
              checkMissing(p54);
              return p54;
            };
            r189 = dyn dirname1(p55);
            return r189;
          };
          r191 = dyn basename2(p56);
          return r191;
        };
        r193 = dyn sQuote1(p57);
        return r193;
      };
      p60 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p59 = prom<V +>{
          temp32 = ld temp;
          temp33 = force? temp32;
          checkMissing(temp33);
          return temp33;
        };
        r196 = dyn conditionMessage(p59);
        return r196;
      };
      r198 = dyn gettextf1("reading DESCRIPTION for package %s failed with message:\n  %s", p58, p60);
      return r198;
    };
    r200 = dyn message4[, domain](p61, NA_LGL);
    check L215() else D88();
  D88():
    deopt 308 [i49, r200];
  L31():
    goto L36(i49);
  L36(i64):
    _in_ = ldf `%in%`;
    check L176() else D72();
  L159():
    _check_package_description = ldf `.check_package_description`;
    check L160() else D64();
  L215():
    goto L48(i49, r200);
  D64():
    deopt 208 [i49];
  D72():
    deopt 240 [i64];
  L160():
    p36 = prom<V +>{
      temp12 = ld temp;
      temp13 = force? temp12;
      checkMissing(temp13);
      c23 = `is.object`(temp13);
      if c23 then L2() else L3(temp13);
    L0(dx19):
      return dx19;
    L2():
      dr18 = tryDispatchBuiltin.1("[", temp13);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L4() else L3(dr18);
    L3(temp15):
      sym11 = ldf `is.na`;
      base11 = ldf `is.na` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L5() else L6();
    L1(temp18, r120):
      r122 = `!`(r120);
      __11 = ldf `[` in base;
      r123 = dyn __11(temp18, r122);
      goto L0(r123);
    L4():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    L5():
      temp19 = ld temp;
      temp20 = force? temp19;
      checkMissing(temp20);
      is_na = ldf `is.na` in base;
      r121 = dyn is_na(temp20);
      goto L1(temp15, r121);
    L6():
      r119 = dyn base11(<sym temp>);
      goto L1(temp15, r119);
    };
    r125 = dyn _check_package_description[db](p36);
    check L161() else D65();
  L176():
    p49 = prom<V +>{
      fields7 = ld fields;
      fields8 = force? fields7;
      checkMissing(fields8);
      return fields8;
    };
    r155 = dyn _in_("NeedsCompilation", p49);
    check L177() else D73();
  D65():
    deopt 211 [i49, r125];
  D73():
    deopt 243 [i64, r155];
  L161():
    st ok = r125;
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L162() else L163();
  L177():
    c25 = `as.logical`(r155);
    if c25 then L178() else L37(i64, c25);
  L32(i56, r127):
    c24 = `as.logical`(r127);
    if c24 then L170() else L34();
  L37(i66, c27):
    c39 = `as.logical`(c27);
    if c39 then L187() else L40();
  L162():
    sym13 = ldf `as.integer`;
    base13 = ldf `as.integer` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L164() else L165();
  L163():
    r126 = dyn base12(<lang `>`(as.integer(lengths(ok)), 0)>);
    goto L32(i49, r126);
  L178():
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L179() else L180();
  L33(i59, r129):
    r133 = `>`(r129, 0);
    any = ldf any in base;
    r134 = dyn any(r133);
    check L169() else D69();
  L34():
    goto L36(i56);
  L38(i69, c30, r157):
    c36 = `as.logical`(r157);
    c37 = `&&`(c30, c36);
    goto L37(i69, c37);
  L40():
    goto L45(i66);
  L45(i91):
    md5sum = ldf md5sum;
    check L203() else D83();
  L164():
    lengths = ldf lengths;
    check L166() else D66();
  L165():
    r128 = dyn base13(<lang lengths(ok)>);
    goto L33(i49, r128);
  L170():
    message3 = ldf message;
    check L171() else D70();
  L179():
    temp21 = ld temp;
    check L181() else D74();
  L180():
    r156 = dyn base14(<lang `[`(temp, "NeedsCompilation")>);
    goto L38(i64, c25, r156);
  L187():
    __13 = ldf `::`;
    check L188() else D76();
  D66():
    deopt 218 [i49];
  D69():
    deopt 226 [i59, r134];
  D70():
    deopt 228 [i56];
  D74():
    deopt 246 [i64, c25, temp21];
  D76():
    deopt 255 [i66];
  D83():
    deopt 288 [i91];
  L166():
    p37 = prom<V +>{
      ok = ld ok;
      ok1 = force? ok;
      checkMissing(ok1);
      return ok1;
    };
    r131 = dyn lengths(p37);
    check L167() else D67();
  L169():
    goto L32(i59, r134);
  L171():
    p48 = prom<V +>{
      paste2 = ldf paste;
      p44 = prom<V +>{
        gettextf = ldf gettextf;
        p43 = prom<V +>{
          sQuote = ldf sQuote;
          p42 = prom<V +>{
            basename1 = ldf basename;
            p41 = prom<V +>{
              dirname = ldf dirname;
              p40 = prom<V +>{
                p38 = ld p;
                p39 = force? p38;
                checkMissing(p39);
                return p39;
              };
              r136 = dyn dirname(p40);
              return r136;
            };
            r138 = dyn basename1(p41);
            return r138;
          };
          r140 = dyn sQuote(p42);
          return r140;
        };
        r142 = dyn gettextf("Invalid DESCRIPTION file for package %s", p43);
        return r142;
      };
      p47 = prom<V +>{
        paste3 = ldf paste;
        p46 = prom<V +>{
          format = ldf format;
          p45 = prom<V +>{
            ok2 = ld ok;
            ok3 = force? ok2;
            checkMissing(ok3);
            return ok3;
          };
          r145 = dyn format(p45);
          return r145;
        };
        r147 = dyn paste3[, collapse](p46, "\n\n");
        return r147;
      };
      r149 = dyn paste2[, , sep](p44, p47, "\n\n");
      return r149;
    };
    r151 = dyn message3[, domain](p48, NA_LGL);
    check L172() else D71();
  L181():
    temp22 = force? temp21;
    checkMissing(temp22);
    c31 = `is.object`(temp22);
    if c31 then L182() else L183(i64, c25, temp22);
  L188():
    r160 = dyn __13("utils", "untar");
    check L189() else D77();
  L203():
    p52 = prom<V +>{
      files31 = ld files;
      files32 = force? files31;
      checkMissing(files32);
      c44 = `is.object`(files32);
      if c44 then L1() else L2(files32);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("[", files32);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(files34):
      i92 = ld i;
      i93 = force? i92;
      __16 = ldf `[` in base;
      r179 = dyn __16(files34, i93);
      goto L0(r179);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    r181 = dyn md5sum(p52);
    check L204() else D84();
  D67():
    deopt 220 [i49, r131];
  D71():
    deopt 232 [i56, r151];
  D77():
    deopt 258 [i66, r160];
  D84():
    deopt 290 [i91, r181];
  L39(i73, c35, dx21):
    is_na1 = ldf `is.na` in base;
    r159 = dyn is_na1(dx21);
    check L185() else D75();
  L167():
    as_integer = ldf `as.integer` in base;
    r132 = dyn as_integer(r131);
    check L168() else D68();
  L172():
    goto L24(i56);
  L182():
    dr20 = tryDispatchBuiltin.1("[", temp22);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L184() else L183(i64, c25, dr20);
  L183(i71, c33, temp24):
    __12 = ldf `[` in base;
    r158 = dyn __12(temp24, "NeedsCompilation");
    goto L39(i71, c33, r158);
  L189():
    checkFun.0(r160);
    r161 = r160 as cls;
    p50 = prom<V +>{
      files27 = ld files;
      files28 = force? files27;
      checkMissing(files28);
      c40 = `is.object`(files28);
      if c40 then L1() else L2(files28);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[", files28);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(files30):
      i77 = ld i;
      i78 = force? i77;
      __14 = ldf `[` in base;
      r162 = dyn __14(files30, i78);
      goto L0(r162);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r164 = dyn r161[, list](p50, TRUE);
    check L190() else D78();
  L204():
    l11 = ld temp;
    c45 = `is.object`(l11);
    if c45 then L205() else L206(i91, r181, l11);
  D68():
    deopt 222 [i49, r132];
  D75():
    deopt 252 [i73, c35, r159];
  D78():
    deopt 263 [i66, r164];
  L46(i97, dx31):
    st temp = dx31;
    temp25 = ld temp;
    check L208() else D85();
  L168():
    goto L33(i49, r132);
  L184():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L39(i64, c25, dx20);
  L185():
    goto L38(i73, c35, r159);
  L190():
    st l = r164;
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L191() else L192();
  L205():
    dr30 = tryDispatchBuiltin.0("[<-", l11, r181);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L207() else L206(i91, r181, dr30);
  L206(i95, r183, l13):
    ___1 = ldf `[<-` in base;
    r186 = dyn ___1(l13, r181, "MD5sum");
    goto L46(i95, r186);
  D85():
    deopt 296 [i97, temp25];
  L41(i81, r166):
    c42 = `as.logical`(r166);
    if c42 then L197() else L42();
  L191():
    l6 = ld l;
    check L193() else D79();
  L192():
    r165 = dyn base15(<lang `==`(l, file.path(`[`(packages, i), "src/"))>);
    goto L41(i66, r165);
  L207():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L46(i91, dx30);
  L208():
    temp26 = force? temp25;
    checkMissing(temp26);
    l14 = ld db;
    c46 = `is.object`(l14);
    if c46 then L209() else L210(i97, temp26, l14);
  D79():
    deopt 267 [i66, l6];
  L42():
    goto L43(i81, "no");
  L43(i86, r172):
    l8 = ld temp;
    c43 = `is.object`(l8);
    if c43 then L199() else L200(i86, r172, l8);
  L47(i101, temp30, dx33):
    st db = dx33;
    goto L48(i101, temp30);
  L193():
    l7 = force? l6;
    checkMissing(l7);
    file_path2 = ldf `file.path`;
    check L194() else D80();
  L197():
    goto L43(i81, "yes");
  L209():
    dr32 = tryDispatchBuiltin.0("[[<-", l14, temp26);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L211() else L210(i97, temp26, dr32);
  L210(i99, temp28, l16):
    i102 = ld i;
    check L212() else D86();
  D80():
    deopt 269 [i66, l7];
  D86():
    deopt 299 [i99, temp28, l16, temp26, i102];
  L44(i90, r176, dx27):
    st temp = dx27;
    goto L45(i90);
  L194():
    p51 = prom<V +>{
      packages8 = ld packages;
      packages9 = force? packages8;
      checkMissing(packages9);
      c41 = `is.object`(packages9);
      if c41 then L1() else L2(packages9);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("[", packages9);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(packages11):
      i82 = ld i;
      i83 = force? i82;
      __15 = ldf `[` in base;
      r167 = dyn __15(packages11, i83);
      goto L0(r167);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    r169 = dyn file_path2(p51, "src/");
    check L195() else D81();
  L199():
    dr26 = tryDispatchBuiltin.0("[<-", l8, r172);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L201() else L200(i86, r172, dr26);
  L200(i88, r174, l10):
    ___ = ldf `[<-` in base;
    r177 = dyn ___(l10, r172, "NeedsCompilation");
    goto L44(i88, r174, r177);
  L211():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L47(i97, temp26, dx32);
  L212():
    i103 = force? i102;
    ____1 = ldf `[[<-` in base;
    r187 = dyn ____1(l16, temp26, i103);
    goto L47(i99, temp28, r187);
  D81():
    deopt 272 [i66, l7, r169];
  L195():
    r170 = `==`(l7, r169);
    any1 = ldf any in base;
    r171 = dyn any1(r170);
    check L196() else D82();
  L201():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L44(i86, r172, dx26);
  D82():
    deopt 275 [i66, r171];
  L196():
    goto L41(i66, r171);
  }
}