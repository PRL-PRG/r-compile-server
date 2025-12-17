fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3582815416;
    st packageDescription = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3582815416(pkg, `lib.loc`, fields, drop, encoding) {
  (reg pkg:*, reg lib_loc:*, reg fields:*, reg drop:*, reg encoding:*) -+> V { var pkg:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var fields:*, reg fields_isMissing:L, reg fields_orDefault:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg fields1:*, reg fields2:V, reg c:V, reg r5:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg fields3:*, reg fields4:V, reg as_character:cls, reg r8:V, reg l:*, reg c2:L, reg r10:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r12:L, reg dx1:V, reg fields5:*, reg fields6:V, reg ___:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg lib_loc1:*, reg lib_loc2:V, reg c3:V, reg c4:L, reg pkg1:*, reg pkg2:V, reg r17:V, reg c5:L, reg file_path:cls, reg _Library:*, reg _Library1:V, reg p:p(V +), reg r19:V, reg r20:V, reg isNamespaceLoaded:cls, reg pkg3:*, reg pkg4:V, reg p1:p(V +), reg r22:V, reg c6:L, reg getNamespaceInfo:cls, reg pkg5:*, reg pkg6:V, reg p2:p(V +), reg r24:V, reg _in_:cls, reg paste0:cls, reg pkg7:*, reg pkg8:V, reg p3:p(V +), reg r26:V, reg p4:p(V +), reg search:cls, reg r28:V, reg p5:p(V +), reg r30:V, reg c7:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg envname:*, reg envname1:V, reg as_environment:cls, reg r35:V, reg attr:cls, reg r36:V, reg r37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg pkgpath:*, reg pkgpath1:V, reg c8:V, reg c9:L, reg pkgpath2:*, reg pkgpath3:V, reg r41:V, reg c10:L, reg ____:cls, reg lib_loc3:*, reg lib_loc4:V, reg p6:p(V +), reg _libPaths:cls, reg r43:V, reg p7:p(V +), reg r45:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c11:L, reg x:V, reg file_access:cls, reg file_path1:cls, reg lib:*, reg lib1:V, reg p8:p(V +), reg pkg9:*, reg pkg10:V, reg p9:p(V +), reg r48:V, reg p10:p(V +), reg r50:V, reg r51:V, reg c12:L, reg file_path2:cls, reg lib2:*, reg lib3:V, reg p11:p(V +), reg pkg11:*, reg pkg12:V, reg p12:p(V +), reg r54:V, reg i7:I, reg pkgpath4:*, reg pkgpath5:V, reg r56:V, reg c13:L, reg warning:cls, reg gettextf:cls, reg pkg13:*, reg pkg14:V, reg p13:p(V +), reg r58:V, reg p14:p(V +), reg r60:V, reg file_exists:cls, reg file_path3:cls, reg pkgpath6:*, reg pkgpath7:V, reg p15:p(V +), reg r64:V, reg p16:p(V +), reg r66:V, reg c14:L, reg readRDS:cls, reg file:*, reg file1:V, reg p17:p(V +), reg r68:V, reg c15:L, reg r70:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r71:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r72:V, reg r73:V, reg desc:*, reg desc1:V, reg length:cls, reg r74:V, reg r75:V, reg c16:L, reg stop:cls, reg gettextf1:cls, reg pkg15:*, reg pkg16:V, reg p18:p(V +), reg r77:V, reg p19:p(V +), reg r79:V, reg as_list:cls, reg desc2:*, reg desc3:V, reg p20:p(V +), reg r82:V, reg file_exists1:cls, reg file_path4:cls, reg pkgpath8:*, reg pkgpath9:V, reg p21:p(V +), reg r85:V, reg p22:p(V +), reg r87:V, reg c17:L, reg read_dcf:cls, reg file2:*, reg file3:V, reg p23:p(V +), reg r89:V, reg NROW:cls, reg dcf:*, reg dcf1:V, reg p24:p(V +), reg r91:V, reg r92:V, reg c18:L, reg stop1:cls, reg gettextf2:cls, reg pkg17:*, reg pkg18:V, reg p25:p(V +), reg r94:V, reg p26:p(V +), reg r96:V, reg as_list1:cls, reg dcf2:*, reg dcf3:V, reg c19:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __:cls, reg r98:V, reg p27:p(V +), reg r100:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r101:V, reg r102:V, reg file4:*, reg file5:V, reg nzchar:cls, reg r103:V, reg c20:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r104:V, reg r105:V, reg desc4:*, reg desc5:V, reg c21:L, reg desc7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r106:V, reg c22:V, reg c23:L, reg c24:V, reg pkgname:*, reg pkgname1:V, reg pkg19:*, reg pkg20:V, reg r107:V, reg c26:L, reg c27:V, reg c29:L, reg warning1:cls, reg gettextf3:cls, reg pkg21:*, reg pkg22:V, reg p28:p(V +), reg r109:V, reg p29:p(V +), reg r111:V, reg desc8:*, reg desc9:V, reg c30:L, reg desc11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r114:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r115:V, reg r116:V, reg enc:*, reg enc1:V, reg c31:V, reg r117:V, reg c32:L, reg c34:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r118:V, reg c37:L, reg r119:V, reg encoding1:*, reg encoding2:V, reg is_na:cls, reg r120:V, reg r121:V, reg c38:L, reg c39:V, reg c41:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r122:V, reg r123:V, reg missing:cls, reg r124:V, reg c42:L, reg c44:V, reg Sys_getlocale:cls, reg r125:V, reg r126:V, reg c45:L, reg c46:V, reg c48:L, reg encoding3:*, reg encoding4:V, reg enc2:*, reg enc3:V, reg r128:V, reg c49:L, reg try:cls, reg lapply:cls, reg desc12:*, reg desc13:V, reg p30:p(V +), reg iconv:*, reg iconv1:V, reg p31:p(V +), reg enc4:*, reg enc5:V, reg p32:p(V +), reg encoding5:*, reg encoding6:V, reg p33:p(V +), reg r133:V, reg p34:p(V +), reg r135:V, reg r136:cls, reg dOk:cls, reg newdesc:*, reg newdesc1:V, reg p35:p(V +), reg r138:V, reg ok:*, reg ok1:V, reg r139:V, reg c50:L, reg c52:V, reg endsWith:cls, reg encoding7:*, reg encoding8:V, reg p36:p(V +), reg r141:V, reg r142:V, reg c53:L, reg c54:V, reg c56:L, reg dOk1:cls, reg try1:cls, reg lapply1:cls, reg desc14:*, reg desc15:V, reg p37:p(V +), reg iconv2:*, reg iconv3:V, reg p38:p(V +), reg enc6:*, reg enc7:V, reg p39:p(V +), reg paste1:cls, reg encoding9:*, reg encoding10:V, reg p40:p(V +), reg r147:V, reg p41:p(V +), reg r149:V, reg p42:p(V +), reg r151:V, reg p43:p(V +), reg r153:V, reg ok2:*, reg ok3:V, reg r155:V, reg c57:L, reg dOk2:cls, reg try2:cls, reg lapply2:cls, reg desc16:*, reg desc17:V, reg p44:p(V +), reg iconv4:*, reg iconv5:V, reg p45:p(V +), reg enc8:*, reg enc9:V, reg p46:p(V +), reg r159:V, reg p47:p(V +), reg r161:V, reg p48:p(V +), reg r163:V, reg ok4:*, reg ok5:V, reg c58:L, reg newdesc2:*, reg newdesc3:V, reg newdesc4:V, reg warning2:cls, reg r165:V, reg newdesc5:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r166:V, reg r167:V, reg fields7:*, reg fields8:V, reg c59:V, reg r168:V, reg c60:L, reg _in_1:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r169:V, reg r170:V, reg desc18:*, reg desc19:V, reg names:cls, reg r171:V, reg p49:p(V +), reg fields9:*, reg fields10:V, reg p50:p(V +), reg r174:V, reg desc20:*, reg desc21:V, reg c61:L, reg desc23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ok6:*, reg ok7:V, reg __3:cls, reg r175:V, reg l4:*, reg c62:L, reg dx13:V, reg l6:*, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg dx17:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r176:V, reg dx22:V, reg l9:*, reg dx23:V, reg r177:V, reg desc24:*, reg desc25:V, reg names1:cls, reg r178:V, reg c63:L, reg dx26:V, reg l11:*, reg dx27:V, reg r180:V, reg dr14:V, reg dc7:L, reg dx30:V, reg dx31:V, reg l13:*, reg dx32:V, reg dx33:V, reg ok8:*, reg ok9:V, reg __4:cls, reg r181:V, reg ___1:cls, reg r182:V, reg dx34:V, reg desc26:*, reg desc27:V, reg l14:*, reg c64:L, reg desc29:V, reg l16:*, reg dr16:V, reg dc8:L, reg dx35:V, reg desc31:V, reg dx36:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r183:V, reg desc36:V, reg l19:*, reg desc37:V, reg r184:V, reg desc38:*, reg desc39:V, reg names2:cls, reg r185:V, reg ___2:cls, reg r186:V, reg file6:*, reg file7:V, reg r187:V, reg c65:L, reg c66:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r188:V, reg c70:L, reg r189:V, reg retval:*, reg retval1:V, reg length1:cls, reg r190:V, reg r191:V, reg c71:L, reg c72:V, reg c74:L, reg warning3:cls, reg gettextf4:cls, reg pkg23:*, reg pkg24:V, reg p51:p(V +), reg r193:V, reg p52:p(V +), reg r195:V, reg drop1:*, reg drop2:V, reg c75:L, reg c77:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r198:V, reg c80:L, reg r199:V, reg fields11:*, reg fields12:V, reg length2:cls, reg r200:V, reg r201:V, reg c81:L, reg c82:V, reg c84:L, reg retval2:*, reg retval3:V, reg c85:L, reg retval5:V, reg dr18:V, reg dc9:L, reg dx38:V, reg dx39:V, reg __5:cls, reg r202:V, reg l20:*, reg class__:cls, reg r205:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r206:V, reg r207:V, reg fields13:*, reg fields14:V, reg c86:V, reg r208:V, reg c87:L, reg fields15:*, reg fields16:V, reg l21:*, reg attr__:cls, reg r209:V, reg file8:*, reg file9:V, reg l22:*, reg attr__1:cls, reg r210:V, reg retval6:*, reg retval7:V |
    mkenv;
    st pkg = pkg;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    fields_isMissing = missing.0(fields);
    if fields_isMissing then L1(NULL) else L1(fields);
  L1(fields_orDefault):
    st fields = fields_orDefault;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L2(TRUE) else L2(drop);
  L2(drop_orDefault):
    st drop = drop_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L3("") else L3(encoding);
  L3(encoding_orDefault):
    st encoding = encoding_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L87() else L88();
  L4(r1):
    st retval = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L90() else L91();
  L87():
    list = ldf list in base;
    r2 = dyn list();
    check L89() else D0();
  L88():
    r = dyn base();
    goto L4(r);
  D0():
    deopt 3 [r2];
  L5(r4):
    r5 = `!`(r4);
    c1 = `as.logical`(r5);
    if c1 then L93() else L6();
  L89():
    goto L4(r2);
  L90():
    fields1 = ld fields;
    check L92() else D1();
  L91():
    r3 = dyn base1(<sym fields>);
    goto L5(r3);
  D1():
    deopt 6 [fields1];
  L6():
    goto L9();
  L9():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L103() else L104();
  L92():
    fields2 = force? fields1;
    checkMissing(fields2);
    c = `==`(fields2, NULL);
    goto L5(c);
  L93():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L94() else L95();
  L7(r7):
    st fields = r7;
    l = ld retval;
    c2 = `is.object`(l);
    if c2 then L98() else L99(NA_LGL, l);
  L10(r16):
    c4 = `as.logical`(r16);
    if c4 then L106() else L11();
  L94():
    fields3 = ld fields;
    check L96() else D2();
  L95():
    r6 = dyn base2(<sym fields>);
    goto L7(r6);
  L103():
    lib_loc1 = ld `lib.loc`;
    check L105() else D5();
  L104():
    r15 = dyn base3(<sym lib.loc>);
    goto L10(r15);
  D2():
    deopt 12 [fields3];
  D5():
    deopt 27 [lib_loc1];
  L8(r12, dx1):
    st retval = dx1;
    goto L9();
  L11():
    goto L18(NULL);
  L18(r37):
    st pkgpath = r37;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L130() else L131();
  L96():
    fields4 = force? fields3;
    checkMissing(fields4);
    as_character = ldf `as.character` in base;
    r8 = dyn as_character(fields4);
    check L97() else D3();
  L98():
    dr = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L100() else L99(NA_LGL, dr);
  L99(r10, l2):
    fields5 = ld fields;
    check L101() else D4();
  L105():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c3 = `==`(lib_loc2, NULL);
    goto L10(c3);
  L106():
    pkg1 = ld pkg;
    check L107() else D6();
  D3():
    deopt 15 [r8];
  D4():
    deopt 20 [r10, l2, NA_LGL, fields5];
  D6():
    deopt 30 [pkg1];
  L19(r39):
    c9 = `as.logical`(r39);
    if c9 then L133() else L20();
  L97():
    goto L7(r8);
  L100():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(NA_LGL, dx);
  L101():
    fields6 = force? fields5;
    ___ = ldf `[<-` in base;
    r13 = dyn ___(l2, NA_LGL, fields6);
    goto L8(r10, r13);
  L107():
    pkg2 = force? pkg1;
    checkMissing(pkg2);
    r17 = `==`(pkg2, "base");
    c5 = `as.logical`(r17);
    if c5 then L108() else L12();
  L130():
    pkgpath = ld pkgpath;
    check L132() else D18();
  L131():
    r38 = dyn base6(<sym pkgpath>);
    goto L19(r38);
  D18():
    deopt 70 [pkgpath];
  L12():
    isNamespaceLoaded = ldf isNamespaceLoaded;
    check L112() else D9();
  L13(r20):
    goto L18(r20);
  L20():
    goto L21();
  L21():
    pkgpath2 = ld pkgpath;
    check L135() else D19();
  L108():
    file_path = ldf `file.path`;
    check L109() else D7();
  L132():
    pkgpath1 = force? pkgpath;
    checkMissing(pkgpath1);
    c8 = `==`(pkgpath1, NULL);
    goto L19(c8);
  L133():
    st pkgpath = "";
    goto L21();
  D7():
    deopt 35 [];
  D9():
    deopt 40 [];
  D19():
    deopt 78 [pkgpath2];
  L109():
    p = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    r19 = dyn file_path(p, "base");
    check L110() else D8();
  L112():
    p1 = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    r22 = dyn isNamespaceLoaded(p1);
    check L113() else D10();
  L135():
    pkgpath3 = force? pkgpath2;
    checkMissing(pkgpath3);
    r41 = `==`(pkgpath3, "");
    c10 = `as.logical`(r41);
    if c10 then L136() else L22();
  D8():
    deopt 38 [r19];
  D10():
    deopt 42 [r22];
  L22():
    goto L28();
  L28():
    pkgpath4 = ld pkgpath;
    check L148() else D26();
  L110():
    goto L13(r19);
  L113():
    c6 = `as.logical`(r22);
    if c6 then L114() else L14();
  L136():
    ____ = ldf `%||%`;
    check L137() else D20();
  D20():
    deopt 83 [];
  D26():
    deopt 109 [pkgpath4];
  L14():
    _in_ = ldf `%in%`;
    check L118() else D13();
  L114():
    getNamespaceInfo = ldf getNamespaceInfo;
    check L115() else D11();
  L137():
    p6 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    p7 = prom<V +>{
      _libPaths = ldf `.libPaths`;
      r43 = dyn _libPaths();
      return r43;
    };
    r45 = dyn ____(p6, p7);
    check L138() else D21();
  L148():
    pkgpath5 = force? pkgpath4;
    checkMissing(pkgpath5);
    r56 = `==`(pkgpath5, "");
    c13 = `as.logical`(r56);
    if c13 then L149() else L29();
  D11():
    deopt 44 [];
  D13():
    deopt 49 [];
  D21():
    deopt 86 [r45];
  L29():
    file_exists = ldf `file.exists`;
    check L154() else D29();
  L115():
    p2 = prom<V +>{
      pkg5 = ld pkg;
      pkg6 = force? pkg5;
      checkMissing(pkg6);
      return pkg6;
    };
    r24 = dyn getNamespaceInfo(p2, "path");
    check L116() else D12();
  L118():
    p4 = prom<V +>{
      paste0 = ldf paste0;
      p3 = prom<V +>{
        pkg7 = ld pkg;
        pkg8 = force? pkg7;
        checkMissing(pkg8);
        return pkg8;
      };
      r26 = dyn paste0("package:", p3);
      st envname = r26;
      visible.0();
      return r26;
    };
    p5 = prom<V +>{
      search = ldf search;
      r28 = dyn search();
      return r28;
    };
    r30 = dyn _in_(p4, p5);
    check L119() else D14();
  L138():
    s = toForSeq(r45);
    l3 = length(s);
    i = 0;
    goto L23(i);
  L149():
    warning = ldf warning;
    check L150() else D27();
  D12():
    deopt 47 [r24];
  D14():
    deopt 52 [r30];
  D27():
    deopt 114 [];
  D29():
    deopt 125 [];
  L23(i1):
    i2 = `+`.1(i1, 1);
    c11 = `<`.1(l3, i2);
    if c11 then L139() else L27();
  L116():
    goto L13(r24);
  L119():
    c7 = `as.logical`(r30);
    if c7 then L120() else L15();
  L150():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p13 = prom<V +>{
        pkg13 = ld pkg;
        pkg14 = force? pkg13;
        checkMissing(pkg14);
        return pkg14;
      };
      r58 = dyn gettextf("no package '%s' was found", p13);
      return r58;
    };
    r60 = dyn warning[, domain](p14, NA_LGL);
    check L151() else D28();
  L154():
    p16 = prom<V +>{
      file_path3 = ldf `file.path`;
      p15 = prom<V +>{
        pkgpath6 = ld pkgpath;
        pkgpath7 = force? pkgpath6;
        checkMissing(pkgpath7);
        return pkgpath7;
      };
      r64 = dyn file_path3(p15, "Meta", "package.rds");
      st file = r64;
      invisible.0();
      return r64;
    };
    r66 = dyn file_exists(p16);
    check L155() else D30();
  D28():
    deopt 118 [r60];
  D30():
    deopt 127 [r66];
  L15():
    goto L13(NULL);
  L25(i7):
    goto L28();
  L27():
    x = `[[`(s, i2, NULL, TRUE);
    st lib = x;
    file_access = ldf `file.access`;
    check L140() else D22();
  L120():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L121() else L122();
  L139():
    goto L25(i2);
  L151():
    popenv;
    return NA_LGL;
  L155():
    c14 = `as.logical`(r66);
    if c14 then L156() else L31();
  D22():
    deopt 88 [i2];
  L16(r32):
    goto L13(r32);
  L31():
    file_exists1 = ldf `file.exists`;
    check L174() else D39();
  L35():
    sym8 = ldf nzchar;
    base8 = ldf nzchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L188() else L189();
  L121():
    sym5 = ldf `as.environment`;
    base5 = ldf `as.environment` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L123() else L124();
  L122():
    r31 = dyn base4(<lang as.environment(envname)>, "path");
    goto L16(r31);
  L140():
    p10 = prom<V +>{
      file_path1 = ldf `file.path`;
      p8 = prom<V +>{
        lib = ld lib;
        lib1 = force? lib;
        checkMissing(lib1);
        return lib1;
      };
      p9 = prom<V +>{
        pkg9 = ld pkg;
        pkg10 = force? pkg9;
        checkMissing(pkg10);
        return pkg10;
      };
      r48 = dyn file_path1(p8, p9);
      return r48;
    };
    r50 = dyn file_access(p10, 5.0);
    check L141() else D23();
  L156():
    readRDS = ldf readRDS;
    check L157() else D31();
  D23():
    deopt 91 [i2, r50];
  D31():
    deopt 129 [];
  D39():
    deopt 156 [];
  L17(r34):
    attr = ldf attr in base;
    r36 = dyn attr(r34, "path");
    check L127() else D17();
  L39(r102):
    c20 = `as.logical`(r102);
    if c20 then L192() else L40();
  L123():
    envname = ld envname;
    check L125() else D15();
  L124():
    r33 = dyn base5(<sym envname>);
    goto L17(r33);
  L141():
    r51 = `==`(r50, 0);
    c12 = `as.logical`(r51);
    if c12 then L142() else L24();
  L157():
    p17 = prom<V +>{
      file = ld file;
      file1 = force? file;
      checkMissing(file1);
      return file1;
    };
    r68 = dyn readRDS(p17);
    check L158() else D32();
  L174():
    p22 = prom<V +>{
      file_path4 = ldf `file.path`;
      p21 = prom<V +>{
        pkgpath8 = ld pkgpath;
        pkgpath9 = force? pkgpath8;
        checkMissing(pkgpath9);
        return pkgpath9;
      };
      r85 = dyn file_path4(p21, "DESCRIPTION");
      st file = r85;
      invisible.0();
      return r85;
    };
    r87 = dyn file_exists1(p22);
    check L175() else D40();
  L188():
    file4 = ld file;
    check L190() else D49();
  L189():
    r101 = dyn base8(<sym file>);
    goto L39(r101);
  D15():
    deopt 57 [envname];
  D17():
    deopt 63 [r36];
  D32():
    deopt 131 [r68];
  D40():
    deopt 158 [r87];
  D49():
    deopt 189 [file4];
  L24():
    goto L23(i2);
  L40():
    goto L74();
  L74():
    file6 = ld file;
    check L291() else D91();
  L125():
    envname1 = force? envname;
    checkMissing(envname1);
    as_environment = ldf `as.environment` in base;
    r35 = dyn as_environment(envname1);
    check L126() else D16();
  L127():
    goto L16(r36);
  L142():
    file_path2 = ldf `file.path`;
    check L143() else D24();
  L158():
    c15 = `is.object`(r68);
    if c15 then L160() else L161(r68);
  L175():
    c17 = `as.logical`(r87);
    if c17 then L176() else L36();
  L190():
    file5 = force? file4;
    checkMissing(file5);
    nzchar = ldf nzchar in base;
    r103 = dyn nzchar(file5);
    check L191() else D50();
  L192():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L193() else L194();
  D16():
    deopt 60 [r35];
  D24():
    deopt 95 [i2];
  D50():
    deopt 192 [r103];
  D91():
    deopt 351 [file6];
  L36():
    st file = "";
    goto L35();
  L41(r105):
    c23 = `as.logical`(r105);
    if c23 then L43(c23) else L199();
  L126():
    goto L17(r35);
  L143():
    p11 = prom<V +>{
      lib2 = ld lib;
      lib3 = force? lib2;
      checkMissing(lib3);
      return lib3;
    };
    p12 = prom<V +>{
      pkg11 = ld pkg;
      pkg12 = force? pkg11;
      checkMissing(pkg12);
      return pkg12;
    };
    r54 = dyn file_path2(p11, p12);
    check L144() else D25();
  L159(dx3):
    st desc = dx3;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L163() else L164();
  L160():
    dr2 = tryDispatchBuiltin.1("$", r68);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L162() else L161(dr2);
  L161(r70):
    r71 = `$`(r70, <sym DESCRIPTION>);
    goto L159(r71);
  L176():
    read_dcf = ldf `read.dcf`;
    check L177() else D41();
  L191():
    goto L39(r103);
  L193():
    desc4 = ld desc;
    check L195() else D51();
  L194():
    r104 = dyn base9(<lang `<-`(pkgname, `[[`(desc, "Package"))>);
    goto L41(r104);
  L291():
    file7 = force? file6;
    checkMissing(file7);
    r187 = `==`(file7, "");
    c65 = `as.logical`(r187);
    if c65 then L75(c65) else L292();
  D25():
    deopt 98 [i2, r54];
  D41():
    deopt 160 [];
  D51():
    deopt 194 [desc4];
  L32(r73):
    r75 = `<`(r73, 1.0);
    c16 = `as.logical`(r75);
    if c16 then L167() else L33();
  L43(c24):
    c29 = `as.logical`(c24);
    if c29 then L203() else L44();
  L75(c66):
    c74 = `as.logical`(c66);
    if c74 then L298() else L77();
  L144():
    st pkgpath = r54;
    goto L25(i2);
  L162():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L159(dx2);
  L163():
    desc = ld desc;
    check L165() else D33();
  L164():
    r72 = dyn base7(<sym desc>);
    goto L32(r72);
  L177():
    p23 = prom<V +>{
      file2 = ld file;
      file3 = force? file2;
      checkMissing(file3);
      return file3;
    };
    r89 = dyn read_dcf[file](p23);
    check L178() else D42();
  L195():
    desc5 = force? desc4;
    checkMissing(desc5);
    c21 = `is.object`(desc5);
    if c21 then L196() else L197(desc5);
  L199():
    pkgname = ld pkgname;
    check L200() else D52();
  L292():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L293() else L294();
  D33():
    deopt 136 [desc];
  D42():
    deopt 163 [r89];
  D52():
    deopt 201 [c23, pkgname];
  L33():
    goto L34();
  L34():
    as_list = ldf `as.list`;
    check L171() else D37();
  L42(dx7):
    st pkgname = dx7;
    c22 = `==`(dx7, NULL);
    goto L41(c22);
  L44():
    desc8 = ld desc;
    check L208() else D56();
  L76(c70, r189):
    r191 = `==`(r189, 0.0);
    c71 = `as.logical`(r191);
    c72 = `||`(c70, c71);
    goto L75(c72);
  L77():
    drop1 = ld drop;
    check L303() else D96();
  L165():
    desc1 = force? desc;
    checkMissing(desc1);
    length = ldf length in base;
    r74 = dyn length(desc1);
    check L166() else D34();
  L167():
    stop = ldf stop;
    check L168() else D35();
  L178():
    st dcf = r89;
    NROW = ldf NROW;
    check L179() else D43();
  L196():
    dr6 = tryDispatchBuiltin.1("[[", desc5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L198() else L197(dr6);
  L197(desc7):
    __1 = ldf `[[` in base;
    r106 = dyn __1(desc7, "Package");
    goto L42(r106);
  L200():
    pkgname1 = force? pkgname;
    checkMissing(pkgname1);
    pkg19 = ld pkg;
    check L201() else D53();
  L203():
    warning1 = ldf warning;
    check L204() else D54();
  L293():
    retval = ld retval;
    check L295() else D92();
  L294():
    r188 = dyn base17(<sym retval>);
    goto L76(c65, r188);
  L298():
    warning3 = ldf warning;
    check L299() else D94();
  D34():
    deopt 139 [r74];
  D35():
    deopt 143 [];
  D37():
    deopt 151 [];
  D43():
    deopt 166 [];
  D53():
    deopt 202 [c23, pkgname1, pkg19];
  D54():
    deopt 207 [];
  D56():
    deopt 217 [desc8];
  D92():
    deopt 357 [c65, retval];
  D94():
    deopt 365 [];
  D96():
    deopt 375 [drop1];
  L166():
    goto L32(r74);
  L168():
    p19 = prom<V +>{
      gettextf1 = ldf gettextf;
      p18 = prom<V +>{
        pkg15 = ld pkg;
        pkg16 = force? pkg15;
        checkMissing(pkg16);
        return pkg16;
      };
      r77 = dyn gettextf1("metadata of package '%s' is corrupt", p18);
      return r77;
    };
    r79 = dyn stop[, domain](p19, NA_LGL);
    check L169() else D36();
  L171():
    p20 = prom<V +>{
      desc2 = ld desc;
      desc3 = force? desc2;
      checkMissing(desc3);
      return desc3;
    };
    r82 = dyn as_list(p20);
    check L172() else D38();
  L179():
    p24 = prom<V +>{
      dcf = ld dcf;
      dcf1 = force? dcf;
      checkMissing(dcf1);
      return dcf1;
    };
    r91 = dyn NROW(p24);
    check L180() else D44();
  L198():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L42(dx6);
  L201():
    pkg20 = force? pkg19;
    checkMissing(pkg20);
    r107 = `!=`(pkgname1, pkg20);
    c26 = `as.logical`(r107);
    c27 = `||`(c23, c26);
    goto L43(c27);
  L204():
    p29 = prom<V +>{
      gettextf3 = ldf gettextf;
      p28 = prom<V +>{
        pkg21 = ld pkg;
        pkg22 = force? pkg21;
        checkMissing(pkg22);
        return pkg22;
      };
      r109 = dyn gettextf3("no package '%s' was found", p28);
      return r109;
    };
    r111 = dyn warning1[, domain](p29, NA_LGL);
    check L205() else D55();
  L208():
    desc9 = force? desc8;
    checkMissing(desc9);
    c30 = `is.object`(desc9);
    if c30 then L209() else L210(desc9);
  L295():
    retval1 = force? retval;
    checkMissing(retval1);
    length1 = ldf length in base;
    r190 = dyn length1(retval1);
    check L296() else D93();
  L299():
    p52 = prom<V +>{
      gettextf4 = ldf gettextf;
      p51 = prom<V +>{
        pkg23 = ld pkg;
        pkg24 = force? pkg23;
        checkMissing(pkg24);
        return pkg24;
      };
      r193 = dyn gettextf4("DESCRIPTION file of package '%s' is missing or broken", p51);
      return r193;
    };
    r195 = dyn warning3[, domain](p52, NA_LGL);
    check L300() else D95();
  L303():
    drop2 = force? drop1;
    checkMissing(drop2);
    c75 = `as.logical`(drop2);
    if c75 then L304() else L79(c75);
  D36():
    deopt 147 [r79];
  D38():
    deopt 153 [r82];
  D44():
    deopt 168 [r91];
  D55():
    deopt 211 [r111];
  D93():
    deopt 360 [c65, r190];
  D95():
    deopt 369 [r195];
  L46(dx9):
    st enc = dx9;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L212() else L213();
  L79(c77):
    c84 = `as.logical`(c77);
    if c84 then L310() else L81();
  L169():
    goto L34();
  L172():
    st desc = r82;
    goto L35();
  L180():
    r92 = `<`(r91, 1);
    c18 = `as.logical`(r92);
    if c18 then L181() else L37();
  L205():
    popenv;
    return NA_LGL;
  L209():
    dr8 = tryDispatchBuiltin.1("[[", desc9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L211() else L210(dr8);
  L210(desc11):
    __2 = ldf `[[` in base;
    r114 = dyn __2(desc11, "Encoding");
    goto L46(r114);
  L296():
    goto L76(c65, r190);
  L300():
    popenv;
    return NA_LGL;
  L304():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L305() else L306();
  L37():
    goto L38();
  L38():
    as_list1 = ldf `as.list`;
    check L185() else D47();
  L47(r116):
    r117 = `!`(r116);
    c32 = `as.logical`(r117);
    if c32 then L215() else L48(c32);
  L80(c80, r199):
    r201 = `==`(r199, 1);
    c81 = `as.logical`(r201);
    c82 = `&&`(c80, c81);
    goto L79(c82);
  L81():
    l20 = ld retval;
    class__ = ldf `class<-`;
    check L317() else D100();
  L181():
    stop1 = ldf stop;
    check L182() else D45();
  L211():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L46(dx8);
  L212():
    enc = ld enc;
    check L214() else D57();
  L213():
    r115 = dyn base10(<sym enc>);
    goto L47(r115);
  L305():
    fields11 = ld fields;
    check L307() else D97();
  L306():
    r198 = dyn base18(<sym fields>);
    goto L80(c75, r198);
  L310():
    retval2 = ld retval;
    check L311() else D99();
  D45():
    deopt 172 [];
  D47():
    deopt 180 [];
  D57():
    deopt 224 [enc];
  D97():
    deopt 379 [c75, fields11];
  D99():
    deopt 386 [retval2];
  D100():
    deopt 397 ["packageDescription", l20, "packageDescription"];
  L48(c34):
    c41 = `as.logical`(c34);
    if c41 then L221() else L50();
  L182():
    p26 = prom<V +>{
      gettextf2 = ldf gettextf;
      p25 = prom<V +>{
        pkg17 = ld pkg;
        pkg18 = force? pkg17;
        checkMissing(pkg18);
        return pkg18;
      };
      r94 = dyn gettextf2("DESCRIPTION file of package '%s' is corrupt", p25);
      return r94;
    };
    r96 = dyn stop1[, domain](p26, NA_LGL);
    check L183() else D46();
  L185():
    p27 = prom<V +>{
      dcf2 = ld dcf;
      dcf3 = force? dcf2;
      checkMissing(dcf3);
      c19 = `is.object`(dcf3);
      if c19 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", dcf3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r98 = dyn __(dcf3, 1.0, <missing>);
      goto L0(r98);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r100 = dyn as_list1(p27);
    check L186() else D48();
  L214():
    enc1 = force? enc;
    checkMissing(enc1);
    c31 = `==`(enc1, NULL);
    goto L47(c31);
  L215():
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L216() else L217();
  L307():
    fields12 = force? fields11;
    checkMissing(fields12);
    length2 = ldf length in base;
    r200 = dyn length2(fields12);
    check L308() else D98();
  L311():
    retval3 = force? retval2;
    checkMissing(retval3);
    c85 = `is.object`(retval3);
    if c85 then L312() else L313(retval3);
  L317():
    r205 = dyn class__(l20, NULL, "packageDescription");
    check L318() else D101();
  D46():
    deopt 176 [r96];
  D48():
    deopt 182 [r100];
  D98():
    deopt 382 [c75, r200];
  D101():
    deopt 399 ["packageDescription", r205];
  L49(c37, r119):
    r121 = `!`(r119);
    c38 = `as.logical`(r121);
    c39 = `&&`(c37, c38);
    goto L48(c39);
  L50():
    goto L64();
  L64():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L259() else L260();
  L82(dx39):
    popenv;
    return dx39;
  L183():
    goto L38();
  L186():
    st desc = r100;
    goto L35();
  L216():
    encoding1 = ld encoding;
    check L218() else D58();
  L217():
    r118 = dyn base11(<sym encoding>);
    goto L49(c32, r118);
  L221():
    sym12 = ldf missing;
    base12 = ldf missing in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L222() else L223();
  L308():
    goto L80(c75, r200);
  L312():
    dr18 = tryDispatchBuiltin.1("[[", retval3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L314() else L313(dr18);
  L313(retval5):
    __5 = ldf `[[` in base;
    r202 = dyn __5(retval5, 1);
    goto L82(r202);
  L318():
    st retval = r205;
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L319() else L320();
  D58():
    deopt 230 [c32, encoding1];
  L51(r123):
    c42 = `as.logical`(r123);
    if c42 then L224() else L52(c42);
  L65(r167):
    r168 = `!`(r167);
    c60 = `as.logical`(r168);
    if c60 then L262() else L66();
  L84(r207):
    r208 = `!`(r207);
    c87 = `as.logical`(r208);
    if c87 then L322() else L85();
  L218():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    is_na = ldf `is.na` in base;
    r120 = dyn is_na(encoding2);
    check L219() else D59();
  L222():
    missing = ldf missing in base;
    r124 = dyn missing(<sym encoding>);
    goto L51(r124);
  L223():
    r122 = dyn base12(<sym encoding>);
    goto L51(r122);
  L259():
    fields7 = ld fields;
    check L261() else D80();
  L260():
    r166 = dyn base13(<sym fields>);
    goto L65(r166);
  L314():
    dx38 = getTryDispatchBuiltinValue(dr18);
    goto L82(dx38);
  L319():
    fields13 = ld fields;
    check L321() else D102();
  L320():
    r206 = dyn base19(<sym fields>);
    goto L84(r206);
  D59():
    deopt 233 [c32, r120];
  D80():
    deopt 311 [fields7];
  D102():
    deopt 402 [fields13];
  L52(c44):
    c48 = `as.logical`(c44);
    if c48 then L228() else L53();
  L66():
    desc26 = ld desc;
    check L282() else D88();
  L71(dx34):
    goto L74();
  L85():
    goto L86();
  L86():
    file8 = ld file;
    check L327() else D106();
  L219():
    goto L49(c32, r120);
  L224():
    Sys_getlocale = ldf `Sys.getlocale`;
    check L225() else D60();
  L261():
    fields8 = force? fields7;
    checkMissing(fields8);
    c59 = `==`(fields8, NULL);
    goto L65(c59);
  L262():
    _in_1 = ldf `%in%`;
    check L263() else D81();
  L321():
    fields14 = force? fields13;
    checkMissing(fields14);
    c86 = `==`(fields14, NULL);
    goto L84(c86);
  L322():
    fields15 = ld fields;
    check L323() else D103();
  D60():
    deopt 240 [c42];
  D81():
    deopt 316 [];
  D88():
    deopt 338 [desc26];
  D103():
    deopt 406 [fields15];
  D106():
    deopt 416 [file8];
  L53():
    goto L54();
  L54():
    encoding3 = ld encoding;
    check L230() else D62();
  L225():
    r125 = dyn Sys_getlocale("LC_CTYPE");
    check L226() else D61();
  L228():
    st encoding = "ASCII//TRANSLIT";
    goto L54();
  L263():
    p49 = prom<V +>{
      sym14 = ldf names;
      base14 = ldf names in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r170):
      return r170;
    L1():
      desc18 = ld desc;
      desc19 = force? desc18;
      checkMissing(desc19);
      names = ldf names in base;
      r171 = dyn names(desc19);
      goto L0(r171);
    L2():
      r169 = dyn base14(<sym desc>);
      goto L0(r169);
    };
    p50 = prom<V +>{
      fields9 = ld fields;
      fields10 = force? fields9;
      checkMissing(fields10);
      return fields10;
    };
    r174 = dyn _in_1(p49, p50);
    check L264() else D82();
  L282():
    desc27 = force? desc26;
    checkMissing(desc27);
    l14 = ld retval;
    c64 = `is.object`(l14);
    if c64 then L283() else L284(desc27, l14);
  L323():
    fields16 = force? fields15;
    checkMissing(fields16);
    l21 = ld retval;
    attr__ = ldf `attr<-`;
    check L324() else D104();
  L327():
    file9 = force? file8;
    checkMissing(file9);
    l22 = ld retval;
    attr__1 = ldf `attr<-`;
    check L328() else D107();
  D61():
    deopt 242 [c42, r125];
  D62():
    deopt 251 [encoding3];
  D82():
    deopt 319 [r174];
  D104():
    deopt 409 [fields16, l21, fields16];
  D107():
    deopt 419 [file9, l22, file9];
  L72(desc31, dx36):
    st retval = dx36;
    goto L71(desc31);
  L226():
    r126 = `==`(r125, "C");
    c45 = `as.logical`(r126);
    c46 = `&&`(c42, c45);
    goto L52(c46);
  L230():
    encoding4 = force? encoding3;
    checkMissing(encoding4);
    enc2 = ld enc;
    check L231() else D63();
  L264():
    st ok = r174;
    desc20 = ld desc;
    check L265() else D83();
  L283():
    dr16 = tryDispatchBuiltin.0("[<-", l14, desc27);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L285() else L284(desc27, dr16);
  L284(desc29, l16):
    sym16 = ldf names;
    base16 = ldf names in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L286() else L287();
  L324():
    r209 = dyn attr__(l21, NULL, "fields", fields16);
    check L325() else D105();
  L328():
    r210 = dyn attr__1(l22, NULL, "file", file9);
    check L329() else D108();
  D63():
    deopt 252 [encoding4, enc2];
  D83():
    deopt 321 [desc20];
  D105():
    deopt 412 [fields16, r209];
  D108():
    deopt 422 [file9, r210];
  L73(desc36, l19, desc37, r184):
    ___2 = ldf `[<-` in base;
    r186 = dyn ___2(l19, desc37, r184);
    goto L72(desc36, r186);
  L231():
    enc3 = force? enc2;
    checkMissing(enc3);
    r128 = `!=`(encoding4, enc3);
    c49 = `as.logical`(r128);
    if c49 then L232() else L55();
  L265():
    desc21 = force? desc20;
    checkMissing(desc21);
    c61 = `is.object`(desc21);
    if c61 then L266() else L267(desc21);
  L285():
    dx35 = getTryDispatchBuiltinValue(dr16);
    goto L72(desc27, dx35);
  L286():
    desc38 = ld desc;
    check L288() else D89();
  L287():
    r183 = dyn base16(<sym desc>);
    goto L73(desc29, l16, desc27, r183);
  L325():
    st retval = r209;
    goto L86();
  L329():
    st retval = r210;
    retval6 = ld retval;
    check L330() else D109();
  D89():
    deopt 343 [desc29, l16, desc27, desc38];
  D109():
    deopt 424 [retval6];
  L55():
    goto L63(NULL);
  L63(newdesc5):
    goto L64();
  L67(dx11):
    l4 = ld retval;
    c62 = `is.object`(l4);
    if c62 then L270() else L271(dx11, l4);
  L232():
    try = ldf try;
    check L233() else D64();
  L266():
    dr10 = tryDispatchBuiltin.1("[", desc21);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L268() else L267(dr10);
  L267(desc23):
    ok6 = ld ok;
    check L269() else D84();
  L288():
    desc39 = force? desc38;
    checkMissing(desc39);
    names2 = ldf names in base;
    r185 = dyn names2(desc39);
    check L289() else D90();
  L330():
    retval7 = force? retval6;
    checkMissing(retval7);
    popenv;
    return retval7;
  D64():
    deopt 256 [];
  D84():
    deopt 323 [desc23, ok6];
  D90():
    deopt 346 [desc29, l16, desc27, r185];
  L68(dx16, dx17):
    st retval = dx17;
    goto L71(dx16);
  L233():
    p34 = prom<V +>{
      lapply = ldf lapply;
      p30 = prom<V +>{
        desc12 = ld desc;
        desc13 = force? desc12;
        checkMissing(desc13);
        return desc13;
      };
      p31 = prom<V +>{
        iconv = ld iconv;
        iconv1 = force? iconv;
        checkMissing(iconv1);
        return iconv1;
      };
      p32 = prom<V +>{
        enc4 = ld enc;
        enc5 = force? enc4;
        checkMissing(enc5);
        return enc5;
      };
      p33 = prom<V +>{
        encoding5 = ld encoding;
        encoding6 = force? encoding5;
        checkMissing(encoding6);
        return encoding6;
      };
      r133 = dyn lapply[, , from, to](p30, p31, p32, p33);
      return r133;
    };
    r135 = dyn try(p34);
    check L234() else D65();
  L268():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L67(dx10);
  L269():
    ok7 = force? ok6;
    __3 = ldf `[` in base;
    r175 = dyn __3(desc23, ok7);
    goto L67(r175);
  L270():
    dr12 = tryDispatchBuiltin.0("[<-", l4, dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L272() else L271(dx11, dr12);
  L271(dx13, l6):
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L273() else L274();
  L289():
    goto L73(desc29, l16, desc27, r185);
  D65():
    deopt 258 [r135];
  L69(dx22, l9, dx23, r177):
    c63 = `is.object`(r177);
    if c63 then L277() else L278(dx22, l9, dx23, r177);
  L234():
    st newdesc = r135;
    r136 = clos inner2810961878;
    st dOk = r136;
    dOk = ldf dOk;
    check L235() else D66();
  L272():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L68(dx11, dx15);
  L273():
    desc24 = ld desc;
    check L275() else D85();
  L274():
    r176 = dyn base15(<sym desc>);
    goto L69(dx13, l6, dx11, r176);
  D66():
    deopt 264 [];
  D85():
    deopt 329 [dx13, l6, dx11, desc24];
  L70(dx31, l13, dx32, dx33):
    ___1 = ldf `[<-` in base;
    r182 = dyn ___1(l13, dx32, dx33);
    goto L68(dx31, r182);
  L235():
    p35 = prom<V +>{
      newdesc = ld newdesc;
      newdesc1 = force? newdesc;
      checkMissing(newdesc1);
      return newdesc1;
    };
    r138 = dyn dOk(p35);
    check L236() else D67();
  L275():
    desc25 = force? desc24;
    checkMissing(desc25);
    names1 = ldf names in base;
    r178 = dyn names1(desc25);
    check L276() else D86();
  L277():
    dr14 = tryDispatchBuiltin.1("[", r177);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L279() else L278(dx22, l9, dx23, dr14);
  L278(dx26, l11, dx27, r180):
    ok8 = ld ok;
    check L280() else D87();
  D67():
    deopt 266 [r138];
  D86():
    deopt 332 [dx13, l6, dx11, r178];
  D87():
    deopt 333 [dx26, l11, dx27, r180, ok8];
  L236():
    st ok = r138;
    ok = ld ok;
    check L237() else D68();
  L276():
    goto L69(dx13, l6, dx11, r178);
  L279():
    dx30 = getTryDispatchBuiltinValue(dr14);
    goto L70(dx22, l9, dx23, dx30);
  L280():
    ok9 = force? ok8;
    __4 = ldf `[` in base;
    r181 = dyn __4(r180, ok9);
    goto L70(dx26, l11, dx27, r181);
  D68():
    deopt 268 [ok];
  L237():
    ok1 = force? ok;
    checkMissing(ok1);
    r139 = `!`(ok1);
    c50 = `as.logical`(r139);
    if c50 then L238() else L56(c50);
  L56(c52):
    c56 = `as.logical`(c52);
    if c56 then L242() else L57();
  L238():
    endsWith = ldf endsWith;
    check L239() else D69();
  D69():
    deopt 272 [c50];
  L57():
    goto L58();
  L58():
    ok2 = ld ok;
    check L246() else D73();
  L239():
    p36 = prom<V +>{
      encoding7 = ld encoding;
      encoding8 = force? encoding7;
      checkMissing(encoding8);
      return encoding8;
    };
    r141 = dyn endsWith(p36, "//TRANSLIT");
    check L240() else D70();
  L242():
    dOk1 = ldf dOk;
    check L243() else D71();
  D70():
    deopt 275 [c50, r141];
  D71():
    deopt 279 [];
  D73():
    deopt 285 [ok2];
  L240():
    r142 = `!`(r141);
    c53 = `as.logical`(r142);
    c54 = `&&`(c50, c53);
    goto L56(c54);
  L243():
    p43 = prom<V +>{
      try1 = ldf try;
      p42 = prom<V +>{
        lapply1 = ldf lapply;
        p37 = prom<V +>{
          desc14 = ld desc;
          desc15 = force? desc14;
          checkMissing(desc15);
          return desc15;
        };
        p38 = prom<V +>{
          iconv2 = ld iconv;
          iconv3 = force? iconv2;
          checkMissing(iconv3);
          return iconv3;
        };
        p39 = prom<V +>{
          enc6 = ld enc;
          enc7 = force? enc6;
          checkMissing(enc7);
          return enc7;
        };
        p41 = prom<V +>{
          paste1 = ldf paste0;
          p40 = prom<V +>{
            encoding9 = ld encoding;
            encoding10 = force? encoding9;
            checkMissing(encoding10);
            return encoding10;
          };
          r147 = dyn paste1(p40, "//TRANSLIT");
          return r147;
        };
        r149 = dyn lapply1[, , from, to](p37, p38, p39, p41);
        return r149;
      };
      r151 = dyn try1(p42);
      st newdesc = r151;
      invisible.0();
      return r151;
    };
    r153 = dyn dOk1(p43);
    check L244() else D72();
  L246():
    ok3 = force? ok2;
    checkMissing(ok3);
    r155 = `!`(ok3);
    c57 = `as.logical`(r155);
    if c57 then L247() else L59();
  D72():
    deopt 281 [r153];
  L59():
    goto L60();
  L60():
    ok4 = ld ok;
    check L251() else D76();
  L244():
    st ok = r153;
    goto L58();
  L247():
    dOk2 = ldf dOk;
    check L248() else D74();
  D74():
    deopt 289 [];
  D76():
    deopt 295 [ok4];
  L248():
    p48 = prom<V +>{
      try2 = ldf try;
      p47 = prom<V +>{
        lapply2 = ldf lapply;
        p44 = prom<V +>{
          desc16 = ld desc;
          desc17 = force? desc16;
          checkMissing(desc17);
          return desc17;
        };
        p45 = prom<V +>{
          iconv4 = ld iconv;
          iconv5 = force? iconv4;
          checkMissing(iconv5);
          return iconv5;
        };
        p46 = prom<V +>{
          enc8 = ld enc;
          enc9 = force? enc8;
          checkMissing(enc9);
          return enc9;
        };
        r159 = dyn lapply2[, , from, to, sub](p44, p45, p46, "ASCII//TRANSLIT", "?");
        return r159;
      };
      r161 = dyn try2(p47);
      st newdesc = r161;
      invisible.0();
      return r161;
    };
    r163 = dyn dOk2(p48);
    check L249() else D75();
  L251():
    ok5 = force? ok4;
    checkMissing(ok5);
    c58 = `as.logical`(ok5);
    if c58 then L252() else L61();
  D75():
    deopt 291 [r163];
  L61():
    warning2 = ldf warning;
    check L255() else D78();
  L62(newdesc4):
    goto L63(newdesc4);
  L249():
    st ok = r163;
    goto L60();
  L252():
    newdesc2 = ld newdesc;
    check L253() else D77();
  D77():
    deopt 297 [newdesc2];
  D78():
    deopt 301 [];
  L253():
    newdesc3 = force? newdesc2;
    checkMissing(newdesc3);
    st desc = newdesc3;
    goto L62(newdesc3);
  L255():
    r165 = dyn warning2[, `call.`]("'DESCRIPTION' file has an 'Encoding' field and re-encoding is not possible", FALSE);
    check L256() else D79();
  D79():
    deopt 305 [r165];
  L256():
    goto L62(r165);
  }
}
fun inner2810961878(nd) {
  (reg nd:*) -+> V { var nd:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nd1:*, reg nd2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg nd3:*, reg nd4:V, reg anyNA:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V |
    mkenv;
    st nd = nd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L7() else L1(c);
  L3():
    nd1 = ld nd;
    check L5() else D0();
  L4():
    r = dyn base(<sym nd>, "try-error");
    goto L0(r);
  D0():
    deopt 2 [nd1];
  L1(c2):
    popenv;
    return c2;
  L5():
    nd2 = force? nd1;
    checkMissing(nd2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(nd2, "try-error", FALSE);
    check L6() else D1();
  L7():
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  D1():
    deopt 7 [r2];
  L2(c5, r5):
    r7 = `!`(r5);
    c6 = `as.logical`(r7);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L6():
    goto L0(r2);
  L8():
    nd3 = ld nd;
    check L10() else D2();
  L9():
    r4 = dyn base1(<sym nd>);
    goto L2(c, r4);
  D2():
    deopt 11 [c, nd3];
  L10():
    nd4 = force? nd3;
    checkMissing(nd4);
    anyNA = ldf anyNA in base;
    r6 = dyn anyNA(nd4);
    check L11() else D3();
  D3():
    deopt 14 [c, r6];
  L11():
    goto L2(c, r6);
  }
}