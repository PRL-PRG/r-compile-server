fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2095421263;
    st `make.packages.html` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2095421263(`lib.loc`, temp, verbose, docdir) {
  (reg lib_loc:*, reg temp:*, reg verbose:*, reg docdir:*) -+> V { var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg _libPaths:cls, reg r:V, reg p:p(V +), var temp:*, reg temp_isMissing:L, reg temp_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var docdir:*, reg docdir_isMissing:L, reg docdir_orDefault:*, reg R_home:cls, reg r2:V, reg p1:p(V +), reg r4:cls, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg r6:V, reg temp1:*, reg temp2:V, reg c1:L, reg dir_create:cls, reg file_path:cls, reg tempdir:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg file_path1:cls, reg tempdir1:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg r15:V, reg file_path2:cls, reg docdir1:*, reg docdir2:V, reg p5:p(V +), reg r17:V, reg file_path3:cls, reg tempdir2:cls, reg r18:V, reg p6:p(V +), reg r20:V, reg temp3:*, reg temp4:V, reg c2:L, reg c4:V, reg file_exists:cls, reg f_tg:*, reg f_tg1:V, reg p7:p(V +), reg r22:V, reg c5:L, reg c6:V, reg c8:L, reg c10:V, reg file_exists1:cls, reg op:*, reg op1:V, reg p8:p(V +), reg r24:V, reg c11:L, reg c12:V, reg c14:L, reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg r26:V, reg lib_loc1:*, reg lib_loc2:V, reg readRDS:cls, reg op2:*, reg op3:V, reg p9:p(V +), reg r28:V, reg identical:cls, reg r29:V, reg c15:L, reg file_mtime:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r30:V, reg r31:V, reg f_tg2:*, reg f_tg3:V, reg lib_loc3:*, reg lib_loc4:V, reg c16:cls, reg r32:V, reg p10:p(V +), reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg dates:*, reg dates1:V, reg which_max:cls, reg r37:V, reg r38:V, reg c17:L, reg r41:dots, reg file_create:cls, reg f_tg4:*, reg f_tg5:V, reg p11:p(V +), reg r44:V, reg r45:V, reg c18:L, reg warning:cls, reg r46:V, reg verbose1:*, reg verbose2:V, reg c19:L, reg message:cls, reg r49:V, reg flush_console:cls, reg r50:V, reg file_append:cls, reg f_tg6:*, reg f_tg7:V, reg p12:p(V +), reg file_path4:cls, reg R_home1:cls, reg r53:V, reg p13:p(V +), reg r55:V, reg p14:p(V +), reg r57:V, reg file:cls, reg f_tg8:*, reg f_tg9:V, reg p15:p(V +), reg r59:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r60:V, reg on_exit:cls, reg r62:V, reg WINDOWS:*, reg WINDOWS1:V, reg c20:L, reg chartr:cls, reg R_home2:cls, reg r63:V, reg p16:p(V +), reg r65:V, reg substr:cls, reg rh:*, reg rh1:V, reg p17:p(V +), reg r67:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r69:V, reg r70:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r71:V, reg r72:V, reg lib_loc5:*, reg lib_loc6:V, reg length:cls, reg r73:V, reg vector:cls, reg r74:V, reg lib_loc7:*, reg lib_loc8:V, reg l:*, reg names__:cls, reg r75:V, reg lib_loc9:*, reg lib_loc10:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c21:L, reg x:V, reg _packages:cls, reg lib:*, reg lib1:V, reg p18:p(V +), reg r77:V, reg pg:*, reg pg1:V, reg c22:L, reg i6:I, reg pg3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg order:cls, reg toupper:cls, reg pg4:*, reg pg5:V, reg p19:p(V +), reg r79:V, reg p20:p(V +), reg pg6:*, reg pg7:V, reg p21:p(V +), reg r82:V, reg __:cls, reg r83:V, reg l2:*, reg c23:L, reg i10:I, reg dx5:V, reg l4:*, reg dr4:V, reg dc2:L, reg dx7:V, reg i12:I, reg dx9:V, reg lib2:*, reg lib3:V, reg ____:cls, reg r84:V, reg WINDOWS2:*, reg WINDOWS3:V, reg c24:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r85:V, reg r86:V, reg lengths:cls, reg pkgs:*, reg pkgs1:V, reg p22:p(V +), reg r88:V, reg sum:cls, reg r89:V, reg verbose3:*, reg verbose4:V, reg c25:L, reg winProgressBar:cls, reg tot:*, reg tot1:V, reg p23:p(V +), reg r91:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r92:V, reg r93:V, reg on_exit1:cls, reg r94:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r97:V, reg r98:V, reg lib_loc11:*, reg lib_loc12:V, reg length1:cls, reg r99:V, reg r100:V, reg c26:L, reg add_lib_index:cls, reg lib_loc13:*, reg lib_loc14:V, reg p24:p(V +), reg r102:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r104:V, reg r105:V, reg lib_loc15:*, reg lib_loc16:V, reg r106:I, reg s1:V, reg l5:I, reg i13:I, reg i14:I, reg i15:I, reg c27:L, reg x1:V, reg lib_loc17:*, reg lib_loc18:V, reg c28:L, reg i19:I, reg lib_loc20:V, reg dr6:V, reg dc3:L, reg dx10:V, reg i21:I, reg dx11:V, reg ii:*, reg ii1:V, reg __1:cls, reg r107:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r108:V, reg i24:I, reg r109:V, reg lib4:*, reg lib5:V, reg _Library:*, reg _Library1:V, reg identical1:cls, reg r110:V, reg c29:L, reg i27:I, reg r111:V, reg WINDOWS4:*, reg WINDOWS5:V, reg c30:L, reg chartr1:cls, reg lib6:*, reg lib7:V, reg p25:p(V +), reg r113:V, reg lib8:*, reg lib9:V, reg cat:cls, reg ii2:*, reg ii3:V, reg p26:p(V +), reg libname:*, reg libname1:V, reg p27:p(V +), reg out:*, reg out1:V, reg p28:p(V +), reg r117:V, reg temp5:*, reg temp6:V, reg r118:V, reg c31:L, reg WINDOWS6:*, reg WINDOWS7:V, reg c32:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r119:V, reg i36:I, reg r120:V, reg pmatch:cls, reg rh2:*, reg rh3:V, reg p29:p(V +), reg lib10:*, reg lib11:V, reg p30:p(V +), reg r123:V, reg is_na:cls, reg r124:V, reg c33:L, reg substr1:cls, reg lib12:*, reg lib13:V, reg p31:p(V +), reg r126:V, reg r127:V, reg c34:L, reg paste0:cls, reg drive:*, reg drive1:V, reg p32:p(V +), reg lib14:*, reg lib15:V, reg p33:p(V +), reg r130:V, reg i41:I, reg r131:V, reg lib16:*, reg lib17:V, reg paste1:cls, reg URLencode:cls, reg lib18:*, reg lib19:V, reg p34:p(V +), reg r133:V, reg p35:p(V +), reg r135:V, reg i42:I, reg r136:V, reg i43:I, reg r137:V, reg lib20:*, reg lib21:V, reg _Library2:*, reg _Library3:V, reg r138:V, reg c35:L, reg paste2:cls, reg URLencode1:cls, reg lib22:*, reg lib23:V, reg p36:p(V +), reg r140:V, reg p37:p(V +), reg r142:V, reg i46:I, reg pkgs2:*, reg pkgs3:V, reg c36:L, reg i48:I, reg pkgs5:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i50:I, reg dx13:V, reg lib24:*, reg lib25:V, reg __2:cls, reg r144:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r145:V, reg i53:I, reg r146:V, reg pg8:*, reg pg9:V, reg length2:cls, reg r147:V, reg r148:V, reg toupper1:cls, reg substr2:cls, reg pg10:*, reg pg11:V, reg p38:p(V +), reg r150:V, reg p39:p(V +), reg r152:V, reg sort:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r153:V, reg r154:V, reg table:cls, reg first:*, reg first1:V, reg p40:p(V +), reg r156:V, reg names:cls, reg r157:V, reg p41:p(V +), reg r159:V, reg use_alpha:*, reg use_alpha1:V, reg c37:L, reg writeLines:cls, reg out2:*, reg out3:V, reg p42:p(V +), reg r161:V, reg writeLines1:cls, reg paste3:cls, reg nm:*, reg nm1:V, reg p43:p(V +), reg nm2:*, reg nm3:V, reg p44:p(V +), reg r164:V, reg p45:p(V +), reg out4:*, reg out5:V, reg p46:p(V +), reg r167:V, reg writeLines2:cls, reg out6:*, reg out7:V, reg p47:p(V +), reg r169:V, reg i56:I, reg cat1:cls, reg out8:*, reg out9:V, reg p48:p(V +), reg r172:V, reg nm4:*, reg nm5:V, reg s2:V, reg l6:I, reg i57:I, reg i58:I, reg i59:I, reg i60:I, reg c38:L, reg x2:V, reg use_alpha2:*, reg use_alpha3:V, reg c39:L, reg cat2:cls, reg a:*, reg a1:V, reg p49:p(V +), reg out10:*, reg out11:V, reg p50:p(V +), reg r175:V, reg i69:I, reg i70:I, reg pg12:*, reg pg13:V, reg c40:L, reg i73:I, reg i74:I, reg pg15:V, reg dr10:V, reg dc5:L, reg dx14:V, reg i77:I, reg i78:I, reg dx15:V, reg first2:*, reg first3:V, reg a2:*, reg a3:V, reg r177:V, reg __3:cls, reg r178:V, reg s3:V, reg l7:I, reg i79:I, reg i80:I, reg i81:I, reg i82:I, reg i83:I, reg c41:L, reg x3:V, reg packageDescription:cls, reg i90:*, reg i91:V, reg p51:p(V +), reg lib26:*, reg lib27:V, reg p52:p(V +), reg r181:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r182:V, reg i98:I, reg i99:I, reg i100:I, reg r183:V, reg title:*, reg title1:V, reg is_na1:cls, reg r184:V, reg c42:L, reg i107:I, reg i108:I, reg i109:I, reg cat3:cls, reg i110:*, reg i111:V, reg p53:p(V +), reg lib28:*, reg lib29:V, reg p54:p(V +), reg i112:*, reg i113:V, reg p55:p(V +), reg i114:*, reg i115:V, reg p56:p(V +), reg gsub:cls, reg title2:*, reg title3:V, reg p57:p(V +), reg r191:V, reg p58:p(V +), reg out12:*, reg out13:V, reg p59:p(V +), reg r194:V, reg WINDOWS8:*, reg WINDOWS9:V, reg c43:L, reg npkgs:*, reg npkgs1:V, reg r195:V, reg verbose5:*, reg verbose6:V, reg c44:L, reg setWinProgressBar:cls, reg pb:*, reg pb1:V, reg p60:p(V +), reg npkgs2:*, reg npkgs3:V, reg p61:p(V +), reg r198:V, reg i128:I, reg i129:I, reg i130:I, reg r199:V, reg i131:I, reg i132:I, reg i133:I, reg cat4:cls, reg out14:*, reg out15:V, reg p62:p(V +), reg r202:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r203:V, reg r204:V, reg lib_loc21:*, reg lib_loc22:V, reg length3:cls, reg r205:V, reg r206:V, reg c45:L, reg add_lib_index1:cls, reg lib_loc23:*, reg lib_loc24:V, reg p63:p(V +), reg r208:V, reg cat5:cls, reg out16:*, reg out17:V, reg p64:p(V +), reg r211:V, reg verbose7:*, reg verbose8:V, reg c46:L, reg message1:cls, reg r212:V, reg flush_console1:cls, reg r213:V, reg temp7:*, reg temp8:V, reg c47:L, reg saveRDS:cls, reg lib_loc25:*, reg lib_loc26:V, reg p65:p(V +), reg op4:*, reg op5:V, reg p66:p(V +), reg r217:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r219:V, reg r220:V, reg invisible:cls, reg r221:V |
    mkenv;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0() else L1(lib_loc);
  L0():
    p = prom<V +>{
      _libPaths = ldf `.libPaths`;
      r = dyn _libPaths();
      return r;
    };
    goto L1(p);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    temp_isMissing = missing.0(temp);
    if temp_isMissing then L2(FALSE) else L2(temp);
  L2(temp_orDefault):
    st temp = temp_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L3(TRUE) else L3(verbose);
  L3(verbose_orDefault):
    st verbose = verbose_orDefault;
    docdir_isMissing = missing.0(docdir);
    if docdir_isMissing then L4() else L5(docdir);
  L4():
    p1 = prom<V +>{
      R_home = ldf `R.home`;
      r2 = dyn R_home("doc");
      return r2;
    };
    goto L5(p1);
  L5(docdir_orDefault):
    st docdir = docdir_orDefault;
    r4 = clos inner3839840814;
    st add_lib_index = r4;
    _Platform = ld `.Platform`;
    check L84() else D0();
  D0():
    deopt 3 [_Platform];
  L84():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L86() else L87(_Platform1);
  L85(dx1):
    r6 = `==`(dx1, "windows");
    st WINDOWS = r6;
    temp1 = ld temp;
    check L89() else D1();
  L86():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L88() else L87(dr);
  L87(_Platform3):
    r5 = `$`(_Platform3, <sym OS.type>);
    goto L85(r5);
  D1():
    deopt 9 [temp1];
  L88():
    dx = getTryDispatchBuiltinValue(dr);
    goto L85(dx);
  L89():
    temp2 = force? temp1;
    checkMissing(temp2);
    c1 = `as.logical`(temp2);
    if c1 then L90() else L6();
  L6():
    file_path2 = ldf `file.path`;
    check L96() else D6();
  L7(r15):
    st `f.tg` = r15;
    file_path3 = ldf `file.path`;
    check L98() else D8();
  L90():
    dir_create = ldf `dir.create`;
    check L91() else D2();
  D2():
    deopt 12 [];
  D6():
    deopt 25 [];
  D8():
    deopt 32 [];
  L91():
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        tempdir = ldf tempdir;
        r7 = dyn tempdir();
        return r7;
      };
      r9 = dyn file_path(p2, ".R/doc/html");
      return r9;
    };
    r11 = dyn dir_create[, recursive, showWarnings](p3, TRUE, FALSE);
    check L92() else D3();
  L96():
    p5 = prom<V +>{
      docdir1 = ld docdir;
      docdir2 = force? docdir1;
      checkMissing(docdir2);
      return docdir2;
    };
    r17 = dyn file_path2(p5, "html", "packages.html");
    check L97() else D7();
  L98():
    p6 = prom<V +>{
      tempdir2 = ldf tempdir;
      r18 = dyn tempdir2();
      return r18;
    };
    r20 = dyn file_path3(p6, ".R/doc/html/libPaths.rds");
    check L99() else D9();
  D3():
    deopt 18 [r11];
  D7():
    deopt 29 [r17];
  D9():
    deopt 35 [r20];
  L92():
    file_path1 = ldf `file.path`;
    check L93() else D4();
  L97():
    goto L7(r17);
  L99():
    st op = r20;
    temp3 = ld temp;
    check L100() else D10();
  D4():
    deopt 20 [];
  D10():
    deopt 37 [temp3];
  L93():
    p4 = prom<V +>{
      tempdir1 = ldf tempdir;
      r12 = dyn tempdir1();
      return r12;
    };
    r14 = dyn file_path1(p4, ".R/doc/html/packages.html");
    check L94() else D5();
  L100():
    temp4 = force? temp3;
    checkMissing(temp4);
    c2 = `as.logical`(temp4);
    if c2 then L101() else L8(c2);
  D5():
    deopt 23 [r14];
  L8(c4):
    c8 = `as.logical`(c4);
    if c8 then L105() else L9(c8);
  L94():
    goto L7(r14);
  L101():
    file_exists = ldf `file.exists`;
    check L102() else D11();
  D11():
    deopt 40 [c2];
  L9(c10):
    c14 = `as.logical`(c10);
    if c14 then L109() else L10();
  L102():
    p7 = prom<V +>{
      f_tg = ld `f.tg`;
      f_tg1 = force? f_tg;
      checkMissing(f_tg1);
      return f_tg1;
    };
    r22 = dyn file_exists(p7);
    check L103() else D12();
  L105():
    file_exists1 = ldf `file.exists`;
    check L106() else D13();
  D12():
    deopt 42 [c2, r22];
  D13():
    deopt 45 [c8];
  L10():
    goto L17();
  L17():
    file_create = ldf `file.create`;
    check L128() else D23();
  L103():
    c5 = `as.logical`(r22);
    c6 = `&&`(c2, c5);
    goto L8(c6);
  L106():
    p8 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r24 = dyn file_exists1(p8);
    check L107() else D14();
  L109():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L110() else L111();
  D14():
    deopt 47 [c8, r24];
  D23():
    deopt 89 [];
  L11(r26):
    c15 = `as.logical`(r26);
    if c15 then L116() else L12();
  L107():
    c11 = `as.logical`(r24);
    c12 = `&&`(c8, c11);
    goto L9(c12);
  L110():
    lib_loc1 = ld `lib.loc`;
    check L112() else D15();
  L111():
    r25 = dyn base(<sym lib.loc>, <lang readRDS(op)>);
    goto L11(r25);
  L128():
    p11 = prom<V +>{
      f_tg4 = ld `f.tg`;
      f_tg5 = force? f_tg4;
      checkMissing(f_tg5);
      return f_tg5;
    };
    r44 = dyn file_create(p11);
    check L129() else D24();
  D15():
    deopt 51 [lib_loc1];
  D24():
    deopt 91 [r44];
  L12():
    goto L16(NULL);
  L16(r41):
    goto L17();
  L112():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    readRDS = ldf readRDS;
    check L113() else D16();
  L116():
    file_mtime = ldf `file.mtime`;
    check L117() else D19();
  L129():
    r45 = `!`(r44);
    c18 = `as.logical`(r45);
    if c18 then L130() else L18();
  D16():
    deopt 54 [];
  D19():
    deopt 67 [];
  L18():
    verbose1 = ld verbose;
    check L135() else D27();
  L113():
    p9 = prom<V +>{
      op2 = ld op;
      op3 = force? op2;
      checkMissing(op3);
      return op3;
    };
    r28 = dyn readRDS(p9);
    check L114() else D17();
  L117():
    p10 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      f_tg2 = ld `f.tg`;
      f_tg3 = force? f_tg2;
      checkMissing(f_tg3);
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      c16 = ldf c in base;
      r32 = dyn c16(f_tg3, lib_loc4);
      goto L0(r32);
    L2():
      r30 = dyn base1(<sym f.tg>, <sym lib.loc>);
      goto L0(r30);
    };
    r34 = dyn file_mtime(p10);
    check L118() else D20();
  L130():
    warning = ldf warning;
    check L131() else D25();
  D17():
    deopt 56 [r28];
  D20():
    deopt 69 [r34];
  D25():
    deopt 94 [];
  D27():
    deopt 102 [verbose1];
  L114():
    identical = ldf identical in base;
    r29 = dyn identical(lib_loc2, r28, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L115() else D18();
  L118():
    st dates = r34;
    sym2 = ldf `which.max`;
    base2 = ldf `which.max` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L119() else L120();
  L131():
    r46 = dyn warning("cannot update HTML package index");
    check L132() else D26();
  L135():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c19 = `as.logical`(verbose2);
    if c19 then L136() else L20();
  D18():
    deopt 65 [r29];
  D26():
    deopt 96 [r46];
  L13(r36):
    r38 = `==`(r36, 1);
    c17 = `as.logical`(r38);
    if c17 then L123() else L14();
  L20():
    goto L21();
  L21():
    file_append = ldf `file.append`;
    check L142() else D32();
  L115():
    goto L11(r29);
  L119():
    dates = ld dates;
    check L121() else D21();
  L120():
    r35 = dyn base2(<sym dates>);
    goto L13(r35);
  L132():
    popenv;
    return FALSE;
  L136():
    message = ldf message;
    check L137() else D28();
  D21():
    deopt 73 [dates];
  D28():
    deopt 105 [];
  D32():
    deopt 118 [];
  L14():
    goto L16(NULL);
  L121():
    dates1 = force? dates;
    checkMissing(dates1);
    which_max = ldf `which.max` in base;
    r37 = dyn which_max(dates1);
    check L122() else D22();
  L123():
    popenv;
    return TRUE;
  L137():
    r49 = dyn message[, appendLF, domain]("Making 'packages.html' ...", FALSE, NA_LGL);
    check L138() else D29();
  L142():
    p12 = prom<V +>{
      f_tg6 = ld `f.tg`;
      f_tg7 = force? f_tg6;
      checkMissing(f_tg7);
      return f_tg7;
    };
    p14 = prom<V +>{
      file_path4 = ldf `file.path`;
      p13 = prom<V +>{
        R_home1 = ldf `R.home`;
        r53 = dyn R_home1("doc");
        return r53;
      };
      r55 = dyn file_path4(p13, "html", "packages-head-utf8.html");
      return r55;
    };
    r57 = dyn file_append(p12, p14);
    check L143() else D33();
  D22():
    deopt 76 [r37];
  D29():
    deopt 111 [r49];
  D33():
    deopt 121 [r57];
  L122():
    goto L13(r37);
  L138():
    flush_console = ldf `flush.console`;
    check L139() else D30();
  L143():
    file = ldf file;
    check L144() else D34();
  D30():
    deopt 113 [];
  D34():
    deopt 123 [];
  L139():
    r50 = dyn flush_console();
    check L140() else D31();
  L144():
    p15 = prom<V +>{
      f_tg8 = ld `f.tg`;
      f_tg9 = force? f_tg8;
      checkMissing(f_tg9);
      return f_tg9;
    };
    r59 = dyn file[, open, encoding](p15, "a", "UTF-8");
    check L145() else D35();
  D31():
    deopt 114 [r50];
  D35():
    deopt 129 [r59];
  L140():
    goto L21();
  L145():
    st out = r59;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L146() else L147();
  L22():
    WINDOWS = ld WINDOWS;
    check L148() else D36();
  L146():
    on_exit = ldf `on.exit` in base;
    r62 = dyn on_exit(<lang close(out)>);
    goto L22();
  L147():
    r60 = dyn base3(<lang close(out)>);
    goto L22();
  D36():
    deopt 134 [WINDOWS];
  L148():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    c20 = `as.logical`(WINDOWS1);
    if c20 then L149() else L23();
  L23():
    goto L24();
  L24():
    sym4 = ldf vector;
    base4 = ldf vector in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L155() else L156();
  L149():
    chartr = ldf chartr;
    check L150() else D37();
  D37():
    deopt 137 [];
  L25(r70):
    st pkgs = r70;
    lib_loc7 = ld `lib.loc`;
    check L162() else D44();
  L150():
    p16 = prom<V +>{
      R_home2 = ldf `R.home`;
      r63 = dyn R_home2();
      return r63;
    };
    r65 = dyn chartr("\\", "/", p16);
    check L151() else D38();
  L155():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L157() else L158();
  L156():
    r69 = dyn base4("list", <lang length(lib.loc)>);
    goto L25(r69);
  D38():
    deopt 141 [r65];
  D44():
    deopt 164 [lib_loc7];
  L26(r72):
    vector = ldf vector in base;
    r74 = dyn vector("list", r72);
    check L161() else D43();
  L151():
    st rh = r65;
    substr = ldf substr;
    check L152() else D39();
  L157():
    lib_loc5 = ld `lib.loc`;
    check L159() else D41();
  L158():
    r71 = dyn base5(<sym lib.loc>);
    goto L26(r71);
  L162():
    lib_loc8 = force? lib_loc7;
    checkMissing(lib_loc8);
    l = ld pkgs;
    names__ = ldf `names<-`;
    check L163() else D45();
  D39():
    deopt 144 [];
  D41():
    deopt 157 [lib_loc5];
  D43():
    deopt 162 [r74];
  D45():
    deopt 167 [lib_loc8, l, lib_loc8];
  L152():
    p17 = prom<V +>{
      rh = ld rh;
      rh1 = force? rh;
      checkMissing(rh1);
      return rh1;
    };
    r67 = dyn substr(p17, 1, 2);
    check L153() else D40();
  L159():
    lib_loc6 = force? lib_loc5;
    checkMissing(lib_loc6);
    length = ldf length in base;
    r73 = dyn length(lib_loc6);
    check L160() else D42();
  L161():
    goto L25(r74);
  L163():
    r75 = dyn names__(l, NULL, lib_loc8);
    check L164() else D46();
  D40():
    deopt 148 [r67];
  D42():
    deopt 160 [r73];
  D46():
    deopt 169 [lib_loc8, r75];
  L153():
    st drive = r67;
    goto L24();
  L160():
    goto L26(r73);
  L164():
    st pkgs = r75;
    lib_loc9 = ld `lib.loc`;
    check L165() else D47();
  D47():
    deopt 171 [lib_loc9];
  L165():
    lib_loc10 = force? lib_loc9;
    checkMissing(lib_loc10);
    s = toForSeq(lib_loc10);
    l1 = length(s);
    i = 0;
    goto L27(i);
  L27(i1):
    i2 = `+`.1(i1, 1);
    c21 = `<`.1(l1, i2);
    if c21 then L166() else L30();
  L30():
    x = `[[`(s, i2, NULL, TRUE);
    st lib = x;
    _packages = ldf `.packages`;
    check L167() else D48();
  L166():
    WINDOWS2 = ld WINDOWS;
    check L179() else D54();
  D48():
    deopt 174 [i2];
  D54():
    deopt 197 [WINDOWS2];
  L167():
    p18 = prom<V +>{
      lib = ld lib;
      lib1 = force? lib;
      checkMissing(lib1);
      return lib1;
    };
    r77 = dyn _packages[`all.available`, `lib.loc`](TRUE, p18);
    check L168() else D49();
  L179():
    WINDOWS3 = force? WINDOWS2;
    checkMissing(WINDOWS3);
    c24 = `as.logical`(WINDOWS3);
    if c24 then L180() else L31();
  D49():
    deopt 179 [i2, r77];
  L31():
    goto L36();
  L36():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L194() else L195();
  L168():
    st pg = r77;
    pg = ld pg;
    check L169() else D50();
  L180():
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L181() else L182();
  D50():
    deopt 181 [i2, pg];
  L32(r86):
    st tot = r86;
    verbose3 = ld verbose;
    check L186() else D58();
  L37(r98):
    r100 = `>`(r98, 1);
    c26 = `as.logical`(r100);
    if c26 then L198() else L38();
  L169():
    pg1 = force? pg;
    checkMissing(pg1);
    c22 = `is.object`(pg1);
    if c22 then L170() else L171(i2, pg1);
  L181():
    lengths = ldf lengths;
    check L183() else D55();
  L182():
    r85 = dyn base6(<lang lengths(pkgs)>);
    goto L32(r85);
  L194():
    lib_loc11 = ld `lib.loc`;
    check L196() else D61();
  L195():
    r97 = dyn base8(<sym lib.loc>);
    goto L37(r97);
  D55():
    deopt 202 [];
  D58():
    deopt 208 [verbose3];
  D61():
    deopt 229 [lib_loc11];
  L28(i8, dx3):
    l2 = ld pkgs;
    c23 = `is.object`(l2);
    if c23 then L175() else L176(i8, dx3, l2);
  L38():
    goto L39();
  L39():
    sym9 = ldf seq_along;
    base9 = ldf seq_along in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L202() else L203();
  L170():
    dr2 = tryDispatchBuiltin.1("[", pg1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L172() else L171(i2, dr2);
  L171(i6, pg3):
    order = ldf order;
    check L173() else D51();
  L183():
    p22 = prom<V +>{
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      return pkgs1;
    };
    r88 = dyn lengths(p22);
    check L184() else D56();
  L186():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c25 = `as.logical`(verbose4);
    if c25 then L187() else L33();
  L196():
    lib_loc12 = force? lib_loc11;
    checkMissing(lib_loc12);
    length1 = ldf length in base;
    r99 = dyn length1(lib_loc12);
    check L197() else D62();
  L198():
    add_lib_index = ldf add_lib_index;
    check L199() else D63();
  D51():
    deopt 184 [i6, pg3];
  D56():
    deopt 204 [r88];
  D62():
    deopt 232 [r99];
  D63():
    deopt 236 [];
  L29(i12, dx9):
    st pkgs = dx9;
    goto L27(i12);
  L33():
    goto L35();
  L35():
    st npkgs = 0;
    goto L36();
  L40(r105):
    s1 = toForSeq(r105);
    l5 = length(s1);
    i13 = 0;
    goto L41(i13);
  L172():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(i2, dx2);
  L173():
    p20 = prom<V +>{
      toupper = ldf toupper;
      p19 = prom<V +>{
        pg4 = ld pg;
        pg5 = force? pg4;
        checkMissing(pg5);
        return pg5;
      };
      r79 = dyn toupper(p19);
      return r79;
    };
    p21 = prom<V +>{
      pg6 = ld pg;
      pg7 = force? pg6;
      checkMissing(pg7);
      return pg7;
    };
    r82 = dyn order(p20, p21);
    check L174() else D52();
  L175():
    dr4 = tryDispatchBuiltin.0("[[<-", l2, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L177() else L176(i8, dx3, dr4);
  L176(i10, dx5, l4):
    lib2 = ld lib;
    check L178() else D53();
  L184():
    sum = ldf sum in base;
    r89 = dyn sum(r88);
    check L185() else D57();
  L187():
    winProgressBar = ldf winProgressBar;
    check L188() else D59();
  L197():
    goto L37(r99);
  L199():
    p24 = prom<V +>{
      lib_loc13 = ld `lib.loc`;
      lib_loc14 = force? lib_loc13;
      checkMissing(lib_loc14);
      return lib_loc14;
    };
    r102 = dyn add_lib_index(p24);
    check L200() else D64();
  L202():
    lib_loc15 = ld `lib.loc`;
    check L204() else D65();
  L203():
    r104 = dyn base9(<sym lib.loc>);
    goto L40(r104);
  D52():
    deopt 187 [i6, pg3, r82];
  D53():
    deopt 190 [i10, dx5, l4, dx3, lib2];
  D57():
    deopt 206 [r89];
  D59():
    deopt 211 [];
  D64():
    deopt 238 [r102];
  D65():
    deopt 242 [lib_loc15];
  L41(i14):
    i15 = `+`.1(i14, 1);
    c27 = `<`.1(l5, i15);
    if c27 then L205() else L75();
  L174():
    __ = ldf `[` in base;
    r83 = dyn __(pg3, r82);
    goto L28(i6, r83);
  L177():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L29(i8, dx7);
  L178():
    lib3 = force? lib2;
    ____ = ldf `[[<-` in base;
    r84 = dyn ____(l4, dx3, lib3);
    goto L29(i10, r84);
  L185():
    goto L32(r89);
  L188():
    p23 = prom<V +>{
      tot = ld tot;
      tot1 = force? tot;
      checkMissing(tot1);
      return tot1;
    };
    r91 = dyn winProgressBar[, max]("R: creating packages.html", p23);
    check L189() else D60();
  L200():
    goto L39();
  L204():
    lib_loc16 = force? lib_loc15;
    checkMissing(lib_loc16);
    r106 = seq_along(lib_loc16);
    goto L40(r106);
  D60():
    deopt 215 [r91];
  L75():
    x1 = `[[`(s1, i15, NULL, TRUE);
    st ii = x1;
    lib_loc17 = ld `lib.loc`;
    check L206() else D66();
  L189():
    st pb = r91;
    sym7 = ldf `on.exit`;
    base7 = ldf `on.exit` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L190() else L191();
  L205():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L313() else L314();
  D66():
    deopt 245 [i15, lib_loc17];
  L34(r93):
    goto L35();
  L76(r204):
    r206 = `>`(r204, 1);
    c45 = `as.logical`(r206);
    if c45 then L317() else L77();
  L190():
    on_exit1 = ldf `on.exit` in base;
    r94 = dyn on_exit1(<lang close(pb)>, TRUE);
    goto L34(r94);
  L191():
    r92 = dyn base7[, add](<lang close(pb)>, TRUE);
    goto L34(r92);
  L206():
    lib_loc18 = force? lib_loc17;
    checkMissing(lib_loc18);
    c28 = `is.object`(lib_loc18);
    if c28 then L207() else L208(i15, lib_loc18);
  L313():
    lib_loc21 = ld `lib.loc`;
    check L315() else D130();
  L314():
    r203 = dyn base15(<sym lib.loc>);
    goto L76(r203);
  D130():
    deopt 495 [lib_loc21];
  L42(i21, dx11):
    st lib = dx11;
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L211() else L212();
  L77():
    goto L78();
  L78():
    cat5 = ldf cat;
    check L321() else D134();
  L207():
    dr6 = tryDispatchBuiltin.1("[", lib_loc18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L209() else L208(i15, dr6);
  L208(i19, lib_loc20):
    ii = ld ii;
    check L210() else D67();
  L315():
    lib_loc22 = force? lib_loc21;
    checkMissing(lib_loc22);
    length3 = ldf length in base;
    r205 = dyn length3(lib_loc22);
    check L316() else D131();
  L317():
    add_lib_index1 = ldf add_lib_index;
    check L318() else D132();
  D67():
    deopt 247 [i19, lib_loc20, ii];
  D131():
    deopt 498 [r205];
  D132():
    deopt 502 [];
  D134():
    deopt 508 [];
  L43(i24, r109):
    c29 = `as.logical`(r109);
    if c29 then L216() else L44();
  L209():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L42(i15, dx10);
  L210():
    ii1 = force? ii;
    __1 = ldf `[` in base;
    r107 = dyn __1(lib_loc20, ii1);
    goto L42(i19, r107);
  L211():
    lib4 = ld lib;
    check L213() else D68();
  L212():
    r108 = dyn base10(<sym lib>, <sym .Library>);
    goto L43(i21, r108);
  L316():
    goto L76(r205);
  L318():
    p63 = prom<V +>{
      lib_loc23 = ld `lib.loc`;
      lib_loc24 = force? lib_loc23;
      checkMissing(lib_loc24);
      return lib_loc24;
    };
    r208 = dyn add_lib_index1(p63);
    check L319() else D133();
  L321():
    p64 = prom<V +>{
      out16 = ld out;
      out17 = force? out16;
      checkMissing(out17);
      return out17;
    };
    r211 = dyn cat5[, file]("</div></body>\n</html>\n", p64);
    check L322() else D135();
  D68():
    deopt 253 [i21, lib4];
  D133():
    deopt 504 [r208];
  D135():
    deopt 512 [r211];
  L44():
    WINDOWS4 = ld WINDOWS;
    check L218() else D71();
  L45(i27, r111):
    st libname = r111;
    cat = ldf cat;
    check L224() else D75();
  L213():
    lib5 = force? lib4;
    checkMissing(lib5);
    _Library = ld `.Library`;
    check L214() else D69();
  L216():
    goto L45(i24, "the standard library");
  L319():
    goto L78();
  L322():
    verbose7 = ld verbose;
    check L323() else D136();
  D69():
    deopt 255 [i21, _Library];
  D71():
    deopt 268 [i24, WINDOWS4];
  D75():
    deopt 280 [i27];
  D136():
    deopt 513 [verbose7];
  L214():
    _Library1 = force? _Library;
    checkMissing(_Library1);
    identical1 = ldf identical in base;
    r110 = dyn identical1(lib5, _Library1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L215() else D70();
  L218():
    WINDOWS5 = force? WINDOWS4;
    checkMissing(WINDOWS5);
    c30 = `as.logical`(WINDOWS5);
    if c30 then L219() else L46();
  L224():
    p26 = prom<V +>{
      ii2 = ld ii;
      ii3 = force? ii2;
      checkMissing(ii3);
      return ii3;
    };
    p27 = prom<V +>{
      libname = ld libname;
      libname1 = force? libname;
      checkMissing(libname1);
      return libname1;
    };
    p28 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r117 = dyn cat[, , , , , sep, file]("<h3 id=\"lib-", p26, "\">Packages in ", p27, "</h3>\n", "", p28);
    check L225() else D76();
  L323():
    verbose8 = force? verbose7;
    checkMissing(verbose8);
    c46 = `as.logical`(verbose8);
    if c46 then L324() else L79();
  D70():
    deopt 265 [i21, r110];
  D76():
    deopt 290 [i27, r117];
  L46():
    lib8 = ld lib;
    check L223() else D74();
  L79():
    goto L80();
  L80():
    temp7 = ld temp;
    check L330() else D141();
  L215():
    goto L43(i21, r110);
  L219():
    chartr1 = ldf chartr;
    check L220() else D72();
  L225():
    st lib0 = "../../library";
    temp5 = ld temp;
    check L226() else D77();
  L324():
    message1 = ldf message;
    check L325() else D137();
  D72():
    deopt 271 [i24];
  D74():
    deopt 276 [i24, lib8];
  D77():
    deopt 294 [i27, temp5];
  D137():
    deopt 516 [];
  D141():
    deopt 525 [temp7];
  L220():
    p25 = prom<V +>{
      lib6 = ld lib;
      lib7 = force? lib6;
      checkMissing(lib7);
      return lib7;
    };
    r113 = dyn chartr1("/", "\\", p25);
    check L221() else D73();
  L223():
    lib9 = force? lib8;
    checkMissing(lib9);
    goto L45(i24, lib9);
  L226():
    temp6 = force? temp5;
    checkMissing(temp6);
    r118 = `!`(temp6);
    c31 = `as.logical`(r118);
    if c31 then L227() else L47();
  L325():
    r212 = dyn message1(" ", "done");
    check L326() else D138();
  L330():
    temp8 = force? temp7;
    checkMissing(temp8);
    c47 = `as.logical`(temp8);
    if c47 then L331() else L81();
  D73():
    deopt 275 [i24, r113];
  D138():
    deopt 519 [r212];
  L47():
    goto L56(i27);
  L56(i46):
    pkgs2 = ld pkgs;
    check L254() else D93();
  L81():
    goto L82();
  L82():
    sym16 = ldf invisible;
    base16 = ldf invisible in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L335() else L336();
  L221():
    goto L45(i24, r113);
  L227():
    WINDOWS6 = ld WINDOWS;
    check L228() else D78();
  L326():
    flush_console1 = ldf `flush.console`;
    check L327() else D139();
  L331():
    saveRDS = ldf saveRDS;
    check L332() else D142();
  D78():
    deopt 297 [i27, WINDOWS6];
  D93():
    deopt 346 [i46, pkgs2];
  D139():
    deopt 521 [];
  D142():
    deopt 528 [];
  L83(r220):
    popenv;
    return r220;
  L228():
    WINDOWS7 = force? WINDOWS6;
    checkMissing(WINDOWS7);
    c32 = `as.logical`(WINDOWS7);
    if c32 then L229() else L48();
  L254():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    c36 = `is.object`(pkgs3);
    if c36 then L255() else L256(i46, pkgs3);
  L327():
    r213 = dyn flush_console1();
    check L328() else D140();
  L332():
    p65 = prom<V +>{
      lib_loc25 = ld `lib.loc`;
      lib_loc26 = force? lib_loc25;
      checkMissing(lib_loc26);
      return lib_loc26;
    };
    p66 = prom<V +>{
      op4 = ld op;
      op5 = force? op4;
      checkMissing(op5);
      return op5;
    };
    r217 = dyn saveRDS(p65, p66);
    check L333() else D143();
  L335():
    invisible = ldf invisible in base;
    r221 = dyn invisible(TRUE);
    check L337() else D144();
  L336():
    r219 = dyn base16(TRUE);
    goto L83(r219);
  D140():
    deopt 522 [r213];
  D143():
    deopt 531 [r217];
  D144():
    deopt 538 [r221];
  L48():
    lib20 = ld lib;
    check L247() else D89();
  L54(i43, r137):
    goto L56(i43);
  L57(i50, dx13):
    st pg = dx13;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L259() else L260();
  L229():
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L230() else L231();
  L255():
    dr8 = tryDispatchBuiltin.1("[[", pkgs3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L257() else L256(i46, dr8);
  L256(i48, pkgs5):
    lib24 = ld lib;
    check L258() else D94();
  L328():
    goto L80();
  L333():
    goto L82();
  L337():
    goto L83(r221);
  D89():
    deopt 332 [i27, lib20];
  D94():
    deopt 348 [i48, pkgs5, lib24];
  L49(i36, r120):
    c33 = `as.logical`(r120);
    if c33 then L235() else L50();
  L58(i53, r146):
    r148 = `>`(r146, 100.0);
    st use_alpha = r148;
    toupper1 = ldf toupper;
    check L263() else D97();
  L230():
    pmatch = ldf pmatch;
    check L232() else D79();
  L231():
    r119 = dyn base11(<lang pmatch(rh, lib)>);
    goto L49(i27, r119);
  L247():
    lib21 = force? lib20;
    checkMissing(lib21);
    _Library2 = ld `.Library`;
    check L248() else D90();
  L257():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L57(i46, dx12);
  L258():
    lib25 = force? lib24;
    __2 = ldf `[[` in base;
    r144 = dyn __2(pkgs5, lib25);
    goto L57(i48, r144);
  L259():
    pg8 = ld pg;
    check L261() else D95();
  L260():
    r145 = dyn base12(<sym pg>);
    goto L58(i50, r145);
  D79():
    deopt 302 [i27];
  D90():
    deopt 333 [i27, lib21, _Library2];
  D95():
    deopt 354 [i50, pg8];
  D97():
    deopt 362 [i53];
  L50():
    goto L53(i36, NULL);
  L53(i42, r136):
    goto L54(i42, r136);
  L232():
    p29 = prom<V +>{
      rh2 = ld rh;
      rh3 = force? rh2;
      checkMissing(rh3);
      return rh3;
    };
    p30 = prom<V +>{
      lib10 = ld lib;
      lib11 = force? lib10;
      checkMissing(lib11);
      return lib11;
    };
    r123 = dyn pmatch(p29, p30);
    check L233() else D80();
  L235():
    substr1 = ldf substr;
    check L236() else D82();
  L248():
    _Library3 = force? _Library2;
    checkMissing(_Library3);
    r138 = `!=`(lib21, _Library3);
    c35 = `as.logical`(r138);
    if c35 then L249() else L55();
  L261():
    pg9 = force? pg8;
    checkMissing(pg9);
    length2 = ldf length in base;
    r147 = dyn length2(pg9);
    check L262() else D96();
  L263():
    p39 = prom<V +>{
      substr2 = ldf substr;
      p38 = prom<V +>{
        pg10 = ld pg;
        pg11 = force? pg10;
        checkMissing(pg11);
        return pg11;
      };
      r150 = dyn substr2(p38, 1.0, 1.0);
      return r150;
    };
    r152 = dyn toupper1(p39);
    check L264() else D98();
  D80():
    deopt 305 [i27, r123];
  D82():
    deopt 309 [i36];
  D96():
    deopt 357 [i50, r147];
  D98():
    deopt 364 [i53, r152];
  L55():
    goto L54(i27, NULL);
  L233():
    is_na = ldf `is.na` in base;
    r124 = dyn is_na(r123);
    check L234() else D81();
  L236():
    p31 = prom<V +>{
      lib12 = ld lib;
      lib13 = force? lib12;
      checkMissing(lib13);
      return lib13;
    };
    r126 = dyn substr1(p31, 2, 2);
    check L237() else D83();
  L249():
    paste2 = ldf paste0;
    check L250() else D91();
  L262():
    goto L58(i50, r147);
  L264():
    st first = r152;
    sort = ldf sort;
    check L265() else D99();
  D81():
    deopt 307 [i27, r124];
  D83():
    deopt 313 [i36, r126];
  D91():
    deopt 337 [i27];
  D99():
    deopt 367 [i53];
  L234():
    goto L49(i27, r124);
  L237():
    r127 = `!=`(r126, ":");
    c34 = `as.logical`(r127);
    if c34 then L238() else L51();
  L250():
    p37 = prom<V +>{
      URLencode1 = ldf URLencode;
      p36 = prom<V +>{
        lib22 = ld lib;
        lib23 = force? lib22;
        checkMissing(lib23);
        return lib23;
      };
      r140 = dyn URLencode1(p36);
      return r140;
    };
    r142 = dyn paste2("file:///", p37);
    check L251() else D92();
  L265():
    p41 = prom<V +>{
      sym13 = ldf names;
      base13 = ldf names in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r154):
      return r154;
    L1():
      table = ldf table;
      p40 = prom<V +>{
        first = ld first;
        first1 = force? first;
        checkMissing(first1);
        return first1;
      };
      r156 = dyn table(p40);
      names = ldf names in base;
      r157 = dyn names(r156);
      goto L0(r157);
    L2():
      r153 = dyn base13(<lang table(first)>);
      goto L0(r153);
    };
    r159 = dyn sort(p41);
    check L266() else D100();
  D92():
    deopt 340 [i27, r142];
  D100():
    deopt 369 [i53, r159];
  L51():
    lib16 = ld lib;
    check L242() else D86();
  L52(i41, r131):
    st lib0 = r131;
    paste1 = ldf paste0;
    check L243() else D87();
  L238():
    paste0 = ldf paste0;
    check L239() else D84();
  L251():
    st lib0 = r142;
    goto L54(i27, r142);
  L266():
    st nm = r159;
    use_alpha = ld use_alpha;
    check L267() else D101();
  D84():
    deopt 317 [i36];
  D86():
    deopt 321 [i36, lib16];
  D87():
    deopt 325 [i41];
  D101():
    deopt 371 [i53, use_alpha];
  L239():
    p32 = prom<V +>{
      drive = ld drive;
      drive1 = force? drive;
      checkMissing(drive1);
      return drive1;
    };
    p33 = prom<V +>{
      lib14 = ld lib;
      lib15 = force? lib14;
      checkMissing(lib15);
      return lib15;
    };
    r130 = dyn paste0(p32, p33);
    check L240() else D85();
  L242():
    lib17 = force? lib16;
    checkMissing(lib17);
    goto L52(i36, lib17);
  L243():
    p35 = prom<V +>{
      URLencode = ldf URLencode;
      p34 = prom<V +>{
        lib18 = ld lib0;
        lib19 = force? lib18;
        checkMissing(lib19);
        return lib19;
      };
      r133 = dyn URLencode(p34);
      return r133;
    };
    r135 = dyn paste1("file:///", p35);
    check L244() else D88();
  L267():
    use_alpha1 = force? use_alpha;
    checkMissing(use_alpha1);
    c37 = `as.logical`(use_alpha1);
    if c37 then L268() else L59();
  D85():
    deopt 320 [i36, r130];
  D88():
    deopt 328 [i41, r135];
  L59():
    goto L60(i53);
  L60(i56):
    cat1 = ldf cat;
    check L276() else D108();
  L240():
    goto L52(i36, r130);
  L244():
    st lib0 = r135;
    goto L53(i41, r135);
  L268():
    writeLines = ldf writeLines;
    check L269() else D102();
  D102():
    deopt 374 [i53];
  D108():
    deopt 391 [i56];
  L269():
    p42 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r161 = dyn writeLines("<p style=\"text-align: center;\">", p42);
    check L270() else D103();
  L276():
    p48 = prom<V +>{
      out8 = ld out;
      out9 = force? out8;
      checkMissing(out9);
      return out9;
    };
    r172 = dyn cat1[, file]("<table style=\"width: 100%;\">\n", p48);
    check L277() else D109();
  D103():
    deopt 377 [i53, r161];
  D109():
    deopt 395 [i56, r172];
  L270():
    writeLines1 = ldf writeLines;
    check L271() else D104();
  L277():
    nm4 = ld nm;
    check L278() else D110();
  D104():
    deopt 379 [i53];
  D110():
    deopt 396 [i56, nm4];
  L271():
    p45 = prom<V +>{
      paste3 = ldf paste0;
      p43 = prom<V +>{
        nm = ld nm;
        nm1 = force? nm;
        checkMissing(nm1);
        return nm1;
      };
      p44 = prom<V +>{
        nm2 = ld nm;
        nm3 = force? nm2;
        checkMissing(nm3);
        return nm3;
      };
      r164 = dyn paste3("<a href=\"#pkgs-", p43, "\">", p44, "</a>");
      return r164;
    };
    p46 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r167 = dyn writeLines1(p45, p46);
    check L272() else D105();
  L278():
    nm5 = force? nm4;
    checkMissing(nm5);
    s2 = toForSeq(nm5);
    l6 = length(s2);
    i57 = 0;
    goto L61(i56, i57);
  D105():
    deopt 382 [i53, r167];
  L61(i58, i59):
    i60 = `+`.1(i59, 1);
    c38 = `<`.1(l6, i60);
    if c38 then L279() else L74();
  L272():
    writeLines2 = ldf writeLines;
    check L273() else D106();
  D106():
    deopt 384 [i53];
  L74():
    x2 = `[[`(s2, i60, NULL, TRUE);
    st a = x2;
    use_alpha2 = ld use_alpha;
    check L280() else D111();
  L273():
    p47 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      return out7;
    };
    r169 = dyn writeLines2("</p>\n", p47);
    check L274() else D107();
  L279():
    cat4 = ldf cat;
    check L311() else D128();
  D107():
    deopt 387 [i53, r169];
  D111():
    deopt 398 [i58, i60, use_alpha2];
  D128():
    deopt 485 [i58];
  L274():
    goto L60(i53);
  L280():
    use_alpha3 = force? use_alpha2;
    checkMissing(use_alpha3);
    c39 = `as.logical`(use_alpha3);
    if c39 then L281() else L62();
  L311():
    p62 = prom<V +>{
      out14 = ld out;
      out15 = force? out14;
      checkMissing(out15);
      return out15;
    };
    r202 = dyn cat4[, file]("</table>\n\n", p62);
    check L312() else D129();
  D129():
    deopt 489 [i58, r202];
  L62():
    goto L63(i58, i60);
  L63(i69, i70):
    pg12 = ld pg;
    check L285() else D114();
  L281():
    cat2 = ldf cat;
    check L282() else D112();
  L312():
    goto L41(i58);
  D112():
    deopt 401 [i58, i60];
  D114():
    deopt 412 [i69, i70, pg12];
  L282():
    p49 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    p50 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      return out11;
    };
    r175 = dyn cat2[, , , sep, file]("<tr id=\"pkgs-", p49, "\"> <td></td>\n", "", p50);
    check L283() else D113();
  L285():
    pg13 = force? pg12;
    checkMissing(pg13);
    c40 = `is.object`(pg13);
    if c40 then L286() else L287(i69, i70, pg13);
  D113():
    deopt 409 [i58, i60, r175];
  L64(i77, i78, dx15):
    s3 = toForSeq(dx15);
    l7 = length(s3);
    i79 = 0;
    goto L65(i77, i78, i79);
  L283():
    goto L63(i58, i60);
  L286():
    dr10 = tryDispatchBuiltin.1("[", pg13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L288() else L287(i69, i70, dr10);
  L287(i73, i74, pg15):
    first2 = ld first;
    check L289() else D115();
  D115():
    deopt 414 [i73, i74, pg15, first2];
  L65(i80, i81, i82):
    i83 = `+`.1(i82, 1);
    c41 = `<`.1(l7, i83);
    if c41 then L291() else L73();
  L288():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L64(i69, i70, dx14);
  L289():
    first3 = force? first2;
    checkMissing(first3);
    a2 = ld a;
    check L290() else D116();
  D116():
    deopt 415 [i73, i74, pg15, first3, a2];
  L73():
    x3 = `[[`(s3, i83, NULL, TRUE);
    st i = x3;
    packageDescription = ldf packageDescription;
    check L292() else D117();
  L290():
    a3 = force? a2;
    checkMissing(a3);
    r177 = `==`(first3, a3);
    __3 = ldf `[` in base;
    r178 = dyn __3(pg15, r177);
    goto L64(i73, i74, r178);
  L291():
    goto L61(i80, i81);
  D117():
    deopt 420 [i80, i81, i83];
  L292():
    p51 = prom<V +>{
      i90 = ld i;
      i91 = force? i90;
      checkMissing(i91);
      return i91;
    };
    p52 = prom<V +>{
      lib26 = ld lib;
      lib27 = force? lib26;
      checkMissing(lib27);
      return lib27;
    };
    r181 = dyn packageDescription[, `lib.loc`, fields, encoding](p51, p52, "Title", "UTF-8");
    check L293() else D118();
  D118():
    deopt 428 [i80, i81, i83, r181];
  L293():
    st title = r181;
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L294() else L295();
  L66(i98, i99, i100, r183):
    c42 = `as.logical`(r183);
    if c42 then L298() else L67();
  L294():
    title = ld title;
    check L296() else D119();
  L295():
    r182 = dyn base14(<sym title>);
    goto L66(i80, i81, i83, r182);
  D119():
    deopt 432 [i80, i81, i83, title];
  L67():
    goto L68(i98, i99, i100);
  L68(i107, i108, i109):
    cat3 = ldf cat;
    check L300() else D121();
  L296():
    title1 = force? title;
    checkMissing(title1);
    is_na1 = ldf `is.na` in base;
    r184 = dyn is_na1(title1);
    check L297() else D120();
  L298():
    st title = "-- Title is missing --";
    goto L68(i98, i99, i100);
  D120():
    deopt 435 [i80, i81, i83, r184];
  D121():
    deopt 442 [i107, i108, i109];
  L297():
    goto L66(i80, i81, i83, r184);
  L300():
    p53 = prom<V +>{
      i110 = ld i;
      i111 = force? i110;
      checkMissing(i111);
      return i111;
    };
    p54 = prom<V +>{
      lib28 = ld lib0;
      lib29 = force? lib28;
      checkMissing(lib29);
      return lib29;
    };
    p55 = prom<V +>{
      i112 = ld i;
      i113 = force? i112;
      checkMissing(i113);
      return i113;
    };
    p56 = prom<V +>{
      i114 = ld i;
      i115 = force? i114;
      checkMissing(i115);
      return i115;
    };
    p58 = prom<V +>{
      gsub = ldf gsub;
      p57 = prom<V +>{
        title2 = ld title;
        title3 = force? title2;
        checkMissing(title3);
        return title3;
      };
      r191 = dyn gsub("&", "&amp;", p57);
      return r191;
    };
    p59 = prom<V +>{
      out12 = ld out;
      out13 = force? out12;
      checkMissing(out13);
      return out13;
    };
    r194 = dyn cat3[, , , , , , , , , , , , file, sep]("<tr style=\"text-align: left; vertical-align: top;\" id=\"lib-", p53, "\">\n", "<td style=\"width: 25%;\"><a href=\"", p54, "/", p55, "/html/00Index.html\">", p56, "</a></td><td>", p58, "</td></tr>\n", p59, "");
    check L301() else D122();
  D122():
    deopt 459 [i107, i108, i109, r194];
  L301():
    WINDOWS8 = ld WINDOWS;
    check L302() else D123();
  D123():
    deopt 460 [i107, i108, i109, WINDOWS8];
  L302():
    WINDOWS9 = force? WINDOWS8;
    checkMissing(WINDOWS9);
    c43 = `as.logical`(WINDOWS9);
    if c43 then L303() else L69();
  L69():
    goto L72(i107, i108, i109);
  L72(i131, i132, i133):
    goto L65(i131, i132, i133);
  L303():
    npkgs = ld npkgs;
    check L304() else D124();
  D124():
    deopt 462 [i107, i108, i109, npkgs];
  L304():
    npkgs1 = force? npkgs;
    checkMissing(npkgs1);
    r195 = `+`(npkgs1, 1);
    st npkgs = r195;
    verbose5 = ld verbose;
    check L305() else D125();
  D125():
    deopt 467 [i107, i108, i109, verbose5];
  L305():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    c44 = `as.logical`(verbose6);
    if c44 then L306() else L70();
  L70():
    goto L71(i107, i108, i109, NULL);
  L71(i128, i129, i130, r199):
    goto L72(i128, i129, i130);
  L306():
    setWinProgressBar = ldf setWinProgressBar;
    check L307() else D126();
  D126():
    deopt 470 [i107, i108, i109];
  L307():
    p60 = prom<V +>{
      pb = ld pb;
      pb1 = force? pb;
      checkMissing(pb1);
      return pb1;
    };
    p61 = prom<V +>{
      npkgs2 = ld npkgs;
      npkgs3 = force? npkgs2;
      checkMissing(npkgs3);
      return npkgs3;
    };
    r198 = dyn setWinProgressBar(p60, p61);
    check L308() else D127();
  D127():
    deopt 473 [i107, i108, i109, r198];
  L308():
    goto L71(i107, i108, i109, r198);
  }
}
fun inner3839840814(libs) {
  (reg libs:*) -+> V { var libs:*, reg cat:cls, reg out:*, reg out1:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg libs1:*, reg libs2:V, reg r4:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg libs3:*, reg libs4:V, reg c1:L, reg i6:I, reg libs6:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r5:V, reg nm:*, reg nm1:V, reg _Library:*, reg _Library1:V, reg r6:V, reg c2:L, reg cat1:cls, reg i13:*, reg i14:V, reg p1:p(V +), reg out2:*, reg out3:V, reg p2:p(V +), reg r9:V, reg i15:I, reg cat2:cls, reg i16:*, reg i17:V, reg p3:p(V +), reg nm2:*, reg nm3:V, reg p4:p(V +), reg out4:*, reg out5:V, reg p5:p(V +), reg r14:V, reg cat3:cls, reg out6:*, reg out7:V, reg p6:p(V +), reg r16:V |
    mkenv;
    st libs = libs;
    cat = ldf cat;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r1 = dyn cat[, file]("<div style=\"text-align: left;\">\n<ul>\n", p);
    check L7() else D1();
  D1():
    deopt 5 [r1];
  L7():
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r3):
    s = toForSeq(r3);
    l = length(s);
    i = 0;
    goto L1(i);
  L8():
    libs1 = ld libs;
    check L10() else D2();
  L9():
    r2 = dyn base(<sym libs>);
    goto L0(r2);
  D2():
    deopt 7 [libs1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L11() else L5();
  L10():
    libs2 = force? libs1;
    checkMissing(libs2);
    r4 = seq_along(libs2);
    goto L0(r4);
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    libs3 = ld libs;
    check L12() else D3();
  L11():
    cat3 = ldf cat;
    check L25() else D11();
  D3():
    deopt 10 [i2, libs3];
  D11():
    deopt 47 [];
  L12():
    libs4 = force? libs3;
    checkMissing(libs4);
    c1 = `is.object`(libs4);
    if c1 then L13() else L14(i2, libs4);
  L25():
    p6 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      return out7;
    };
    r16 = dyn cat3[, file]("</ul>\n</div>\n", p6);
    check L26() else D12();
  D12():
    deopt 51 [r16];
  L2(i8, dx1):
    st nm = dx1;
    nm = ld nm;
    check L17() else D5();
  L13():
    dr = tryDispatchBuiltin.1("[", libs4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(i2, dr);
  L14(i6, libs6):
    i9 = ld i;
    check L16() else D4();
  L26():
    popenv;
    return r16;
  D4():
    deopt 12 [i6, libs6, i9];
  D5():
    deopt 16 [i8, nm];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L16():
    i10 = force? i9;
    __ = ldf `[` in base;
    r5 = dyn __(libs6, i10);
    goto L2(i6, r5);
  L17():
    nm1 = force? nm;
    checkMissing(nm1);
    _Library = ld `.Library`;
    check L18() else D6();
  D6():
    deopt 17 [i8, nm1, _Library];
  L18():
    _Library1 = force? _Library;
    checkMissing(_Library1);
    r6 = `==`(nm1, _Library1);
    c2 = `as.logical`(r6);
    if c2 then L19() else L3();
  L3():
    cat2 = ldf cat;
    check L23() else D9();
  L4(i15):
    goto L1(i15);
  L19():
    cat1 = ldf cat;
    check L20() else D7();
  D7():
    deopt 21 [i8];
  D9():
    deopt 32 [i8];
  L20():
    p1 = prom<V +>{
      i13 = ld i;
      i14 = force? i13;
      checkMissing(i14);
      return i14;
    };
    p2 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r9 = dyn cat1[, , , , sep, file]("<li>Contents of the <a href=\"#lib-", p1, "\">", "standard</a> library</li>\n", "", p2);
    check L21() else D8();
  L23():
    p3 = prom<V +>{
      i16 = ld i;
      i17 = force? i16;
      checkMissing(i17);
      return i17;
    };
    p4 = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    p5 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r14 = dyn cat2[, , , , , sep, file]("<li>Contents of <a href=\"#lib-", p3, "\">", p4, "</a></li>\n", "", p5);
    check L24() else D10();
  D8():
    deopt 30 [i8, r9];
  D10():
    deopt 42 [i8, r14];
  L21():
    goto L4(i8);
  L24():
    goto L4(i8);
  }
}