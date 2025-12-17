fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1794440626;
    st `Sys.timezone` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1794440626(location) {
  (reg location:*) -+> V { var location:*, reg location_isMissing:L, reg location_orDefault:*, reg location1:*, reg location2:V, reg r:V, reg c:L, reg _Deprecated:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg get0:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg baseenv:cls, reg r7:V, reg p:p(V +), reg r9:V, reg is_na:cls, reg r10:V, reg r11:V, reg c1:L, reg tz:*, reg tz1:V, reg r14:cls, reg Sys_getenv:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg tz2:*, reg tz3:V, reg nzchar:cls, reg r18:V, reg c2:L, reg tz4:*, reg tz5:V, reg _Platform:*, reg _Platform1:V, reg c3:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r21:V, reg r22:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg _Internal:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg Sys_getenv1:cls, reg r30:V, reg nzchar1:cls, reg r31:V, reg r32:V, reg c5:L, reg c7:V, reg grepl:cls, reg R_Version:cls, reg r33:V, reg c8:L, reg r35:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r36:V, reg p1:p(V +), reg r38:V, reg c9:L, reg c10:V, reg c12:L, reg c14:V, reg dir_exists:cls, reg file_path:cls, reg R_home:cls, reg r39:V, reg p2:p(V +), reg r41:V, reg p3:p(V +), reg r43:V, reg c15:L, reg c16:V, reg c18:L, reg tryCatch:cls, reg readLines:cls, reg file_path1:cls, reg zp:*, reg zp1:V, reg p4:p(V +), reg r45:V, reg p5:p(V +), reg r47:V, reg p6:p(V +), reg r49:cls, reg p7:p(V +), reg r51:V, reg tryCatch1:cls, reg readLines1:cls, reg r52:V, reg p8:p(V +), reg r54:cls, reg p9:p(V +), reg r56:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg r58:V, reg veri:*, reg veri1:V, reg inherits:cls, reg r59:V, reg r60:V, reg c19:L, reg c21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r61:V, reg c24:L, reg r62:V, reg vers:*, reg vers1:V, reg inherits1:cls, reg r63:V, reg r64:V, reg c25:L, reg c26:V, reg c28:L, reg c30:V, reg vers2:*, reg vers3:V, reg veri2:*, reg veri3:V, reg r65:V, reg c31:L, reg c32:V, reg c34:L, reg substr:cls, reg veri4:*, reg veri5:V, reg p10:p(V +), reg r67:V, reg substr1:cls, reg veri6:*, reg veri7:V, reg p11:p(V +), reg r69:V, reg substr2:cls, reg vers4:*, reg vers5:V, reg p12:p(V +), reg r71:V, reg substr3:cls, reg vers6:*, reg vers7:V, reg p13:p(V +), reg r73:V, reg yrs:*, reg yrs1:V, reg yri:*, reg yri1:V, reg r74:V, reg c35:L, reg c36:V, reg yrs2:*, reg yrs3:V, reg yri2:*, reg yri3:V, reg r75:V, reg c38:L, reg c41:L, reg c42:V, reg sufs:*, reg sufs1:V, reg sufi:*, reg sufi1:V, reg r76:V, reg c43:L, reg c44:V, reg c47:L, reg c48:V, reg c50:L, reg Sys_setenv:cls, reg r77:V, reg r78:V, reg r79:V, reg Sys_getenv2:cls, reg r81:V, reg r82:V, reg c51:L, reg c53:V, reg grepl1:cls, reg R_Version1:cls, reg r83:V, reg c54:L, reg r85:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r86:V, reg p14:p(V +), reg r88:V, reg c55:L, reg c56:V, reg c58:L, reg Sys_setenv1:cls, reg r89:V, reg Sys_getenv3:cls, reg r91:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r92:V, reg r93:V, reg tzdir:*, reg tzdir1:V, reg nzchar2:cls, reg r94:V, reg c59:L, reg c61:V, reg dir_exists1:cls, reg tzdir2:*, reg tzdir3:V, reg p15:p(V +), reg r96:V, reg r97:V, reg c62:L, reg c63:V, reg c65:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r99:V, reg r100:V, reg tzdir4:*, reg tzdir5:V, reg nzchar3:cls, reg r101:V, reg r102:V, reg c66:L, reg dir_exists2:cls, reg p16:p(V +), reg r104:V, reg c67:L, reg c68:V, reg dir_exists3:cls, reg p17:p(V +), reg r106:V, reg c70:L, reg c71:V, reg c73:L, reg c74:V, reg dir_exists4:cls, reg p18:p(V +), reg r108:V, reg c76:L, reg c77:V, reg c79:L, reg c80:V, reg dir_exists5:cls, reg p19:p(V +), reg r110:V, reg c82:L, reg c83:V, reg c85:L, reg c86:V, reg dir_exists6:cls, reg p20:p(V +), reg r112:V, reg c88:L, reg c89:V, reg c91:L, reg c92:V, reg dir_exists7:cls, reg p21:p(V +), reg r114:V, reg c94:L, reg c95:V, reg c97:L, reg c98:V, reg dir_exists8:cls, reg p22:p(V +), reg r116:V, reg c100:L, reg c101:V, reg c103:L, reg r117:V, reg dir_exists9:cls, reg r119:V, reg c104:L, reg c106:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r120:V, reg c109:L, reg r121:V, reg Sys_which:cls, reg r122:V, reg nzchar4:cls, reg r123:V, reg c110:L, reg c111:V, reg c113:L, reg system:cls, reg r124:V, reg grep:cls, reg inf:*, reg inf1:V, reg p23:p(V +), reg r126:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r127:V, reg r128:V, reg lines:*, reg lines1:V, reg length:cls, reg r129:V, reg c114:L, reg sub:cls, reg sub1:cls, reg inf2:*, reg inf3:V, reg c115:L, reg inf5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg lines2:*, reg lines3:V, reg c116:L, reg inf7:V, reg lines5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg inf9:V, reg dx9:V, reg __:cls, reg r130:V, reg __1:cls, reg r131:V, reg p24:p(V +), reg r133:V, reg p25:p(V +), reg r135:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r136:V, reg r137:V, reg tzdir6:*, reg tzdir7:V, reg nzchar5:cls, reg r138:V, reg c117:L, reg file_exists:cls, reg file_path2:cls, reg tzdir8:*, reg tzdir9:V, reg p26:p(V +), reg tz6:*, reg tz7:V, reg p27:p(V +), reg r141:V, reg p28:p(V +), reg r143:V, reg c118:L, reg cacheIt:cls, reg tz8:*, reg tz9:V, reg p29:p(V +), reg r145:V, reg tz10:*, reg tz11:V, reg warning:cls, reg sprintf:cls, reg sQuote:cls, reg r148:V, reg p30:p(V +), reg sQuote1:cls, reg tz12:*, reg tz13:V, reg p31:p(V +), reg r151:V, reg p32:p(V +), reg r153:V, reg p33:p(V +), reg r155:V, reg cacheIt1:cls, reg tz14:*, reg tz15:V, reg p34:p(V +), reg r158:V, reg tz16:*, reg tz17:V, reg r159:V, reg grepl2:cls, reg R_Version2:cls, reg r161:V, reg c119:L, reg r163:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r164:V, reg p35:p(V +), reg r166:V, reg c120:L, reg c122:V, reg file_exists1:cls, reg r167:V, reg c123:L, reg c124:V, reg c126:L, reg try:cls, reg readLines2:cls, reg r168:V, reg p36:p(V +), reg r170:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r171:V, reg r172:V, reg tz18:*, reg tz19:V, reg inherits2:cls, reg r173:V, reg r174:V, reg c127:L, reg c129:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r175:V, reg c132:L, reg r176:V, reg tz20:*, reg tz21:V, reg length1:cls, reg r177:V, reg r178:V, reg c133:L, reg c134:V, reg c136:L, reg trimws:cls, reg tz22:*, reg tz23:V, reg p37:p(V +), reg r180:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r181:V, reg r182:V, reg tzdir10:*, reg tzdir11:V, reg nzchar6:cls, reg r183:V, reg c137:L, reg file_exists2:cls, reg file_path3:cls, reg tzdir12:*, reg tzdir13:V, reg p38:p(V +), reg tz24:*, reg tz25:V, reg p39:p(V +), reg r186:V, reg p40:p(V +), reg r188:V, reg c138:L, reg cacheIt2:cls, reg tz26:*, reg tz27:V, reg p41:p(V +), reg r190:V, reg tz28:*, reg tz29:V, reg warning1:cls, reg sprintf1:cls, reg sQuote2:cls, reg r193:V, reg p42:p(V +), reg sQuote3:cls, reg tz30:*, reg tz31:V, reg p43:p(V +), reg r196:V, reg p44:p(V +), reg r198:V, reg p45:p(V +), reg r200:V, reg cacheIt3:cls, reg tz32:*, reg tz33:V, reg p46:p(V +), reg r203:V, reg tz34:*, reg tz35:V, reg r204:V, reg file_exists3:cls, reg p47:p(V +), reg r207:V, reg c139:L, reg c140:V, reg file_exists4:cls, reg p48:p(V +), reg r209:V, reg c142:L, reg c143:V, reg c145:L, reg c146:V, reg file_exists5:cls, reg p49:p(V +), reg r211:V, reg c148:L, reg c149:V, reg c151:L, reg c152:V, reg file_exists6:cls, reg p50:p(V +), reg r213:V, reg c154:L, reg c155:V, reg c157:L, reg c159:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r214:V, reg c162:L, reg r215:V, reg Sys_readlink:cls, reg lt0:*, reg lt1:V, reg p51:p(V +), reg r217:V, reg is_na1:cls, reg r218:V, reg r219:V, reg c163:L, reg c164:V, reg c166:L, reg c168:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r220:V, reg c171:L, reg r221:V, reg lt2:*, reg lt3:V, reg nzchar7:cls, reg r222:V, reg c172:L, reg c173:V, reg c175:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r223:V, reg r224:V, reg tzdir14:*, reg tzdir15:V, reg nzchar8:cls, reg r225:V, reg c176:L, reg c178:V, reg grepl3:cls, reg paste0:cls, reg tzdir16:*, reg tzdir17:V, reg p52:p(V +), reg r227:V, reg p53:p(V +), reg lt4:*, reg lt5:V, reg p54:p(V +), reg r230:V, reg c179:L, reg c180:V, reg c182:L, reg c183:V, reg grepl4:cls, reg p55:p(V +), reg lt6:*, reg lt7:V, reg p56:p(V +), reg r233:V, reg c185:L, reg c186:V, reg c188:L, reg sub2:cls, reg pat:*, reg pat1:V, reg p57:p(V +), reg lt8:*, reg lt9:V, reg p58:p(V +), reg r236:V, reg grepl5:cls, reg p59:p(V +), reg lt10:*, reg lt11:V, reg p60:p(V +), reg r240:V, reg c189:L, reg sub3:cls, reg pat2:*, reg pat3:V, reg p61:p(V +), reg lt12:*, reg lt13:V, reg p62:p(V +), reg r243:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r244:V, reg r245:V, reg tz36:*, reg tz37:V, reg is_na2:cls, reg r246:V, reg r247:V, reg c190:L, reg cacheIt4:cls, reg tz38:*, reg tz39:V, reg p63:p(V +), reg r249:V, reg tz40:*, reg tz41:V, reg message:cls, reg sQuote4:cls, reg lt14:*, reg lt15:V, reg p64:p(V +), reg r253:V, reg p65:p(V +), reg r255:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r257:V, reg r258:V, reg tzdir18:*, reg tzdir19:V, reg nzchar9:cls, reg r259:V, reg c191:L, reg c193:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r260:V, reg c196:L, reg r261:V, reg Sys_readlink1:cls, reg lt16:*, reg lt17:V, reg p66:p(V +), reg r263:V, reg is_na3:cls, reg r264:V, reg c197:L, reg c198:L, reg c199:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r265:V, reg c206:L, reg c207:L, reg r266:V, reg lt18:*, reg lt19:V, reg nzchar10:cls, reg r267:V, reg r268:V, reg c208:L, reg c209:V, reg c212:L, reg c213:V, reg c215:L, reg warning2:cls, reg sprintf2:cls, reg sQuote5:cls, reg lt20:*, reg lt21:V, reg p67:p(V +), reg r270:V, reg p68:p(V +), reg r272:V, reg p69:p(V +), reg r274:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r275:V, reg r276:V, reg Sys_which1:cls, reg r277:V, reg nzchar11:cls, reg r278:V, reg c216:L, reg dir:cls, reg tzdir20:*, reg tzdir21:V, reg p70:p(V +), reg r280:V, reg known:*, reg known1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c217:L, reg x:V, reg system2:cls, reg sym23:cls, reg base23:cls, reg guard23:L, reg r281:V, reg r282:V, reg shQuote:cls, reg lt22:*, reg lt23:V, reg p71:p(V +), reg r284:V, reg shQuote1:cls, reg file_path4:cls, reg tzdir22:*, reg tzdir23:V, reg p72:p(V +), reg tz42:*, reg tz43:V, reg p73:p(V +), reg r287:V, reg p74:p(V +), reg r289:V, reg c218:cls, reg r290:V, reg p75:p(V +), reg r292:V, reg status:*, reg status1:V, reg r293:V, reg c219:L, reg cacheIt5:cls, reg tz44:*, reg tz45:V, reg p76:p(V +), reg r295:V, reg warning3:cls, reg sprintf3:cls, reg sQuote6:cls, reg tz46:*, reg tz47:V, reg p77:p(V +), reg r297:V, reg p78:p(V +), reg r299:V, reg p79:p(V +), reg r301:V, reg tz48:*, reg tz49:V, reg warning4:cls, reg sprintf4:cls, reg sQuote7:cls, reg lt24:*, reg lt25:V, reg p80:p(V +), reg r305:V, reg p81:p(V +), reg r307:V, reg p82:p(V +), reg r309:V, reg r310:V |
    mkenv;
    location_isMissing = missing.0(location);
    if location_isMissing then L0(TRUE) else L0(location);
  L0(location_orDefault):
    st location = location_orDefault;
    location1 = ld location;
    check L102() else D0();
  D0():
    deopt 0 [location1];
  L102():
    location2 = force? location1;
    checkMissing(location2);
    r = `!`(location2);
    c = `as.logical`(r);
    if c then L103() else L1();
  L1():
    goto L2();
  L2():
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L107() else L108();
  L103():
    _Deprecated = ldf `.Deprecated`;
    check L104() else D1();
  D1():
    deopt 4 [];
  L3(r4):
    r11 = `!`(r4);
    c1 = `as.logical`(r11);
    if c1 then L112() else L4();
  L104():
    r1 = dyn _Deprecated[msg]("Sys.timezone(location = FALSE) is defunct and ignored");
    check L105() else D2();
  L107():
    get0 = ldf get0;
    check L109() else D3();
  L108():
    r3 = dyn base(<lang `<-`(tz, get0(".sys.timezone", baseenv(), mode="character", inherits=FALSE, ifnotfound=NA_STR))>);
    goto L3(r3);
  D2():
    deopt 7 [r1];
  D3():
    deopt 13 [];
  L4():
    r14 = clos inner449508518;
    st cacheIt = r14;
    Sys_getenv = ldf `Sys.getenv`;
    check L116() else D7();
  L105():
    goto L2();
  L109():
    p = prom<V +>{
      sym1 = ldf baseenv;
      base1 = ldf baseenv in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      baseenv = ldf baseenv in base;
      r7 = dyn baseenv();
      goto L0(r7);
    L2():
      r5 = dyn base1();
      goto L0(r5);
    };
    r9 = dyn get0[, , mode, inherits, ifnotfound](".sys.timezone", p, "character", FALSE, NA_STR);
    check L110() else D4();
  L112():
    tz = ld tz;
    check L113() else D6();
  D4():
    deopt 22 [r9];
  D6():
    deopt 27 [tz];
  D7():
    deopt 36 [];
  L110():
    st tz = r9;
    is_na = ldf `is.na` in base;
    r10 = dyn is_na(r9);
    check L111() else D5();
  L113():
    tz1 = force? tz;
    checkMissing(tz1);
    popenv;
    return tz1;
  L116():
    r15 = dyn Sys_getenv("TZ");
    check L117() else D8();
  D5():
    deopt 25 [r10];
  D8():
    deopt 38 [r15];
  L111():
    goto L3(r10);
  L117():
    st tz = r15;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L118() else L119();
  L6(r17):
    c2 = `as.logical`(r17);
    if c2 then L122() else L7();
  L118():
    tz2 = ld tz;
    check L120() else D9();
  L119():
    r16 = dyn base2(<sym tz>);
    goto L6(r16);
  D9():
    deopt 42 [tz2];
  L7():
    _Platform = ld `.Platform`;
    check L126() else D12();
  L120():
    tz3 = force? tz2;
    checkMissing(tz3);
    nzchar = ldf nzchar in base;
    r18 = dyn nzchar(tz3);
    check L121() else D10();
  L122():
    tz4 = ld tz;
    check L123() else D11();
  D10():
    deopt 45 [r18];
  D11():
    deopt 46 [tz4];
  D12():
    deopt 51 [_Platform];
  L121():
    goto L6(r18);
  L123():
    tz5 = force? tz4;
    checkMissing(tz5);
    popenv;
    return tz5;
  L126():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c3 = `is.object`(_Platform1);
    if c3 then L128() else L129(_Platform1);
  L127(dx1):
    r22 = `==`(dx1, "windows");
    c4 = `as.logical`(r22);
    if c4 then L131() else L9();
  L128():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L130() else L129(dr);
  L129(_Platform3):
    r21 = `$`(_Platform3, <sym OS.type>);
    goto L127(r21);
  L9():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L136() else L137();
  L130():
    dx = getTryDispatchBuiltinValue(dr);
    goto L127(dx);
  L131():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L132() else L133();
  L10(r24):
    popenv;
    return r24;
  L12(r29):
    r32 = `!`(r29);
    c5 = `as.logical`(r32);
    if c5 then L141() else L13(c5);
  L132():
    _Internal = ldf `.Internal` in base;
    r25 = dyn _Internal(<lang tzone_name()>);
    goto L10(r25);
  L133():
    r23 = dyn base3(<lang tzone_name()>);
    goto L10(r23);
  L136():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L138() else D13();
  L137():
    r28 = dyn base4(<lang Sys.getenv("TZDIR")>);
    goto L12(r28);
  D13():
    deopt 65 [];
  L13(c7):
    c12 = `as.logical`(c7);
    if c12 then L145() else L14(c12);
  L138():
    r30 = dyn Sys_getenv1("TZDIR");
    check L139() else D14();
  L141():
    grepl = ldf grepl;
    check L142() else D16();
  D14():
    deopt 67 [r30];
  D16():
    deopt 72 [c5];
  L14(c14):
    c18 = `as.logical`(c14);
    if c18 then L149() else L15();
  L139():
    nzchar1 = ldf nzchar in base;
    r31 = dyn nzchar1(r30);
    check L140() else D15();
  L142():
    p1 = prom<V +>{
      R_Version = ldf `R.Version`;
      r33 = dyn R_Version();
      c8 = `is.object`(r33);
      if c8 then L1() else L2(r33);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", r33);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r35):
      r36 = `$`(r35, <sym os>);
      goto L0(r36);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r38 = dyn grepl("darwin", p1);
    check L143() else D17();
  L145():
    dir_exists = ldf `dir.exists`;
    check L146() else D18();
  D15():
    deopt 69 [r31];
  D17():
    deopt 75 [c5, r38];
  D18():
    deopt 78 [c12];
  L15():
    goto L26();
  L26():
    Sys_getenv2 = ldf `Sys.getenv`;
    check L193() else D46();
  L140():
    goto L12(r31);
  L143():
    c9 = `as.logical`(r38);
    c10 = `&&`(c5, c9);
    goto L13(c10);
  L146():
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        R_home = ldf `R.home`;
        r39 = dyn R_home("share");
        return r39;
      };
      r41 = dyn file_path(p2, "zoneinfo");
      st zp = r41;
      invisible.0();
      return r41;
    };
    r43 = dyn dir_exists(p3);
    check L147() else D19();
  L149():
    tryCatch = ldf tryCatch;
    check L150() else D20();
  D19():
    deopt 80 [c12, r43];
  D20():
    deopt 83 [];
  D46():
    deopt 174 [];
  L147():
    c15 = `as.logical`(r43);
    c16 = `&&`(c12, c15);
    goto L14(c16);
  L150():
    p6 = prom<V +>{
      readLines = ldf readLines;
      p5 = prom<V +>{
        file_path1 = ldf `file.path`;
        p4 = prom<V +>{
          zp = ld zp;
          zp1 = force? zp;
          checkMissing(zp1);
          return zp1;
        };
        r45 = dyn file_path1(p4, "VERSION");
        return r45;
      };
      r47 = dyn readLines(p5);
      return r47;
    };
    p7 = prom<V +>{
      r49 = clos inner3708401697;
      return r49;
    };
    r51 = dyn tryCatch[, error](p6, p7);
    check L151() else D21();
  L193():
    r81 = dyn Sys_getenv2("TZDIR");
    check L194() else D47();
  D21():
    deopt 87 [r51];
  D47():
    deopt 176 [r81];
  L151():
    st veri = r51;
    tryCatch1 = ldf tryCatch;
    check L152() else D22();
  L194():
    r82 = `==`(r81, "macOS");
    c51 = `as.logical`(r82);
    if c51 then L195() else L27(c51);
  D22():
    deopt 90 [];
  L27(c53):
    c58 = `as.logical`(c53);
    if c58 then L199() else L28();
  L152():
    p8 = prom<V +>{
      readLines1 = ldf readLines;
      r52 = dyn readLines1("/var/db/timezone/zoneinfo/+VERSION");
      return r52;
    };
    p9 = prom<V +>{
      r54 = clos inner3708401697;
      return r54;
    };
    r56 = dyn tryCatch1[, error](p8, p9);
    check L153() else D23();
  L195():
    grepl1 = ldf grepl;
    check L196() else D48();
  D23():
    deopt 94 [r56];
  D48():
    deopt 180 [c51];
  L28():
    goto L29();
  L29():
    Sys_getenv3 = ldf `Sys.getenv`;
    check L203() else D52();
  L153():
    st vers = r56;
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L154() else L155();
  L196():
    p14 = prom<V +>{
      R_Version1 = ldf `R.Version`;
      r83 = dyn R_Version1();
      c54 = `is.object`(r83);
      if c54 then L1() else L2(r83);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", r83);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(r85):
      r86 = `$`(r85, <sym os>);
      goto L0(r86);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r88 = dyn grepl1("darwin", p14);
    check L197() else D49();
  L199():
    Sys_setenv1 = ldf `Sys.setenv`;
    check L200() else D50();
  D49():
    deopt 183 [c51, r88];
  D50():
    deopt 186 [];
  D52():
    deopt 193 [];
  L16(r58):
    r60 = `!`(r58);
    c19 = `as.logical`(r60);
    if c19 then L158() else L17(c19);
  L154():
    veri = ld veri;
    check L156() else D24();
  L155():
    r57 = dyn base5(<sym veri>, "error");
    goto L16(r57);
  L197():
    c55 = `as.logical`(r88);
    c56 = `&&`(c51, c55);
    goto L27(c56);
  L200():
    r89 = dyn Sys_setenv1[TZDIR]("/var/db/timezone/zoneinfo");
    check L201() else D51();
  L203():
    r91 = dyn Sys_getenv3("TZDIR");
    check L204() else D53();
  D24():
    deopt 98 [veri];
  D51():
    deopt 189 [r89];
  D53():
    deopt 195 [r91];
  L17(c21):
    c28 = `as.logical`(c21);
    if c28 then L164() else L19(c28);
  L156():
    veri1 = force? veri;
    checkMissing(veri1);
    inherits = ldf inherits in base;
    r59 = dyn inherits(veri1, "error", FALSE);
    check L157() else D25();
  L158():
    sym6 = ldf inherits;
    base6 = ldf inherits in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L159() else L160();
  L201():
    goto L29();
  L204():
    st tzdir = r91;
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L205() else L206();
  D25():
    deopt 103 [r59];
  L18(c24, r62):
    r64 = `!`(r62);
    c25 = `as.logical`(r64);
    c26 = `&&`(c24, c25);
    goto L17(c26);
  L19(c30):
    c34 = `as.logical`(c30);
    if c34 then L168() else L20();
  L30(r93):
    c59 = `as.logical`(r93);
    if c59 then L209() else L31(c59);
  L157():
    goto L16(r59);
  L159():
    vers = ld vers;
    check L161() else D26();
  L160():
    r61 = dyn base6(<sym vers>, "error");
    goto L18(c19, r61);
  L164():
    vers2 = ld vers;
    check L165() else D28();
  L205():
    tzdir = ld tzdir;
    check L207() else D54();
  L206():
    r92 = dyn base7(<sym tzdir>);
    goto L30(r92);
  D26():
    deopt 107 [c19, vers];
  D28():
    deopt 115 [c28, vers2];
  D54():
    deopt 199 [tzdir];
  L20():
    goto L25(NULL);
  L25(r79):
    goto L26();
  L31(c61):
    c65 = `as.logical`(c61);
    if c65 then L213() else L32();
  L161():
    vers1 = force? vers;
    checkMissing(vers1);
    inherits1 = ldf inherits in base;
    r63 = dyn inherits1(vers1, "error", FALSE);
    check L162() else D27();
  L165():
    vers3 = force? vers2;
    checkMissing(vers3);
    veri2 = ld veri;
    check L166() else D29();
  L168():
    substr = ldf substr;
    check L169() else D30();
  L207():
    tzdir1 = force? tzdir;
    checkMissing(tzdir1);
    nzchar2 = ldf nzchar in base;
    r94 = dyn nzchar2(tzdir1);
    check L208() else D55();
  L209():
    dir_exists1 = ldf `dir.exists`;
    check L210() else D56();
  D27():
    deopt 112 [c19, r63];
  D29():
    deopt 116 [c28, vers3, veri2];
  D30():
    deopt 121 [];
  D55():
    deopt 202 [r94];
  D56():
    deopt 204 [c59];
  L32():
    goto L33();
  L33():
    sym8 = ldf nzchar;
    base8 = ldf nzchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L215() else L216();
  L162():
    goto L18(c19, r63);
  L166():
    veri3 = force? veri2;
    checkMissing(veri3);
    r65 = `!=`(vers3, veri3);
    c31 = `as.logical`(r65);
    c32 = `&&`(c28, c31);
    goto L19(c32);
  L169():
    p10 = prom<V +>{
      veri4 = ld veri;
      veri5 = force? veri4;
      checkMissing(veri5);
      return veri5;
    };
    r67 = dyn substr(p10, 1, 4);
    check L170() else D31();
  L208():
    goto L30(r94);
  L210():
    p15 = prom<V +>{
      tzdir2 = ld tzdir;
      tzdir3 = force? tzdir2;
      checkMissing(tzdir3);
      return tzdir3;
    };
    r96 = dyn dir_exists1(p15);
    check L211() else D57();
  L213():
    st tzdir = "";
    goto L33();
  D31():
    deopt 125 [r67];
  D57():
    deopt 206 [c59, r96];
  L34(r100):
    r102 = `!`(r100);
    c66 = `as.logical`(r102);
    if c66 then L219() else L35();
  L170():
    st yri = r67;
    substr1 = ldf substr;
    check L171() else D32();
  L211():
    r97 = `!`(r96);
    c62 = `as.logical`(r97);
    c63 = `&&`(c59, c62);
    goto L31(c63);
  L215():
    tzdir4 = ld tzdir;
    check L217() else D58();
  L216():
    r99 = dyn base8(<sym tzdir>);
    goto L34(r99);
  D32():
    deopt 128 [];
  D58():
    deopt 216 [tzdir4];
  L35():
    goto L44();
  L44():
    dir_exists9 = ldf `dir.exists`;
    check L249() else D74();
  L171():
    p11 = prom<V +>{
      veri6 = ld veri;
      veri7 = force? veri6;
      checkMissing(veri7);
      return veri7;
    };
    r69 = dyn substr1(p11, 5.0, 5.0);
    check L172() else D33();
  L217():
    tzdir5 = force? tzdir4;
    checkMissing(tzdir5);
    nzchar3 = ldf nzchar in base;
    r101 = dyn nzchar3(tzdir5);
    check L218() else D59();
  L219():
    dir_exists2 = ldf `dir.exists`;
    check L220() else D60();
  D33():
    deopt 132 [r69];
  D59():
    deopt 219 [r101];
  D60():
    deopt 222 [];
  D74():
    deopt 263 [];
  L172():
    st sufi = r69;
    substr2 = ldf substr;
    check L173() else D34();
  L218():
    goto L34(r101);
  L220():
    p16 = prom<V +>{
      st tzdir = "/usr/share/zoneinfo";
      invisible.0();
      return "/usr/share/zoneinfo";
    };
    r104 = dyn dir_exists2(p16);
    check L221() else D61();
  L249():
    r119 = dyn dir_exists9("/run/systemd/system");
    check L250() else D75();
  D34():
    deopt 135 [];
  D61():
    deopt 224 [r104];
  D75():
    deopt 265 [r119];
  L173():
    p12 = prom<V +>{
      vers4 = ld vers;
      vers5 = force? vers4;
      checkMissing(vers5);
      return vers5;
    };
    r71 = dyn substr2(p12, 1, 4);
    check L174() else D35();
  L221():
    c67 = `as.logical`(r104);
    if c67 then L36(c67) else L222();
  L250():
    c104 = `as.logical`(r119);
    if c104 then L251() else L45(c104);
  D35():
    deopt 139 [r71];
  L36(c68):
    c73 = `as.logical`(c68);
    if c73 then L37(c73) else L226();
  L45(c106):
    c113 = `as.logical`(c106);
    if c113 then L258() else L47();
  L174():
    st yrs = r71;
    substr3 = ldf substr;
    check L175() else D36();
  L222():
    dir_exists3 = ldf `dir.exists`;
    check L223() else D62();
  L251():
    sym9 = ldf nzchar;
    base9 = ldf nzchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L252() else L253();
  D36():
    deopt 142 [];
  D62():
    deopt 226 [c67];
  L37(c74):
    c79 = `as.logical`(c74);
    if c79 then L38(c79) else L230();
  L46(c109, r121):
    c110 = `as.logical`(r121);
    c111 = `&&`(c109, c110);
    goto L45(c111);
  L47():
    goto L56();
  L56():
    grepl2 = ldf grepl;
    check L292() else D99();
  L175():
    p13 = prom<V +>{
      vers6 = ld vers;
      vers7 = force? vers6;
      checkMissing(vers7);
      return vers7;
    };
    r73 = dyn substr3(p13, 5.0, 5.0);
    check L176() else D37();
  L223():
    p17 = prom<V +>{
      st tzdir = "/share/zoneinfo";
      invisible.0();
      return "/share/zoneinfo";
    };
    r106 = dyn dir_exists3(p17);
    check L224() else D63();
  L226():
    dir_exists4 = ldf `dir.exists`;
    check L227() else D64();
  L252():
    Sys_which = ldf `Sys.which`;
    check L254() else D76();
  L253():
    r120 = dyn base9(<lang Sys.which("timedatectl")>);
    goto L46(c104, r120);
  L258():
    system = ldf system;
    check L259() else D79();
  D37():
    deopt 146 [r73];
  D63():
    deopt 228 [c67, r106];
  D64():
    deopt 231 [c73];
  D76():
    deopt 269 [c104];
  D79():
    deopt 276 [];
  D99():
    deopt 340 [];
  L38(c80):
    c85 = `as.logical`(c80);
    if c85 then L39(c85) else L234();
  L176():
    st sufs = r73;
    yrs = ld yrs;
    check L177() else D38();
  L224():
    c70 = `as.logical`(r106);
    c71 = `||`(c67, c70);
    goto L36(c71);
  L227():
    p18 = prom<V +>{
      st tzdir = "/usr/share/lib/zoneinfo";
      invisible.0();
      return "/usr/share/lib/zoneinfo";
    };
    r108 = dyn dir_exists4(p18);
    check L228() else D65();
  L230():
    dir_exists5 = ldf `dir.exists`;
    check L231() else D66();
  L254():
    r122 = dyn Sys_which("timedatectl");
    check L255() else D77();
  L259():
    r124 = dyn system[, intern]("timedatectl", TRUE);
    check L260() else D80();
  L292():
    p35 = prom<V +>{
      R_Version2 = ldf `R.Version`;
      r161 = dyn R_Version2();
      c119 = `is.object`(r161);
      if c119 then L1() else L2(r161);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", r161);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(r163):
      r164 = `$`(r163, <sym platform>);
      goto L0(r164);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r166 = dyn grepl2[, , `ignore.case`]("linux", p35, TRUE);
    check L293() else D100();
  D38():
    deopt 148 [yrs];
  D65():
    deopt 233 [c73, r108];
  D66():
    deopt 236 [c79];
  D77():
    deopt 271 [c104, r122];
  D80():
    deopt 280 [r124];
  D100():
    deopt 345 [r166];
  L39(c86):
    c91 = `as.logical`(c86);
    if c91 then L40(c91) else L238();
  L177():
    yrs1 = force? yrs;
    checkMissing(yrs1);
    yri = ld yri;
    check L178() else D39();
  L228():
    c76 = `as.logical`(r108);
    c77 = `||`(c73, c76);
    goto L37(c77);
  L231():
    p19 = prom<V +>{
      st tzdir = "/usr/lib/zoneinfo";
      invisible.0();
      return "/usr/lib/zoneinfo";
    };
    r110 = dyn dir_exists5(p19);
    check L232() else D67();
  L234():
    dir_exists6 = ldf `dir.exists`;
    check L235() else D68();
  L255():
    nzchar4 = ldf nzchar in base;
    r123 = dyn nzchar4(r122);
    check L256() else D78();
  L260():
    st inf = r124;
    grep = ldf grep;
    check L261() else D81();
  L293():
    c120 = `as.logical`(r166);
    if c120 then L294() else L57(c120);
  D39():
    deopt 149 [yrs1, yri];
  D67():
    deopt 238 [c79, r110];
  D68():
    deopt 241 [c85];
  D78():
    deopt 273 [c104, r123];
  D81():
    deopt 283 [];
  L40(c92):
    c97 = `as.logical`(c92);
    if c97 then L41(c97) else L242();
  L57(c122):
    c126 = `as.logical`(c122);
    if c126 then L298() else L58();
  L178():
    yri1 = force? yri;
    checkMissing(yri1);
    r74 = `>`(yrs1, yri1);
    c35 = `as.logical`(r74);
    if c35 then L21(c35) else L179();
  L232():
    c82 = `as.logical`(r110);
    c83 = `||`(c79, c82);
    goto L38(c83);
  L235():
    p20 = prom<V +>{
      st tzdir = "/usr/local/etc/zoneinfo";
      invisible.0();
      return "/usr/local/etc/zoneinfo";
    };
    r112 = dyn dir_exists6(p20);
    check L236() else D69();
  L238():
    dir_exists7 = ldf `dir.exists`;
    check L239() else D70();
  L256():
    goto L46(c104, r123);
  L261():
    p23 = prom<V +>{
      inf = ld inf;
      inf1 = force? inf;
      checkMissing(inf1);
      return inf1;
    };
    r126 = dyn grep("Time zone: ", p23);
    check L262() else D82();
  L294():
    file_exists1 = ldf `file.exists`;
    check L295() else D101();
  D69():
    deopt 243 [c85, r112];
  D70():
    deopt 246 [c91];
  D82():
    deopt 286 [r126];
  D101():
    deopt 347 [c120];
  L21(c36):
    c50 = `as.logical`(c36);
    if c50 then L187() else L23();
  L41(c98):
    c103 = `as.logical`(c98);
    if c103 then L246() else L42();
  L58():
    goto L69();
  L69():
    file_exists3 = ldf `file.exists`;
    check L336() else D123();
  L179():
    yrs2 = ld yrs;
    check L180() else D40();
  L236():
    c88 = `as.logical`(r112);
    c89 = `||`(c85, c88);
    goto L39(c89);
  L239():
    p21 = prom<V +>{
      st tzdir = "/etc/zoneinfo";
      invisible.0();
      return "/etc/zoneinfo";
    };
    r114 = dyn dir_exists7(p21);
    check L240() else D71();
  L242():
    dir_exists8 = ldf `dir.exists`;
    check L243() else D72();
  L262():
    st lines = r126;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L263() else L264();
  L295():
    r167 = dyn file_exists1("/etc/timezone");
    check L296() else D102();
  L298():
    try = ldf try;
    check L299() else D103();
  D40():
    deopt 152 [c35, yrs2];
  D71():
    deopt 248 [c91, r114];
  D72():
    deopt 251 [c97];
  D102():
    deopt 349 [c120, r167];
  D103():
    deopt 352 [];
  D123():
    deopt 418 [];
  L23():
    goto L24(NULL);
  L24(r78):
    goto L25(r78);
  L42():
    st tzdir = "";
    goto L43("");
  L43(r117):
    goto L44();
  L48(r128):
    c114 = `as.logical`(r128);
    if c114 then L267() else L49();
  L180():
    yrs3 = force? yrs2;
    checkMissing(yrs3);
    yri2 = ld yri;
    check L181() else D41();
  L187():
    Sys_setenv = ldf `Sys.setenv`;
    check L188() else D44();
  L240():
    c94 = `as.logical`(r114);
    c95 = `||`(c91, c94);
    goto L40(c95);
  L243():
    p22 = prom<V +>{
      st tzdir = "/usr/etc/zoneinfo";
      invisible.0();
      return "/usr/etc/zoneinfo";
    };
    r116 = dyn dir_exists8(p22);
    check L244() else D73();
  L246():
    goto L43(NULL);
  L263():
    lines = ld lines;
    check L265() else D83();
  L264():
    r127 = dyn base10(<sym lines>);
    goto L48(r127);
  L296():
    c123 = `as.logical`(r167);
    c124 = `&&`(c120, c123);
    goto L57(c124);
  L299():
    p36 = prom<V +>{
      readLines2 = ldf readLines;
      r168 = dyn readLines2("/etc/timezone");
      return r168;
    };
    r170 = dyn try(p36);
    check L300() else D104();
  L336():
    p47 = prom<V +>{
      st lt0 = "/etc/localtime";
      invisible.0();
      return "/etc/localtime";
    };
    r207 = dyn file_exists3(p47);
    check L337() else D124();
  D41():
    deopt 153 [c35, yrs3, yri2];
  D44():
    deopt 163 [];
  D73():
    deopt 253 [c97, r116];
  D83():
    deopt 290 [lines];
  D104():
    deopt 354 [r170];
  D124():
    deopt 420 [r207];
  L49():
    goto L55(NULL);
  L55(r159):
    goto L56();
  L181():
    yri3 = force? yri2;
    checkMissing(yri3);
    r75 = `==`(yrs3, yri3);
    c38 = `as.logical`(r75);
    if c38 then L182() else L22(c35, c38);
  L188():
    r77 = dyn Sys_setenv[TZDIR]("macOS");
    check L189() else D45();
  L244():
    c100 = `as.logical`(r116);
    c101 = `||`(c97, c100);
    goto L41(c101);
  L265():
    lines1 = force? lines;
    checkMissing(lines1);
    length = ldf length in base;
    r129 = dyn length(lines1);
    check L266() else D84();
  L267():
    sub = ldf sub;
    check L268() else D85();
  L300():
    st tz0 = r170;
    sym12 = ldf inherits;
    base12 = ldf inherits in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L301() else L302();
  L337():
    c139 = `as.logical`(r207);
    if c139 then L70(c139) else L338();
  D45():
    deopt 166 [r77];
  D84():
    deopt 293 [r129];
  D85():
    deopt 295 [];
  L22(c41, c42):
    c47 = `as.logical`(c42);
    c48 = `||`(c41, c47);
    goto L21(c48);
  L59(r172):
    r174 = `!`(r172);
    c127 = `as.logical`(r174);
    if c127 then L305() else L60(c127);
  L70(c140):
    c145 = `as.logical`(c140);
    if c145 then L71(c145) else L342();
  L182():
    sufs = ld sufs;
    check L183() else D42();
  L189():
    goto L24(r77);
  L266():
    goto L48(r129);
  L268():
    p25 = prom<V +>{
      sub1 = ldf sub;
      p24 = prom<V +>{
        inf2 = ld inf;
        inf3 = force? inf2;
        checkMissing(inf3);
        c115 = `is.object`(inf3);
        if c115 then L2() else L3(inf3);
      L0(dx7):
        return dx7;
      L2():
        dr6 = tryDispatchBuiltin.1("[", inf3);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L4() else L3(dr6);
      L3(inf5):
        lines2 = ld lines;
        lines3 = force? lines2;
        checkMissing(lines3);
        c116 = `is.object`(lines3);
        if c116 then L5() else L6(inf5, lines3);
      L1(inf9, dx9):
        __1 = ldf `[` in base;
        r131 = dyn __1(inf9, dx9);
        goto L0(r131);
      L4():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      L5():
        dr8 = tryDispatchBuiltin.1("[", lines3);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L7() else L6(inf5, dr8);
      L6(inf7, lines5):
        __ = ldf `[` in base;
        r130 = dyn __(lines5, 1);
        goto L1(inf7, r130);
      L7():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L1(inf5, dx8);
      };
      r133 = dyn sub1(" *Time zone: ", "", p24);
      return r133;
    };
    r135 = dyn sub(" .*", "", p25);
    check L269() else D86();
  L301():
    tz18 = ld tz0;
    check L303() else D105();
  L302():
    r171 = dyn base12(<sym tz0>, "try-error");
    goto L59(r171);
  L338():
    file_exists4 = ldf `file.exists`;
    check L339() else D125();
  D42():
    deopt 156 [c35, c38, sufs];
  D86():
    deopt 299 [r135];
  D105():
    deopt 358 [tz18];
  D125():
    deopt 422 [c139];
  L60(c129):
    c136 = `as.logical`(c129);
    if c136 then L311() else L62();
  L71(c146):
    c151 = `as.logical`(c146);
    if c151 then L72(c151) else L346();
  L183():
    sufs1 = force? sufs;
    checkMissing(sufs1);
    sufi = ld sufi;
    check L184() else D43();
  L269():
    st tz = r135;
    sym11 = ldf nzchar;
    base11 = ldf nzchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L270() else L271();
  L303():
    tz19 = force? tz18;
    checkMissing(tz19);
    inherits2 = ldf inherits in base;
    r173 = dyn inherits2(tz19, "try-error", FALSE);
    check L304() else D106();
  L305():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L306() else L307();
  L339():
    p48 = prom<V +>{
      st lt0 = "/usr/local/etc/localtime";
      invisible.0();
      return "/usr/local/etc/localtime";
    };
    r209 = dyn file_exists4(p48);
    check L340() else D126();
  L342():
    file_exists5 = ldf `file.exists`;
    check L343() else D127();
  D43():
    deopt 157 [c35, c38, sufs1, sufi];
  D106():
    deopt 363 [r173];
  D126():
    deopt 424 [c139, r209];
  D127():
    deopt 427 [c145];
  L50(r137):
    c117 = `as.logical`(r137);
    if c117 then L274() else L51();
  L61(c132, r176):
    r178 = `==`(r176, 1);
    c133 = `as.logical`(r178);
    c134 = `&&`(c132, c133);
    goto L60(c134);
  L62():
    goto L68(NULL);
  L68(r204):
    goto L69();
  L72(c152):
    c157 = `as.logical`(c152);
    if c157 then L350() else L73(c157);
  L184():
    sufi1 = force? sufi;
    checkMissing(sufi1);
    r76 = `>`(sufs1, sufi1);
    c43 = `as.logical`(r76);
    c44 = `&&`(c38, c43);
    goto L22(c35, c44);
  L270():
    tzdir6 = ld tzdir;
    check L272() else D87();
  L271():
    r136 = dyn base11(<sym tzdir>);
    goto L50(r136);
  L304():
    goto L59(r173);
  L306():
    tz20 = ld tz0;
    check L308() else D107();
  L307():
    r175 = dyn base13(<sym tz0>);
    goto L61(c127, r175);
  L311():
    trimws = ldf trimws;
    check L312() else D109();
  L340():
    c142 = `as.logical`(r209);
    c143 = `||`(c139, c142);
    goto L70(c143);
  L343():
    p49 = prom<V +>{
      st lt0 = "/usr/local/etc/zoneinfo/localtime";
      invisible.0();
      return "/usr/local/etc/zoneinfo/localtime";
    };
    r211 = dyn file_exists5(p49);
    check L344() else D128();
  L346():
    file_exists6 = ldf `file.exists`;
    check L347() else D129();
  D87():
    deopt 303 [tzdir6];
  D107():
    deopt 367 [c127, tz20];
  D109():
    deopt 375 [];
  D128():
    deopt 429 [c145, r211];
  D129():
    deopt 432 [c151];
  L51():
    cacheIt1 = ldf cacheIt;
    check L286() else D96();
  L73(c159):
    c166 = `as.logical`(c159);
    if c166 then L357() else L75(c166);
  L272():
    tzdir7 = force? tzdir6;
    checkMissing(tzdir7);
    nzchar5 = ldf nzchar in base;
    r138 = dyn nzchar5(tzdir7);
    check L273() else D88();
  L274():
    file_exists = ldf `file.exists`;
    check L275() else D89();
  L308():
    tz21 = force? tz20;
    checkMissing(tz21);
    length1 = ldf length in base;
    r177 = dyn length1(tz21);
    check L309() else D108();
  L312():
    p37 = prom<V +>{
      tz22 = ld tz0;
      tz23 = force? tz22;
      checkMissing(tz23);
      return tz23;
    };
    r180 = dyn trimws(p37);
    check L313() else D110();
  L344():
    c148 = `as.logical`(r211);
    c149 = `||`(c145, c148);
    goto L71(c149);
  L347():
    p50 = prom<V +>{
      st lt0 = "/var/db/timezone/localtime";
      invisible.0();
      return "/var/db/timezone/localtime";
    };
    r213 = dyn file_exists6(p50);
    check L348() else D130();
  L350():
    sym15 = ldf `is.na`;
    base15 = ldf `is.na` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L351() else L352();
  D88():
    deopt 306 [r138];
  D89():
    deopt 308 [];
  D96():
    deopt 329 [];
  D108():
    deopt 370 [c127, r177];
  D110():
    deopt 377 [r180];
  D130():
    deopt 434 [c151, r213];
  L74(c162, r215):
    r219 = `!`(r215);
    c163 = `as.logical`(r219);
    c164 = `&&`(c162, c163);
    goto L73(c164);
  L75(c168):
    c175 = `as.logical`(c168);
    if c175 then L363() else L77();
  L273():
    goto L50(r138);
  L275():
    p28 = prom<V +>{
      file_path2 = ldf `file.path`;
      p26 = prom<V +>{
        tzdir8 = ld tzdir;
        tzdir9 = force? tzdir8;
        checkMissing(tzdir9);
        return tzdir9;
      };
      p27 = prom<V +>{
        tz6 = ld tz;
        tz7 = force? tz6;
        checkMissing(tz7);
        return tz7;
      };
      r141 = dyn file_path2(p26, p27);
      return r141;
    };
    r143 = dyn file_exists(p28);
    check L276() else D90();
  L286():
    p34 = prom<V +>{
      tz14 = ld tz;
      tz15 = force? tz14;
      checkMissing(tz15);
      return tz15;
    };
    r158 = dyn cacheIt1(p34);
    check L287() else D97();
  L309():
    goto L61(c127, r177);
  L313():
    st tz = r180;
    sym14 = ldf nzchar;
    base14 = ldf nzchar in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L314() else L315();
  L348():
    c154 = `as.logical`(r213);
    c155 = `||`(c151, c154);
    goto L72(c155);
  L351():
    Sys_readlink = ldf `Sys.readlink`;
    check L353() else D131();
  L352():
    r214 = dyn base15(<lang `<-`(lt, Sys.readlink(lt0))>);
    goto L74(c157, r214);
  L357():
    sym16 = ldf nzchar;
    base16 = ldf nzchar in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L358() else L359();
  D90():
    deopt 310 [r143];
  D97():
    deopt 331 [r158];
  D131():
    deopt 439 [c157];
  L63(r182):
    c137 = `as.logical`(r182);
    if c137 then L318() else L64();
  L76(c171, r221):
    c172 = `as.logical`(r221);
    c173 = `&&`(c171, c172);
    goto L75(c173);
  L77():
    goto L87();
  L87():
    sym19 = ldf nzchar;
    base19 = ldf nzchar in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L399() else L400();
  L276():
    c118 = `as.logical`(r143);
    if c118 then L277() else L52();
  L287():
    tz16 = ld tz;
    check L288() else D98();
  L314():
    tzdir10 = ld tzdir;
    check L316() else D111();
  L315():
    r181 = dyn base14(<sym tzdir>);
    goto L63(r181);
  L353():
    p51 = prom<V +>{
      lt0 = ld lt0;
      lt1 = force? lt0;
      checkMissing(lt1);
      return lt1;
    };
    r217 = dyn Sys_readlink(p51);
    check L354() else D132();
  L358():
    lt2 = ld lt;
    check L360() else D134();
  L359():
    r220 = dyn base16(<sym lt>);
    goto L76(c166, r220);
  L363():
    st tz = NA_STR;
    sym17 = ldf nzchar;
    base17 = ldf nzchar in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L364() else L365();
  D98():
    deopt 332 [tz16];
  D111():
    deopt 381 [tzdir10];
  D132():
    deopt 441 [c157, r217];
  D134():
    deopt 449 [c166, lt2];
  L52():
    warning = ldf warning;
    check L283() else D94();
  L64():
    cacheIt3 = ldf cacheIt;
    check L330() else D120();
  L78(r224):
    c176 = `as.logical`(r224);
    if c176 then L368() else L79(c176);
  L88(r258):
    c191 = `as.logical`(r258);
    if c191 then L403() else L89(c191);
  L277():
    cacheIt = ldf cacheIt;
    check L278() else D91();
  L288():
    tz17 = force? tz16;
    checkMissing(tz17);
    popenv;
    return tz17;
  L316():
    tzdir11 = force? tzdir10;
    checkMissing(tzdir11);
    nzchar6 = ldf nzchar in base;
    r183 = dyn nzchar6(tzdir11);
    check L317() else D112();
  L318():
    file_exists2 = ldf `file.exists`;
    check L319() else D113();
  L354():
    st lt = r217;
    is_na1 = ldf `is.na` in base;
    r218 = dyn is_na1(r217);
    check L355() else D133();
  L360():
    lt3 = force? lt2;
    checkMissing(lt3);
    nzchar7 = ldf nzchar in base;
    r222 = dyn nzchar7(lt3);
    check L361() else D135();
  L364():
    tzdir14 = ld tzdir;
    check L366() else D136();
  L365():
    r223 = dyn base17(<sym tzdir>);
    goto L78(r223);
  L399():
    tzdir18 = ld tzdir;
    check L401() else D155();
  L400():
    r257 = dyn base19(<sym tzdir>);
    goto L88(r257);
  D91():
    deopt 312 [];
  D94():
    deopt 319 [];
  D112():
    deopt 384 [r183];
  D113():
    deopt 386 [];
  D120():
    deopt 407 [];
  D133():
    deopt 444 [c157, r218];
  D135():
    deopt 452 [c166, r222];
  D136():
    deopt 459 [tzdir14];
  D155():
    deopt 519 [tzdir18];
  L79(c178):
    c182 = `as.logical`(c178);
    if c182 then L80(c182) else L372();
  L89(c193):
    c215 = `as.logical`(c193);
    if c215 then L416() else L93();
  L278():
    p29 = prom<V +>{
      tz8 = ld tz;
      tz9 = force? tz8;
      checkMissing(tz9);
      return tz9;
    };
    r145 = dyn cacheIt(p29);
    check L279() else D92();
  L283():
    p33 = prom<V +>{
      sprintf = ldf sprintf;
      p30 = prom<V +>{
        sQuote = ldf sQuote;
        r148 = dyn sQuote("timedatectl");
        return r148;
      };
      p32 = prom<V +>{
        sQuote1 = ldf sQuote;
        p31 = prom<V +>{
          tz12 = ld tz;
          tz13 = force? tz12;
          checkMissing(tz13);
          return tz13;
        };
        r151 = dyn sQuote1(p31);
        return r151;
      };
      r153 = dyn sprintf("%s indicates the non-existent timezone name %s", p30, p32);
      return r153;
    };
    r155 = dyn warning[, `call.`, `immediate.`, domain](p33, FALSE, TRUE, NA_LGL);
    check L284() else D95();
  L317():
    goto L63(r183);
  L319():
    p40 = prom<V +>{
      file_path3 = ldf `file.path`;
      p38 = prom<V +>{
        tzdir12 = ld tzdir;
        tzdir13 = force? tzdir12;
        checkMissing(tzdir13);
        return tzdir13;
      };
      p39 = prom<V +>{
        tz24 = ld tz;
        tz25 = force? tz24;
        checkMissing(tz25);
        return tz25;
      };
      r186 = dyn file_path3(p38, p39);
      return r186;
    };
    r188 = dyn file_exists2(p40);
    check L320() else D114();
  L330():
    p46 = prom<V +>{
      tz32 = ld tz;
      tz33 = force? tz32;
      checkMissing(tz33);
      return tz33;
    };
    r203 = dyn cacheIt3(p46);
    check L331() else D121();
  L355():
    goto L74(c157, r218);
  L361():
    goto L76(c166, r222);
  L366():
    tzdir15 = force? tzdir14;
    checkMissing(tzdir15);
    nzchar8 = ldf nzchar in base;
    r225 = dyn nzchar8(tzdir15);
    check L367() else D137();
  L368():
    grepl3 = ldf grepl;
    check L369() else D138();
  L401():
    tzdir19 = force? tzdir18;
    checkMissing(tzdir19);
    nzchar9 = ldf nzchar in base;
    r259 = dyn nzchar9(tzdir19);
    check L402() else D156();
  L403():
    sym20 = ldf `is.na`;
    base20 = ldf `is.na` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L404() else L405();
  D92():
    deopt 314 [r145];
  D95():
    deopt 327 [r155];
  D114():
    deopt 388 [r188];
  D121():
    deopt 409 [r203];
  D137():
    deopt 462 [r225];
  D138():
    deopt 464 [c176];
  D156():
    deopt 522 [r259];
  L80(c183):
    c188 = `as.logical`(c183);
    if c188 then L376() else L81();
  L90(c196, r261):
    c197 = `as.logical`(r261);
    if c197 then L91(c196, c197) else L409();
  L93():
    goto L101();
  L101():
    popenv;
    return NA_STR;
  L279():
    tz10 = ld tz;
    check L280() else D93();
  L284():
    goto L55(r155);
  L320():
    c138 = `as.logical`(r188);
    if c138 then L321() else L65();
  L331():
    tz34 = ld tz;
    check L332() else D122();
  L367():
    goto L78(r225);
  L369():
    p53 = prom<V +>{
      paste0 = ldf paste0;
      p52 = prom<V +>{
        tzdir16 = ld tzdir;
        tzdir17 = force? tzdir16;
        checkMissing(tzdir17);
        return tzdir17;
      };
      r227 = dyn paste0("^", p52, "/");
      st pat = r227;
      invisible.0();
      return r227;
    };
    p54 = prom<V +>{
      lt4 = ld lt;
      lt5 = force? lt4;
      checkMissing(lt5);
      return lt5;
    };
    r230 = dyn grepl3(p53, p54);
    check L370() else D139();
  L372():
    grepl4 = ldf grepl;
    check L373() else D140();
  L402():
    goto L88(r259);
  L404():
    Sys_readlink1 = ldf `Sys.readlink`;
    check L406() else D157();
  L405():
    r260 = dyn base20(<lang `<-`(lt, Sys.readlink(lt0))>);
    goto L90(c191, r260);
  L416():
    warning2 = ldf warning;
    check L417() else D162();
  D93():
    deopt 315 [tz10];
  D122():
    deopt 410 [tz34];
  D139():
    deopt 467 [c176, r230];
  D140():
    deopt 470 [c182];
  D157():
    deopt 526 [c191];
  D162():
    deopt 542 [];
  L65():
    warning1 = ldf warning;
    check L327() else D118();
  L81():
    grepl5 = ldf grepl;
    check L380() else D144();
  L82():
    sym18 = ldf `is.na`;
    base18 = ldf `is.na` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L386() else L387();
  L91(c198, c199):
    c212 = `as.logical`(c199);
    c213 = `&&`(c198, c212);
    goto L89(c213);
  L280():
    tz11 = force? tz10;
    checkMissing(tz11);
    popenv;
    return tz11;
  L321():
    cacheIt2 = ldf cacheIt;
    check L322() else D115();
  L332():
    tz35 = force? tz34;
    checkMissing(tz35);
    popenv;
    return tz35;
  L370():
    c179 = `as.logical`(r230);
    c180 = `&&`(c176, c179);
    goto L79(c180);
  L373():
    p55 = prom<V +>{
      st pat = "^/usr/share/zoneinfo.default/";
      invisible.0();
      return "^/usr/share/zoneinfo.default/";
    };
    p56 = prom<V +>{
      lt6 = ld lt;
      lt7 = force? lt6;
      checkMissing(lt7);
      return lt7;
    };
    r233 = dyn grepl4(p55, p56);
    check L374() else D141();
  L376():
    sub2 = ldf sub;
    check L377() else D142();
  L406():
    p66 = prom<V +>{
      lt16 = ld lt0;
      lt17 = force? lt16;
      checkMissing(lt17);
      return lt17;
    };
    r263 = dyn Sys_readlink1(p66);
    check L407() else D158();
  L409():
    sym21 = ldf nzchar;
    base21 = ldf nzchar in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L410() else L411();
  L417():
    p69 = prom<V +>{
      sprintf2 = ldf sprintf;
      p68 = prom<V +>{
        sQuote5 = ldf sQuote;
        p67 = prom<V +>{
          lt20 = ld lt0;
          lt21 = force? lt20;
          checkMissing(lt21);
          return lt21;
        };
        r270 = dyn sQuote5(p67);
        return r270;
      };
      r272 = dyn sprintf2("Your system is mis-configured: %s is not a symlink", p68);
      return r272;
    };
    r274 = dyn warning2[, `call.`, `immediate.`, domain](p69, FALSE, TRUE, NA_LGL);
    check L418() else D163();
  D115():
    deopt 390 [];
  D118():
    deopt 397 [];
  D141():
    deopt 473 [c182, r233];
  D142():
    deopt 476 [];
  D144():
    deopt 483 [];
  D158():
    deopt 528 [c191, r263];
  D163():
    deopt 550 [r274];
  L84(r245):
    r247 = `!`(r245);
    c190 = `as.logical`(r247);
    if c190 then L390() else L85();
  L92(c206, c207, r266):
    r268 = `!`(r266);
    c208 = `as.logical`(r268);
    c209 = `||`(c207, c208);
    goto L91(c206, c209);
  L322():
    p41 = prom<V +>{
      tz26 = ld tz;
      tz27 = force? tz26;
      checkMissing(tz27);
      return tz27;
    };
    r190 = dyn cacheIt2(p41);
    check L323() else D116();
  L327():
    p45 = prom<V +>{
      sprintf1 = ldf sprintf;
      p42 = prom<V +>{
        sQuote2 = ldf sQuote;
        r193 = dyn sQuote2("/etc/timezone");
        return r193;
      };
      p44 = prom<V +>{
        sQuote3 = ldf sQuote;
        p43 = prom<V +>{
          tz30 = ld tz;
          tz31 = force? tz30;
          checkMissing(tz31);
          return tz31;
        };
        r196 = dyn sQuote3(p43);
        return r196;
      };
      r198 = dyn sprintf1("%s indicates the non-existent timezone name %s", p42, p44);
      return r198;
    };
    r200 = dyn warning1[, `call.`, `immediate.`, domain](p45, FALSE, TRUE, NA_LGL);
    check L328() else D119();
  L374():
    c185 = `as.logical`(r233);
    c186 = `||`(c182, c185);
    goto L80(c186);
  L377():
    p57 = prom<V +>{
      pat = ld pat;
      pat1 = force? pat;
      checkMissing(pat1);
      return pat1;
    };
    p58 = prom<V +>{
      lt8 = ld lt;
      lt9 = force? lt8;
      checkMissing(lt9);
      return lt9;
    };
    r236 = dyn sub2(p57, "", p58);
    check L378() else D143();
  L380():
    p59 = prom<V +>{
      st pat = ".*/zoneinfo/(.*)";
      invisible.0();
      return ".*/zoneinfo/(.*)";
    };
    p60 = prom<V +>{
      lt10 = ld lt;
      lt11 = force? lt10;
      checkMissing(lt11);
      return lt11;
    };
    r240 = dyn grepl5(p59, p60);
    check L381() else D145();
  L386():
    tz36 = ld tz;
    check L388() else D148();
  L387():
    r244 = dyn base18(<sym tz>);
    goto L84(r244);
  L407():
    st lt = r263;
    is_na3 = ldf `is.na` in base;
    r264 = dyn is_na3(r263);
    check L408() else D159();
  L410():
    lt18 = ld lt;
    check L412() else D160();
  L411():
    r265 = dyn base21(<sym lt>);
    goto L92(c196, c197, r265);
  L418():
    sym22 = ldf nzchar;
    base22 = ldf nzchar in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L419() else L420();
  D116():
    deopt 392 [r190];
  D119():
    deopt 405 [r200];
  D143():
    deopt 480 [r236];
  D145():
    deopt 486 [r240];
  D148():
    deopt 498 [tz36];
  D159():
    deopt 531 [c191, r264];
  D160():
    deopt 534 [c196, c197, lt18];
  L85():
    message = ldf message;
    check L396() else D153();
  L94(r276):
    c216 = `as.logical`(r276);
    if c216 then L424() else L95();
  L323():
    tz28 = ld tz;
    check L324() else D117();
  L328():
    goto L68(r200);
  L378():
    st tz = r236;
    goto L82();
  L381():
    c189 = `as.logical`(r240);
    if c189 then L382() else L83();
  L388():
    tz37 = force? tz36;
    checkMissing(tz37);
    is_na2 = ldf `is.na` in base;
    r246 = dyn is_na2(tz37);
    check L389() else D149();
  L390():
    cacheIt4 = ldf cacheIt;
    check L391() else D150();
  L408():
    goto L90(c191, r264);
  L412():
    lt19 = force? lt18;
    checkMissing(lt19);
    nzchar10 = ldf nzchar in base;
    r267 = dyn nzchar10(lt19);
    check L413() else D161();
  L419():
    Sys_which1 = ldf `Sys.which`;
    check L421() else D164();
  L420():
    r275 = dyn base22(<lang Sys.which("cmp")>);
    goto L94(r275);
  D117():
    deopt 393 [tz28];
  D149():
    deopt 501 [r246];
  D150():
    deopt 504 [];
  D153():
    deopt 511 [];
  D161():
    deopt 537 [c196, c197, r267];
  D164():
    deopt 554 [];
  L83():
    goto L82();
  L95():
    goto L100(NULL);
  L100(r310):
    goto L101();
  L324():
    tz29 = force? tz28;
    checkMissing(tz29);
    popenv;
    return tz29;
  L382():
    sub3 = ldf sub;
    check L383() else D146();
  L389():
    goto L84(r246);
  L391():
    p63 = prom<V +>{
      tz38 = ld tz;
      tz39 = force? tz38;
      checkMissing(tz39);
      return tz39;
    };
    r249 = dyn cacheIt4(p63);
    check L392() else D151();
  L396():
    p65 = prom<V +>{
      sQuote4 = ldf sQuote;
      p64 = prom<V +>{
        lt14 = ld lt;
        lt15 = force? lt14;
        checkMissing(lt15);
        return lt15;
      };
      r253 = dyn sQuote4(p64);
      return r253;
    };
    r255 = dyn message("unable to deduce timezone name from ", p65);
    check L397() else D154();
  L413():
    goto L92(c196, c197, r267);
  L421():
    r277 = dyn Sys_which1("cmp");
    check L422() else D165();
  L424():
    dir = ldf dir;
    check L425() else D167();
  D146():
    deopt 488 [];
  D151():
    deopt 506 [r249];
  D154():
    deopt 514 [r255];
  D165():
    deopt 556 [r277];
  D167():
    deopt 560 [];
  L383():
    p61 = prom<V +>{
      pat2 = ld pat;
      pat3 = force? pat2;
      checkMissing(pat3);
      return pat3;
    };
    p62 = prom<V +>{
      lt12 = ld lt;
      lt13 = force? lt12;
      checkMissing(lt13);
      return lt13;
    };
    r243 = dyn sub3(p61, "\\1", p62);
    check L384() else D147();
  L392():
    tz40 = ld tz;
    check L393() else D152();
  L397():
    goto L87();
  L422():
    nzchar11 = ldf nzchar in base;
    r278 = dyn nzchar11(r277);
    check L423() else D166();
  L425():
    p70 = prom<V +>{
      tzdir20 = ld tzdir;
      tzdir21 = force? tzdir20;
      checkMissing(tzdir21);
      return tzdir21;
    };
    r280 = dyn dir[, recursive](p70, TRUE);
    check L426() else D168();
  D147():
    deopt 492 [r243];
  D152():
    deopt 507 [tz40];
  D166():
    deopt 558 [r278];
  D168():
    deopt 564 [r280];
  L384():
    st tz = r243;
    goto L82();
  L393():
    tz41 = force? tz40;
    checkMissing(tz41);
    popenv;
    return tz41;
  L423():
    goto L94(r278);
  L426():
    st known = r280;
    known = ld known;
    check L427() else D169();
  D169():
    deopt 566 [known];
  L427():
    known1 = force? known;
    checkMissing(known1);
    s = toForSeq(known1);
    l = length(s);
    i = 0;
    goto L96(i);
  L96(i1):
    i2 = `+`.1(i1, 1);
    c217 = `<`.1(l, i2);
    if c217 then L428() else L99();
  L99():
    x = `[[`(s, i2, NULL, TRUE);
    st tz = x;
    system2 = ldf system2;
    check L429() else D170();
  L428():
    warning4 = ldf warning;
    check L440() else D178();
  D170():
    deopt 569 [i2];
  D178():
    deopt 601 [];
  L429():
    p75 = prom<V +>{
      sym23 = ldf c;
      base23 = ldf c in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r282):
      return r282;
    L1():
      shQuote = ldf shQuote;
      p71 = prom<V +>{
        lt22 = ld lt0;
        lt23 = force? lt22;
        checkMissing(lt23);
        return lt23;
      };
      r284 = dyn shQuote(p71);
      shQuote1 = ldf shQuote;
      p74 = prom<V +>{
        file_path4 = ldf `file.path`;
        p72 = prom<V +>{
          tzdir22 = ld tzdir;
          tzdir23 = force? tzdir22;
          checkMissing(tzdir23);
          return tzdir23;
        };
        p73 = prom<V +>{
          tz42 = ld tz;
          tz43 = force? tz42;
          checkMissing(tz43);
          return tz43;
        };
        r287 = dyn file_path4(p72, p73);
        return r287;
      };
      r289 = dyn shQuote1(p74);
      c218 = ldf c in base;
      r290 = dyn c218("-s", r284, r289);
      goto L0(r290);
    L2():
      r281 = dyn base23("-s", <lang shQuote(lt0)>, <lang shQuote(file.path(tzdir, tz))>);
      goto L0(r281);
    };
    r292 = dyn system2("cmp", p75);
    check L430() else D171();
  L440():
    p82 = prom<V +>{
      sprintf4 = ldf sprintf;
      p81 = prom<V +>{
        sQuote7 = ldf sQuote;
        p80 = prom<V +>{
          lt24 = ld lt0;
          lt25 = force? lt24;
          checkMissing(lt25);
          return lt25;
        };
        r305 = dyn sQuote7(p80);
        return r305;
      };
      r307 = dyn sprintf4("%s is not identical to any known timezone file", p81);
      return r307;
    };
    r309 = dyn warning4[, `call.`, `immediate.`, domain](p82, FALSE, TRUE, NA_LGL);
    check L441() else D179();
  D171():
    deopt 572 [i2, r292];
  D179():
    deopt 609 [r309];
  L430():
    st status = r292;
    status = ld status;
    check L431() else D172();
  L441():
    goto L100(r309);
  D172():
    deopt 574 [i2, status];
  L431():
    status1 = force? status;
    checkMissing(status1);
    r293 = `==`(status1, 0);
    c219 = `as.logical`(r293);
    if c219 then L432() else L97();
  L97():
    goto L96(i2);
  L432():
    cacheIt5 = ldf cacheIt;
    check L433() else D173();
  D173():
    deopt 579 [i2];
  L433():
    p76 = prom<V +>{
      tz44 = ld tz;
      tz45 = force? tz44;
      checkMissing(tz45);
      return tz45;
    };
    r295 = dyn cacheIt5(p76);
    check L434() else D174();
  D174():
    deopt 581 [i2, r295];
  L434():
    warning3 = ldf warning;
    check L435() else D175();
  D175():
    deopt 583 [i2];
  L435():
    p79 = prom<V +>{
      sprintf3 = ldf sprintf;
      p78 = prom<V +>{
        sQuote6 = ldf sQuote;
        p77 = prom<V +>{
          tz46 = ld tz;
          tz47 = force? tz46;
          checkMissing(tz47);
          return tz47;
        };
        r297 = dyn sQuote6(p77);
        return r297;
      };
      r299 = dyn sprintf3("It is strongly recommended to set envionment variable TZ to %s (or equivalent)", p78);
      return r299;
    };
    r301 = dyn warning3[, `call.`, `immediate.`, domain](p79, FALSE, TRUE, NA_LGL);
    check L436() else D176();
  D176():
    deopt 591 [i2, r301];
  L436():
    tz48 = ld tz;
    check L437() else D177();
  D177():
    deopt 592 [i2, tz48];
  L437():
    tz49 = force? tz48;
    checkMissing(tz49);
    popenv;
    return tz49;
  }
}
fun inner449508518(tz) {
  (reg tz:*) -+> V { var tz:*, reg unlockBinding:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg baseenv:cls, reg r2:V, reg p:p(V +), reg r4:V, reg assign:cls, reg tz1:*, reg tz2:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg baseenv1:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg lockBinding:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg baseenv2:cls, reg r13:V, reg p3:p(V +), reg r15:V |
    mkenv;
    st tz = tz;
    unlockBinding = ldf unlockBinding;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf baseenv;
      base = ldf baseenv in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      baseenv = ldf baseenv in base;
      r2 = dyn baseenv();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    r4 = dyn unlockBinding(".sys.timezone", p);
    check L1() else D1();
  D1():
    deopt 4 [r4];
  L1():
    assign = ldf assign;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p1 = prom<V +>{
      tz1 = ld tz;
      tz2 = force? tz1;
      checkMissing(tz2);
      return tz2;
    };
    p2 = prom<V +>{
      sym1 = ldf baseenv;
      base1 = ldf baseenv in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      baseenv1 = ldf baseenv in base;
      r8 = dyn baseenv1();
      goto L0(r8);
    L2():
      r6 = dyn base1();
      goto L0(r6);
    };
    r10 = dyn assign(".sys.timezone", p1, p2);
    check L3() else D3();
  D3():
    deopt 10 [r10];
  L3():
    lockBinding = ldf lockBinding;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    p3 = prom<V +>{
      sym2 = ldf baseenv;
      base2 = ldf baseenv in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      baseenv2 = ldf baseenv in base;
      r13 = dyn baseenv2();
      goto L0(r13);
    L2():
      r11 = dyn base2();
      goto L0(r11);
    };
    r15 = dyn lockBinding(".sys.timezone", p3);
    check L5() else D5();
  D5():
    deopt 15 [r15];
  L5():
    popenv;
    return r15;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L0() else D0();
  D0():
    deopt 0 [e1];
  L0():
    e2 = force? e1;
    checkMissing(e2);
    popenv;
    return e2;
  }
}