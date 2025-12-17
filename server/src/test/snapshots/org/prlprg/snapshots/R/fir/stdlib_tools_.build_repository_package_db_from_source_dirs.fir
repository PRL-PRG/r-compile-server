fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3270001741;
    st `.build_repository_package_db_from_source_dirs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3270001741(dir, fields, verbose, validate) {
  (reg dir:*, reg fields:*, reg verbose:*, reg validate:*) -+> V { var dir:*, var fields:*, reg fields_isMissing:L, reg fields_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var validate:*, reg validate_isMissing:L, reg validate_orDefault:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg r3:V, reg unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg _get_standard_repository_db_fields:cls, reg r6:V, reg fields1:*, reg fields2:V, reg c:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg list_files:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg r11:V, reg paths:*, reg paths1:V, reg c1:L, reg paths3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dir_exists:cls, reg paths4:*, reg paths5:V, reg p4:p(V +), reg r13:V, reg file_test:cls, reg file_path:cls, reg paths6:*, reg paths7:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg r17:V, reg r18:V, reg __:cls, reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg paths8:*, reg paths9:V, reg length:cls, reg r24:V, reg vector:cls, reg r25:V, reg verbose1:*, reg verbose2:V, reg c2:L, reg message:cls, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg paths10:*, reg paths11:V, reg r30:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg verbose3:*, reg verbose4:V, reg c4:L, reg message1:cls, reg paste0:cls, reg basename:cls, reg paths12:*, reg paths13:V, reg c5:L, reg paths15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i7:*, reg i8:V, reg __1:cls, reg r31:V, reg p7:p(V +), reg r33:V, reg p8:p(V +), reg r35:V, reg p9:p(V +), reg r37:V, reg i9:I, reg tryCatch:cls, reg read_dcf:cls, reg file_path1:cls, reg paths16:*, reg paths17:V, reg c6:L, reg paths19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i10:*, reg i11:V, reg __2:cls, reg r39:V, reg p10:p(V +), reg r41:V, reg p11:p(V +), reg fields3:*, reg fields4:V, reg p12:p(V +), reg r44:V, reg c7:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r47:V, reg p13:p(V +), reg identity:*, reg identity1:V, reg p14:p(V +), reg r50:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r51:V, reg i14:I, reg r52:V, reg temp:*, reg temp1:V, reg inherits:cls, reg r53:V, reg r54:V, reg c8:L, reg validate1:*, reg validate2:V, reg c9:L, reg _check_package_description:cls, reg temp2:*, reg temp3:V, reg c10:L, reg temp5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r55:V, reg temp8:V, reg r56:V, reg temp9:*, reg temp10:V, reg is_na:cls, reg r57:V, reg r58:V, reg __4:cls, reg r59:V, reg p15:p(V +), reg r61:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r62:V, reg i21:I, reg r63:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg i24:I, reg r65:V, reg lengths:cls, reg ok:*, reg ok1:V, reg p16:p(V +), reg r67:V, reg as_integer:cls, reg r68:V, reg r69:V, reg any:cls, reg r70:V, reg c11:L, reg warning:cls, reg paste1:cls, reg gettextf:cls, reg sQuote:cls, reg basename1:cls, reg paths20:*, reg paths21:V, reg c12:L, reg paths23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i27:*, reg i28:V, reg __5:cls, reg r71:V, reg p17:p(V +), reg r73:V, reg p18:p(V +), reg r75:V, reg p19:p(V +), reg r77:V, reg p20:p(V +), reg paste2:cls, reg format:cls, reg ok2:*, reg ok3:V, reg p21:p(V +), reg r80:V, reg p22:p(V +), reg r82:V, reg p23:p(V +), reg r84:V, reg p24:p(V +), reg r86:V, reg i31:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r89:V, reg i34:I, reg r90:V, reg temp11:*, reg temp12:V, reg c13:L, reg i36:I, reg temp14:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i38:I, reg dx13:V, reg __6:cls, reg r91:V, reg is_na1:cls, reg r92:V, reg c14:L, reg dir_exists1:cls, reg file_path2:cls, reg paths24:*, reg paths25:V, reg c15:L, reg paths27:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i41:*, reg i42:V, reg __7:cls, reg r93:V, reg p25:p(V +), reg r95:V, reg p26:p(V +), reg r97:V, reg c16:L, reg i45:I, reg r98:S, reg l1:*, reg c17:L, reg i47:I, reg r100:S, reg l3:*, reg dr16:V, reg dc8:L, reg dx16:V, reg i49:I, reg r102:S, reg dx17:V, reg ___:cls, reg r103:V, reg i50:I, reg temp15:*, reg temp16:V, reg l4:*, reg c18:L, reg i52:I, reg temp18:V, reg l6:*, reg dr18:V, reg dc9:L, reg dx18:V, reg i54:I, reg temp20:V, reg dx19:V, reg i55:*, reg i56:V, reg ____:cls, reg r105:V, reg i57:I, reg warning1:cls, reg gettextf1:cls, reg sQuote1:cls, reg basename2:cls, reg paths28:*, reg paths29:V, reg c19:L, reg paths31:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg i58:*, reg i59:V, reg __8:cls, reg r106:V, reg p27:p(V +), reg r108:V, reg p28:p(V +), reg r110:V, reg p29:p(V +), reg conditionMessage:cls, reg temp22:*, reg temp23:V, reg p30:p(V +), reg r113:V, reg p31:p(V +), reg r115:V, reg p32:p(V +), reg r117:V, reg verbose5:*, reg verbose6:V, reg c20:L, reg message2:cls, reg r118:V, reg basename3:cls, reg paths32:*, reg paths33:V, reg p33:p(V +), reg r121:V, reg l7:*, reg names__:cls, reg r122:V, reg db:*, reg db1:V |
    mkenv;
    st dir = dir;
    fields_isMissing = missing.0(fields);
    if fields_isMissing then L0(NULL) else L0(fields);
  L0(fields_orDefault):
    st fields = fields_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L1() else L2(verbose);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L2(p);
  L2(verbose_orDefault):
    st verbose = verbose_orDefault;
    validate_isMissing = missing.0(validate);
    if validate_isMissing then L3(FALSE) else L3(validate);
  L3(validate_orDefault):
    st validate = validate_orDefault;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L33() else D0();
  D0():
    deopt 1 [];
  L33():
    p1 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r3 = dyn file_path_as_absolute(p1);
    check L34() else D1();
  D1():
    deopt 3 [r3];
  L34():
    st dir = r3;
    unique = ldf unique;
    check L35() else D2();
  D2():
    deopt 6 [];
  L35():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      _get_standard_repository_db_fields = ldf `.get_standard_repository_db_fields`;
      r6 = dyn _get_standard_repository_db_fields();
      fields1 = ld fields;
      fields2 = force? fields1;
      checkMissing(fields2);
      c = ldf c in base;
      r7 = dyn c(r6, fields2);
      goto L0(r7);
    L2():
      r4 = dyn base(<lang .get_standard_repository_db_fields()>, <sym fields>);
      goto L0(r4);
    };
    r9 = dyn unique(p2);
    check L36() else D3();
  D3():
    deopt 8 [r9];
  L36():
    st fields = r9;
    list_files = ldf `list.files`;
    check L37() else D4();
  D4():
    deopt 11 [];
  L37():
    p3 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r11 = dyn list_files[, `full.names`](p3, TRUE);
    check L38() else D5();
  D5():
    deopt 15 [r11];
  L38():
    st paths = r11;
    paths = ld paths;
    check L39() else D6();
  D6():
    deopt 17 [paths];
  L39():
    paths1 = force? paths;
    checkMissing(paths1);
    c1 = `is.object`(paths1);
    if c1 then L40() else L41(paths1);
  L4(dx1):
    st paths = dx1;
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L40():
    dr = tryDispatchBuiltin.1("[", paths1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L42() else L41(dr);
  L41(paths3):
    dir_exists = ldf `dir.exists`;
    check L43() else D7();
  D7():
    deopt 20 [paths3];
  L5(r21):
    st db = r21;
    verbose1 = ld verbose;
    check L54() else D14();
  L42():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L43():
    p4 = prom<V +>{
      paths4 = ld paths;
      paths5 = force? paths4;
      checkMissing(paths5);
      return paths5;
    };
    r13 = dyn dir_exists(p4);
    check L44() else D8();
  L47():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L48():
    r20 = dyn base1[, mode](<lang length(paths)>, "list");
    goto L5(r20);
  D8():
    deopt 22 [paths3, r13];
  D14():
    deopt 42 [verbose1];
  L6(r23):
    vector = ldf vector in base;
    r25 = dyn vector("list", r23);
    check L53() else D13();
  L44():
    file_test = ldf file_test;
    check L45() else D9();
  L49():
    paths8 = ld paths;
    check L51() else D11();
  L50():
    r22 = dyn base2(<sym paths>);
    goto L6(r22);
  L54():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c2 = `as.logical`(verbose2);
    if c2 then L55() else L7();
  D9():
    deopt 23 [paths3, r13];
  D11():
    deopt 35 [paths8];
  D13():
    deopt 40 [r25];
  L7():
    goto L8();
  L8():
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L45():
    p6 = prom<V +>{
      file_path = ldf `file.path`;
      p5 = prom<V +>{
        paths6 = ld paths;
        paths7 = force? paths6;
        checkMissing(paths7);
        return paths7;
      };
      r15 = dyn file_path(p5, "DESCRIPTION");
      return r15;
    };
    r17 = dyn file_test("-f", p6);
    check L46() else D10();
  L51():
    paths9 = force? paths8;
    checkMissing(paths9);
    length = ldf length in base;
    r24 = dyn length(paths9);
    check L52() else D12();
  L53():
    goto L5(r25);
  L55():
    message = ldf message;
    check L56() else D15();
  D10():
    deopt 26 [paths3, r13, r17];
  D12():
    deopt 38 [r24];
  D15():
    deopt 45 [];
  L9(r29):
    s = toForSeq(r29);
    l = length(s);
    i = 0;
    goto L10(i);
  L46():
    r18 = `&&`(r13, r17);
    __ = ldf `[` in base;
    r19 = dyn __(paths3, r18);
    goto L4(r19);
  L52():
    goto L6(r24);
  L56():
    r26 = dyn message("Processing packages:");
    check L57() else D16();
  L59():
    paths10 = ld paths;
    check L61() else D17();
  L60():
    r28 = dyn base3(<sym paths>);
    goto L9(r28);
  D16():
    deopt 47 [r26];
  D17():
    deopt 51 [paths10];
  L10(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L62() else L30();
  L57():
    goto L8();
  L61():
    paths11 = force? paths10;
    checkMissing(paths11);
    r30 = seq_along(paths11);
    goto L9(r30);
  L30():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    verbose3 = ld verbose;
    check L63() else D18();
  L62():
    verbose5 = ld verbose;
    check L117() else D42();
  D18():
    deopt 54 [i2, verbose3];
  D42():
    deopt 154 [verbose5];
  L63():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c4 = `as.logical`(verbose4);
    if c4 then L64() else L11();
  L117():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    c20 = `as.logical`(verbose6);
    if c20 then L118() else L31();
  L11():
    goto L12(i2);
  L12(i9):
    tryCatch = ldf tryCatch;
    check L68() else D21();
  L31():
    goto L32();
  L32():
    basename3 = ldf basename;
    check L122() else D45();
  L64():
    message1 = ldf message;
    check L65() else D19();
  L118():
    message2 = ldf message;
    check L119() else D43();
  D19():
    deopt 57 [i2];
  D21():
    deopt 63 [i9];
  D43():
    deopt 157 [];
  D45():
    deopt 163 [];
  L65():
    p9 = prom<V +>{
      paste0 = ldf paste0;
      p8 = prom<V +>{
        basename = ldf basename;
        p7 = prom<V +>{
          paths12 = ld paths;
          paths13 = force? paths12;
          checkMissing(paths13);
          c5 = `is.object`(paths13);
          if c5 then L1() else L2(paths13);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", paths13);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(paths15):
          i7 = ld i;
          i8 = force? i7;
          __1 = ldf `[` in base;
          r31 = dyn __1(paths15, i8);
          goto L0(r31);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r33 = dyn basename(p7);
        return r33;
      };
      r35 = dyn paste0("  ", p8);
      return r35;
    };
    r37 = dyn message1(p9);
    check L66() else D20();
  L68():
    p13 = prom<V +>{
      read_dcf = ldf `read.dcf`;
      p11 = prom<V +>{
        file_path1 = ldf `file.path`;
        p10 = prom<V +>{
          paths16 = ld paths;
          paths17 = force? paths16;
          checkMissing(paths17);
          c6 = `is.object`(paths17);
          if c6 then L1() else L2(paths17);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[", paths17);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(paths19):
          i10 = ld i;
          i11 = force? i10;
          __2 = ldf `[` in base;
          r39 = dyn __2(paths19, i11);
          goto L0(r39);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r41 = dyn file_path1(p10, "DESCRIPTION");
        return r41;
      };
      p12 = prom<V +>{
        fields3 = ld fields;
        fields4 = force? fields3;
        checkMissing(fields4);
        return fields4;
      };
      r44 = dyn read_dcf[, fields](p11, p12);
      c7 = `is.object`(r44);
      if c7 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", r44);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r47 = dyn __3(r44, 1, <missing>);
      goto L0(r47);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p14 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r50 = dyn tryCatch[, error](p13, p14);
    check L69() else D22();
  L119():
    r118 = dyn message2("done");
    check L120() else D44();
  L122():
    p33 = prom<V +>{
      paths32 = ld paths;
      paths33 = force? paths32;
      checkMissing(paths33);
      return paths33;
    };
    r121 = dyn basename3(p33);
    check L123() else D46();
  D20():
    deopt 59 [i2, r37];
  D22():
    deopt 67 [i9, r50];
  D44():
    deopt 159 [r118];
  D46():
    deopt 165 [r121];
  L66():
    goto L12(i2);
  L69():
    st temp = r50;
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L120():
    goto L32();
  L123():
    l7 = ld db;
    names__ = ldf `names<-`;
    check L124() else D47();
  D47():
    deopt 167 [r121, l7, r121];
  L13(i14, r52):
    r54 = `!`(r52);
    c8 = `as.logical`(r54);
    if c8 then L74() else L14();
  L70():
    temp = ld temp;
    check L72() else D23();
  L71():
    r51 = dyn base4(<sym temp>, "error");
    goto L13(i9, r51);
  L124():
    r122 = dyn names__(l7, NULL, r121);
    check L125() else D48();
  D23():
    deopt 71 [i9, temp];
  D48():
    deopt 169 [r121, r122];
  L14():
    warning1 = ldf warning;
    check L115() else D40();
  L29(i57):
    goto L10(i57);
  L72():
    temp1 = force? temp;
    checkMissing(temp1);
    inherits = ldf inherits in base;
    r53 = dyn inherits(temp1, "error", FALSE);
    check L73() else D24();
  L74():
    validate1 = ld validate;
    check L75() else D25();
  L125():
    st db = r122;
    db = ld db;
    check L126() else D49();
  D24():
    deopt 76 [i9, r53];
  D25():
    deopt 78 [i14, validate1];
  D40():
    deopt 146 [i14];
  D49():
    deopt 171 [db];
  L73():
    goto L13(i9, r53);
  L75():
    validate2 = force? validate1;
    checkMissing(validate2);
    c9 = `as.logical`(validate2);
    if c9 then L76() else L15();
  L115():
    p32 = prom<V +>{
      gettextf1 = ldf gettextf;
      p29 = prom<V +>{
        sQuote1 = ldf sQuote;
        p28 = prom<V +>{
          basename2 = ldf basename;
          p27 = prom<V +>{
            paths28 = ld paths;
            paths29 = force? paths28;
            checkMissing(paths29);
            c19 = `is.object`(paths29);
            if c19 then L1() else L2(paths29);
          L0(dx21):
            return dx21;
          L1():
            dr20 = tryDispatchBuiltin.1("[", paths29);
            dc10 = getTryDispatchBuiltinDispatched(dr20);
            if dc10 then L3() else L2(dr20);
          L2(paths31):
            i58 = ld i;
            i59 = force? i58;
            __8 = ldf `[` in base;
            r106 = dyn __8(paths31, i59);
            goto L0(r106);
          L3():
            dx20 = getTryDispatchBuiltinValue(dr20);
            goto L0(dx20);
          };
          r108 = dyn basename2(p27);
          return r108;
        };
        r110 = dyn sQuote1(p28);
        return r110;
      };
      p31 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p30 = prom<V +>{
          temp22 = ld temp;
          temp23 = force? temp22;
          checkMissing(temp23);
          return temp23;
        };
        r113 = dyn conditionMessage(p30);
        return r113;
      };
      r115 = dyn gettextf1("reading DESCRIPTION for package %s failed with message:\n  %s", p29, p31);
      return r115;
    };
    r117 = dyn warning1[, domain](p32, NA_LGL);
    check L116() else D41();
  L126():
    db1 = force? db;
    checkMissing(db1);
    popenv;
    return db1;
  D41():
    deopt 150 [i14, r117];
  L15():
    goto L20(i14);
  L20(i31):
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  L76():
    _check_package_description = ldf `.check_package_description`;
    check L77() else D26();
  L116():
    goto L29(i14);
  D26():
    deopt 81 [i14];
  L21(i34, r90):
    c14 = `as.logical`(r90);
    if c14 then L100() else L23();
  L77():
    p15 = prom<V +>{
      temp2 = ld temp;
      temp3 = force? temp2;
      checkMissing(temp3);
      c10 = `is.object`(temp3);
      if c10 then L2() else L3(temp3);
    L0(dx9):
      return dx9;
    L2():
      dr8 = tryDispatchBuiltin.1("[", temp3);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(temp5):
      sym5 = ldf `is.na`;
      base5 = ldf `is.na` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L1(temp8, r56):
      r58 = `!`(r56);
      __4 = ldf `[` in base;
      r59 = dyn __4(temp8, r58);
      goto L0(r59);
    L4():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    L5():
      temp9 = ld temp;
      temp10 = force? temp9;
      checkMissing(temp10);
      is_na = ldf `is.na` in base;
      r57 = dyn is_na(temp10);
      goto L1(temp5, r57);
    L6():
      r55 = dyn base5(<sym temp>);
      goto L1(temp5, r55);
    };
    r61 = dyn _check_package_description[db](p15);
    check L78() else D27();
  L93():
    temp11 = ld temp;
    check L95() else D34();
  L94():
    r89 = dyn base8(<lang `[`(temp, "NeedsCompilation")>);
    goto L21(i31, r89);
  D27():
    deopt 84 [i14, r61];
  D34():
    deopt 116 [i31, temp11];
  L23():
    goto L27(i34);
  L27(i50):
    temp15 = ld temp;
    check L109() else D38();
  L78():
    st ok = r61;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L79() else L80();
  L95():
    temp12 = force? temp11;
    checkMissing(temp12);
    c13 = `is.object`(temp12);
    if c13 then L96() else L97(i31, temp12);
  L100():
    dir_exists1 = ldf `dir.exists`;
    check L101() else D36();
  D36():
    deopt 124 [i34];
  D38():
    deopt 138 [i50, temp15];
  L16(i21, r63):
    c11 = `as.logical`(r63);
    if c11 then L87() else L18();
  L22(i38, dx13):
    is_na1 = ldf `is.na` in base;
    r92 = dyn is_na1(dx13);
    check L99() else D35();
  L79():
    sym7 = ldf `as.integer`;
    base7 = ldf `as.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L81() else L82();
  L80():
    r62 = dyn base6(<lang `>`(as.integer(lengths(ok)), 0)>);
    goto L16(i14, r62);
  L96():
    dr12 = tryDispatchBuiltin.1("[", temp12);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L98() else L97(i31, dr12);
  L97(i36, temp14):
    __6 = ldf `[` in base;
    r91 = dyn __6(temp14, "NeedsCompilation");
    goto L22(i36, r91);
  L101():
    p26 = prom<V +>{
      file_path2 = ldf `file.path`;
      p25 = prom<V +>{
        paths24 = ld paths;
        paths25 = force? paths24;
        checkMissing(paths25);
        c15 = `is.object`(paths25);
        if c15 then L1() else L2(paths25);
      L0(dx15):
        return dx15;
      L1():
        dr14 = tryDispatchBuiltin.1("[", paths25);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(paths27):
        i41 = ld i;
        i42 = force? i41;
        __7 = ldf `[` in base;
        r93 = dyn __7(paths27, i42);
        goto L0(r93);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      };
      r95 = dyn file_path2(p25, "src");
      return r95;
    };
    r97 = dyn dir_exists1(p26);
    check L102() else D37();
  L109():
    temp16 = force? temp15;
    checkMissing(temp16);
    l4 = ld db;
    c18 = `is.object`(l4);
    if c18 then L110() else L111(i50, temp16, l4);
  D35():
    deopt 122 [i38, r92];
  D37():
    deopt 126 [i34, r97];
  L17(i24, r65):
    r69 = `>`(r65, 0);
    any = ldf any in base;
    r70 = dyn any(r69);
    check L86() else D31();
  L18():
    goto L20(i21);
  L28(i54, temp20, dx19):
    st db = dx19;
    goto L29(i54);
  L81():
    lengths = ldf lengths;
    check L83() else D28();
  L82():
    r64 = dyn base7(<lang lengths(ok)>);
    goto L17(i14, r64);
  L87():
    warning = ldf warning;
    check L88() else D32();
  L98():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L22(i31, dx12);
  L99():
    goto L21(i38, r92);
  L102():
    c16 = `as.logical`(r97);
    if c16 then L103() else L24();
  L110():
    dr18 = tryDispatchBuiltin.0("[[<-", l4, temp16);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L112() else L111(i50, temp16, dr18);
  L111(i52, temp18, l6):
    i55 = ld i;
    check L113() else D39();
  D28():
    deopt 91 [i14];
  D31():
    deopt 99 [i24, r70];
  D32():
    deopt 101 [i21];
  D39():
    deopt 141 [i52, temp18, l6, temp16, i55];
  L24():
    goto L25(i34, "no");
  L25(i45, r98):
    l1 = ld temp;
    c17 = `is.object`(l1);
    if c17 then L105() else L106(i45, r98, l1);
  L83():
    p16 = prom<V +>{
      ok = ld ok;
      ok1 = force? ok;
      checkMissing(ok1);
      return ok1;
    };
    r67 = dyn lengths(p16);
    check L84() else D29();
  L86():
    goto L16(i24, r70);
  L88():
    p24 = prom<V +>{
      paste1 = ldf paste;
      p20 = prom<V +>{
        gettextf = ldf gettextf;
        p19 = prom<V +>{
          sQuote = ldf sQuote;
          p18 = prom<V +>{
            basename1 = ldf basename;
            p17 = prom<V +>{
              paths20 = ld paths;
              paths21 = force? paths20;
              checkMissing(paths21);
              c12 = `is.object`(paths21);
              if c12 then L1() else L2(paths21);
            L0(dx11):
              return dx11;
            L1():
              dr10 = tryDispatchBuiltin.1("[", paths21);
              dc5 = getTryDispatchBuiltinDispatched(dr10);
              if dc5 then L3() else L2(dr10);
            L2(paths23):
              i27 = ld i;
              i28 = force? i27;
              __5 = ldf `[` in base;
              r71 = dyn __5(paths23, i28);
              goto L0(r71);
            L3():
              dx10 = getTryDispatchBuiltinValue(dr10);
              goto L0(dx10);
            };
            r73 = dyn basename1(p17);
            return r73;
          };
          r75 = dyn sQuote(p18);
          return r75;
        };
        r77 = dyn gettextf("Invalid DESCRIPTION file for package %s", p19);
        return r77;
      };
      p23 = prom<V +>{
        paste2 = ldf paste;
        p22 = prom<V +>{
          format = ldf format;
          p21 = prom<V +>{
            ok2 = ld ok;
            ok3 = force? ok2;
            checkMissing(ok3);
            return ok3;
          };
          r80 = dyn format(p21);
          return r80;
        };
        r82 = dyn paste2[, collapse](p22, "\n\n");
        return r82;
      };
      r84 = dyn paste1[, , sep](p20, p23, "\n\n");
      return r84;
    };
    r86 = dyn warning[, domain, `call.`](p24, NA_LGL, FALSE);
    check L89() else D33();
  L103():
    goto L25(i34, "yes");
  L112():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L28(i50, temp16, dx18);
  L113():
    i56 = force? i55;
    ____ = ldf `[[<-` in base;
    r105 = dyn ____(l6, temp16, i56);
    goto L28(i52, temp18, r105);
  D29():
    deopt 93 [i14, r67];
  D33():
    deopt 107 [i21, r86];
  L26(i49, r102, dx17):
    st temp = dx17;
    goto L27(i49);
  L84():
    as_integer = ldf `as.integer` in base;
    r68 = dyn as_integer(r67);
    check L85() else D30();
  L89():
    goto L10(i21);
  L105():
    dr16 = tryDispatchBuiltin.0("[<-", l1, r98);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L107() else L106(i45, r98, dr16);
  L106(i47, r100, l3):
    ___ = ldf `[<-` in base;
    r103 = dyn ___(l3, r98, "NeedsCompilation");
    goto L26(i47, r100, r103);
  D30():
    deopt 95 [i14, r68];
  L85():
    goto L17(i14, r68);
  L107():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L26(i45, r98, dx16);
  }
}