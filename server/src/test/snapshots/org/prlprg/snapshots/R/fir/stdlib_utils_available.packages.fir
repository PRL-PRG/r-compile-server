fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3286163447;
    st `available.packages` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3286163447(contriburl, method, fields, type, filters, repos, ignore_repo_cache, max_repo_cache_age, quiet, `...`) {
  (reg contriburl:*, reg method:*, reg fields:*, reg type:*, reg filters:*, reg repos:*, reg ignore_repo_cache:*, reg max_repo_cache_age:*, reg quiet:*, reg ddd:dots) -+> V { var contriburl:*, reg contriburl_isMissing:L, reg contriburl_orDefault:*, reg contrib_url:cls, reg repos1:*, reg repos2:V, reg p:p(V +), reg type1:*, reg type2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), var method:*, var fields:*, reg fields_isMissing:L, reg fields_orDefault:*, reg getOption:cls, reg r4:V, reg p3:p(V +), var type:*, reg type_isMissing:L, reg type_orDefault:*, reg getOption1:cls, reg r6:V, reg p4:p(V +), var filters:*, reg filters_isMissing:L, reg filters_orDefault:*, var repos:*, reg repos_isMissing:L, reg repos_orDefault:*, reg getOption2:cls, reg r8:V, reg p5:p(V +), var ignore_repo_cache:*, reg ignore_repo_cache_isMissing:L, reg ignore_repo_cache_orDefault:*, var max_repo_cache_age:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg type3:*, reg type4:V, reg c:L, reg r12:V, reg c1:L, reg stop:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg ___:cls, reg r17:V, reg r18:cls, reg r19:V, reg c2:cls, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg fields1:*, reg fields2:V, reg c3:V, reg c4:L, reg requiredFields:*, reg requiredFields1:V, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg fields3:*, reg fields4:V, reg c5:L, reg p6:p(V +), reg r26:V, reg unique:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg requiredFields3:*, reg requiredFields4:V, reg fields5:*, reg fields6:V, reg c6:cls, reg r29:V, reg p7:p(V +), reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg missing:cls, reg r34:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg Sys_getenv:cls, reg r37:V, reg as_numeric:cls, reg r38:V, reg Sys_time:cls, reg r40:V, reg matrix:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg fields7:*, reg fields8:V, reg length:cls, reg r43:V, reg r44:V, reg p8:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg fields9:*, reg fields10:V, reg c8:cls, reg r50:V, reg list:cls, reg r51:V, reg p9:p(V +), reg r53:V, reg unique1:cls, reg contriburl1:*, reg contriburl2:V, reg p10:p(V +), reg r55:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c9:L, reg x:V, reg startsWith:cls, reg repos3:*, reg repos4:V, reg p11:p(V +), reg r57:V, reg localcran:*, reg localcran1:V, reg c10:L, reg startsWith1:cls, reg repos5:*, reg repos6:V, reg p12:p(V +), reg r59:V, reg c11:L, reg paste0:cls, reg substring:cls, reg repos7:*, reg repos8:V, reg p13:p(V +), reg r61:V, reg p14:p(V +), reg r63:V, reg _Platform:*, reg _Platform1:V, reg c12:L, reg i10:I, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg i12:I, reg dx1:V, reg r64:V, reg r65:V, reg c13:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg i17:I, reg r67:V, reg grep:cls, reg tmpf:*, reg tmpf1:V, reg p15:p(V +), reg r69:V, reg length1:cls, reg r70:V, reg c14:L, reg substring1:cls, reg tmpf2:*, reg tmpf3:V, reg p16:p(V +), reg r72:V, reg i20:I, reg r73:V, reg i21:I, reg r74:V, reg i22:I, reg paste1:cls, reg substring2:cls, reg repos9:*, reg repos10:V, reg p17:p(V +), reg r77:V, reg p18:p(V +), reg r79:V, reg file_exists:cls, reg paste2:cls, reg tmpf4:*, reg tmpf5:V, reg p19:p(V +), reg r81:V, reg p20:p(V +), reg r83:V, reg c15:L, reg readRDS:cls, reg dest:*, reg dest1:V, reg p21:p(V +), reg r85:V, reg i25:I, reg r86:V, reg read_dcf:cls, reg tmpf6:*, reg tmpf7:V, reg p22:p(V +), reg r88:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r89:V, reg i28:I, reg r90:V, reg res0:*, reg res1:V, reg length2:cls, reg r91:V, reg c16:L, reg res2:*, reg res3:V, reg c17:L, reg i32:I, reg dr2:V, reg dc1:L, reg dx2:V, reg i34:I, reg dx3:V, reg __:cls, reg r92:V, reg l1:*, reg rownames__:cls, reg r93:V, reg i35:I, reg dx4:V, reg i36:I, reg ignore_repo_cache1:*, reg ignore_repo_cache2:V, reg c18:L, reg tempfile:cls, reg r94:V, reg i39:I, reg file_path:cls, reg tempdir:cls, reg r96:V, reg p23:p(V +), reg paste3:cls, reg URLencode:cls, reg repos11:*, reg repos12:V, reg p24:p(V +), reg r99:V, reg p25:p(V +), reg r101:V, reg p26:p(V +), reg r103:V, reg file_exists1:cls, reg dest2:*, reg dest3:V, reg p27:p(V +), reg r105:V, reg c19:L, reg difftime:cls, reg timestamp:*, reg timestamp1:V, reg p28:p(V +), reg file_mtime:cls, reg dest4:*, reg dest5:V, reg p29:p(V +), reg r108:V, reg p30:p(V +), reg r110:V, reg isTRUE:cls, reg age:*, reg age1:V, reg max_repo_cache_age1:*, reg max_repo_cache_age2:V, reg r111:V, reg p31:p(V +), reg r113:V, reg c20:L, reg readRDS1:cls, reg dest6:*, reg dest7:V, reg p32:p(V +), reg r115:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r116:V, reg i46:I, reg r117:V, reg res6:*, reg res7:V, reg length3:cls, reg r118:V, reg c21:L, reg res8:*, reg res9:V, reg c22:L, reg i50:I, reg dr4:V, reg dc2:L, reg dx6:V, reg i52:I, reg dx7:V, reg __1:cls, reg r119:V, reg l2:*, reg rownames__1:cls, reg r120:V, reg i53:I, reg dx8:V, reg i54:I, reg dx9:V, reg unlink:cls, reg dest8:*, reg dest9:V, reg p33:p(V +), reg r122:V, reg used_dest:*, reg used_dest1:V, reg r123:V, reg c23:L, reg options:cls, reg p34:p(V +), reg r125:V, reg tryCatch:cls, reg download_file:cls, reg paste4:cls, reg repos13:*, reg repos14:V, reg p35:p(V +), reg r127:V, reg p36:p(V +), reg dest10:*, reg dest11:V, reg p37:p(V +), reg method1:*, reg method2:V, reg p38:p(V +), reg quiet1:*, reg quiet2:V, reg p39:p(V +), reg ddd1:dots?, reg r132:V, reg p40:p(V +), reg identity:*, reg identity1:V, reg p41:p(V +), reg r135:V, reg options1:cls, reg op:*, reg op1:V, reg p42:p(V +), reg r137:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r138:V, reg i59:I, reg r139:V, reg z:*, reg z1:V, reg inherits:cls, reg r140:V, reg r141:V, reg c24:L, reg tryCatch1:cls, reg readRDS2:cls, reg dest12:*, reg dest13:V, reg p43:p(V +), reg r143:V, reg p44:p(V +), reg identity2:*, reg identity3:V, reg p45:p(V +), reg r146:V, reg ignore_repo_cache3:*, reg ignore_repo_cache4:V, reg c25:L, reg unlink1:cls, reg dest14:*, reg dest15:V, reg p46:p(V +), reg r148:V, reg i64:I, reg r149:V, reg i65:I, reg sym14:cls, reg base14:cls, reg guard14:L, reg r151:V, reg i68:I, reg r152:V, reg z2:*, reg z3:V, reg inherits1:cls, reg r153:V, reg c26:L, reg ignore_repo_cache5:*, reg ignore_repo_cache6:V, reg r154:V, reg c27:L, reg i73:I, reg tempfile1:cls, reg r156:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r157:V, reg i76:I, reg on_exit:cls, reg r159:V, reg options2:cls, reg p47:p(V +), reg r161:V, reg tryCatch2:cls, reg download_file1:cls, reg paste5:cls, reg repos15:*, reg repos16:V, reg p48:p(V +), reg r163:V, reg p49:p(V +), reg tmpf8:*, reg tmpf9:V, reg p50:p(V +), reg method3:*, reg method4:V, reg p51:p(V +), reg quiet3:*, reg quiet4:V, reg p52:p(V +), reg ddd2:dots?, reg r168:V, reg p53:p(V +), reg identity4:*, reg identity5:V, reg p54:p(V +), reg r171:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r172:V, reg i79:I, reg r173:V, reg z4:*, reg z5:V, reg inherits2:cls, reg r174:V, reg c28:L, reg tryCatch3:cls, reg download_file2:cls, reg paste6:cls, reg repos17:*, reg repos18:V, reg p55:p(V +), reg r176:V, reg p56:p(V +), reg tmpf10:*, reg tmpf11:V, reg p57:p(V +), reg method5:*, reg method6:V, reg p58:p(V +), reg quiet5:*, reg quiet6:V, reg p59:p(V +), reg ddd3:dots?, reg r181:V, reg p60:p(V +), reg identity6:*, reg identity7:V, reg p61:p(V +), reg r184:V, reg i82:I, reg options3:cls, reg op2:*, reg op3:V, reg p62:p(V +), reg r187:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r188:V, reg i85:I, reg r189:V, reg z6:*, reg z7:V, reg inherits3:cls, reg r190:V, reg r191:V, reg c29:L, reg tryCatch4:cls, reg read_dcf1:cls, reg tmpf12:*, reg tmpf13:V, reg p63:p(V +), reg r193:V, reg p64:p(V +), reg identity8:*, reg identity9:V, reg p65:p(V +), reg r196:V, reg i88:I, reg unlink2:cls, reg tmpf14:*, reg tmpf15:V, reg p66:p(V +), reg r199:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r200:V, reg i91:I, reg r201:V, reg on_exit1:cls, reg r202:V, reg i92:I, reg sym19:cls, reg base19:cls, reg guard19:L, reg r204:V, reg i95:I, reg r205:V, reg z8:*, reg z9:V, reg inherits4:cls, reg r206:V, reg c30:L, reg warning:cls, reg gettextf:cls, reg repos19:*, reg repos20:V, reg p67:p(V +), reg r208:V, reg p68:p(V +), reg conditionMessage:cls, reg z10:*, reg z11:V, reg p69:p(V +), reg r211:V, reg p70:p(V +), reg r213:V, reg unlink3:cls, reg dest16:*, reg dest17:V, reg p71:p(V +), reg r215:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r217:V, reg i102:I, reg r218:V, reg res12:*, reg res13:V, reg length4:cls, reg r219:V, reg c31:L, reg res14:*, reg res15:V, reg c32:L, reg i106:I, reg dr6:V, reg dc3:L, reg dx10:V, reg i108:I, reg dx11:V, reg __2:cls, reg r220:V, reg l3:*, reg rownames__2:cls, reg r221:V, reg need_dest:*, reg need_dest1:V, reg c33:L, reg saveRDS:cls, reg res18:*, reg res19:V, reg p72:p(V +), reg dest18:*, reg dest19:V, reg p73:p(V +), reg r224:V, reg i111:I, reg r225:V, reg i112:I, reg r226:V, reg need_dest2:*, reg need_dest3:V, reg r227:V, reg c34:L, reg unlink4:cls, reg dest20:*, reg dest21:V, reg p74:p(V +), reg r229:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r230:V, reg i117:I, reg r231:V, reg res20:*, reg res21:V, reg length5:cls, reg r232:V, reg c35:L, reg fields11:*, reg fields12:V, reg c36:L, reg i121:I, reg fields14:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i123:I, reg dx13:V, reg _in_:cls, reg fields15:*, reg fields16:V, reg p75:p(V +), reg colnames:cls, reg res22:*, reg res23:V, reg p76:p(V +), reg r235:V, reg p77:p(V +), reg r237:V, reg r238:V, reg __3:cls, reg r239:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r240:V, reg i126:I, reg r241:V, reg missingFields:*, reg missingFields1:V, reg length6:cls, reg r242:V, reg c37:L, reg matrix1:cls, reg nrow:cls, reg res24:*, reg res25:V, reg p78:p(V +), reg r244:V, reg p79:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r246:V, reg r247:V, reg missingFields2:*, reg missingFields3:V, reg length7:cls, reg r248:V, reg p80:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r250:V, reg r251:V, reg missingFields4:*, reg missingFields5:V, reg list1:cls, reg r252:V, reg p81:p(V +), reg r254:V, reg cbind:cls, reg res26:*, reg res27:V, reg p82:p(V +), reg toadd:*, reg toadd1:V, reg p83:p(V +), reg r257:V, reg i129:I, reg _in_1:cls, reg colnames1:cls, reg res28:*, reg res29:V, reg p84:p(V +), reg r260:V, reg p85:p(V +), reg r262:V, reg c38:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r263:V, reg i134:I, reg r264:V, reg repos21:*, reg repos22:V, reg nrow1:cls, reg res30:*, reg res31:V, reg p86:p(V +), reg r266:V, reg rep_int:cls, reg r267:V, reg res32:*, reg res33:V, reg c39:L, reg i136:I, reg dr10:V, reg dc5:L, reg dx14:V, reg i138:I, reg dx15:V, reg __4:cls, reg r268:V, reg paste7:cls, reg repos23:*, reg repos24:V, reg p87:p(V +), reg path:*, reg path1:V, reg c40:L, reg path3:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r270:V, reg path6:V, reg r271:V, reg path7:*, reg path8:V, reg is_na:cls, reg r272:V, reg r273:V, reg __5:cls, reg r274:V, reg p88:p(V +), reg r276:V, reg l4:*, reg c41:L, reg i140:I, reg r278:V, reg l6:*, reg dr14:V, reg dc7:L, reg dx18:V, reg i142:I, reg r280:V, reg dx19:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r285:V, reg i145:I, reg r286:V, reg l9:*, reg r287:V, reg r288:V, reg path9:*, reg path10:V, reg is_na1:cls, reg r289:V, reg r290:V, reg ___1:cls, reg r291:V, reg i146:I, reg repos25:*, reg repos26:V, reg cbind1:cls, reg res36:*, reg res37:V, reg c42:L, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg fields17:*, reg fields18:V, reg __6:cls, reg r293:V, reg p89:p(V +), reg rp:*, reg rp1:V, reg p90:p(V +), reg r296:V, reg rbind:cls, reg res40:*, reg res41:V, reg p91:p(V +), reg res42:*, reg res43:V, reg p92:p(V +), reg r299:V, reg i147:I, reg sym28:cls, reg base28:cls, reg guard28:L, reg r301:V, reg r302:V, reg res44:*, reg res45:V, reg length8:cls, reg r303:V, reg r304:V, reg c43:L, reg res46:*, reg res47:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r307:V, reg r308:V, reg filters1:*, reg filters2:V, reg c44:V, reg c45:L, reg getOption3:cls, reg r309:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r310:V, reg r311:V, reg filters3:*, reg filters4:V, reg c46:V, reg c47:L, reg available_packages_filters_default:*, reg available_packages_filters_default1:V, reg available_packages_filters_default2:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r312:V, reg r313:V, reg filters5:*, reg filters6:V, reg is_list:cls, reg r314:V, reg c48:L, reg isTRUE1:cls, reg filters7:*, reg filters8:V, reg c49:L, reg filters10:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r315:V, reg p93:p(V +), reg r317:V, reg c50:L, reg l10:*, reg c51:L, reg r319:dots, reg l12:*, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r322:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r323:V, reg r324:V, reg available_packages_filters_default4:*, reg available_packages_filters_default5:V, reg filters11:*, reg filters12:V, reg c52:cls, reg r325:V, reg r326:V, reg filters13:*, reg filters14:V, reg s1:V, reg l13:I, reg i148:I, reg i149:I, reg i150:I, reg c53:L, reg x1:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r328:V, reg i155:I, reg r329:V, reg res48:*, reg res49:V, reg length9:cls, reg r330:V, reg r331:V, reg c54:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r333:V, reg i163:I, reg r334:V, reg f:*, reg f1:V, reg c55:L, reg c56:L, reg available_packages_filters_db:*, reg available_packages_filters_db1:V, reg c57:L, reg i167:I, reg available_packages_filters_db3:V, reg dr22:V, reg dc11:L, reg dx26:V, reg i169:I, reg dx27:V, reg f2:*, reg f3:V, reg c58:L, reg i171:I, reg available_packages_filters_db5:V, reg f5:V, reg dr24:V, reg dc12:L, reg dx28:V, reg i173:I, reg available_packages_filters_db7:V, reg dx29:V, reg __7:cls, reg r335:V, reg __8:cls, reg r336:V, reg i174:I, reg sym35:cls, reg base35:cls, reg guard35:L, reg r337:V, reg i177:I, reg r338:V, reg f6:*, reg f7:V, reg is_function:cls, reg r339:V, reg r340:V, reg c59:L, reg stop1:cls, reg r341:V, reg i180:I, reg f8:cls, reg res50:*, reg res51:V, reg p94:p(V +), reg r344:V, reg res52:*, reg res53:V |
    mkenv;
    contriburl_isMissing = missing.0(contriburl);
    if contriburl_isMissing then L0() else L1(contriburl);
  L0():
    p2 = prom<V +>{
      contrib_url = ldf `contrib.url`;
      p = prom<V +>{
        repos1 = ld repos;
        repos2 = force? repos1;
        checkMissing(repos2);
        return repos2;
      };
      p1 = prom<V +>{
        type1 = ld type;
        type2 = force? type1;
        checkMissing(type2);
        return type2;
      };
      r2 = dyn contrib_url(p, p1);
      return r2;
    };
    goto L1(p2);
  L1(contriburl_orDefault):
    st contriburl = contriburl_orDefault;
    st method = method;
    fields_isMissing = missing.0(fields);
    if fields_isMissing then L2() else L3(fields);
  L2():
    p3 = prom<V +>{
      getOption = ldf getOption;
      r4 = dyn getOption("available_packages_fields");
      return r4;
    };
    goto L3(p3);
  L3(fields_orDefault):
    st fields = fields_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L4() else L5(type);
  L4():
    p4 = prom<V +>{
      getOption1 = ldf getOption;
      r6 = dyn getOption1("pkgType");
      return r6;
    };
    goto L5(p4);
  L5(type_orDefault):
    st type = type_orDefault;
    filters_isMissing = missing.0(filters);
    if filters_isMissing then L6(NULL) else L6(filters);
  L6(filters_orDefault):
    st filters = filters_orDefault;
    repos_isMissing = missing.0(repos);
    if repos_isMissing then L7() else L8(repos);
  L7():
    p5 = prom<V +>{
      getOption2 = ldf getOption;
      r8 = dyn getOption2("repos");
      return r8;
    };
    goto L8(p5);
  L8(repos_orDefault):
    st repos = repos_orDefault;
    ignore_repo_cache_isMissing = missing.0(ignore_repo_cache);
    if ignore_repo_cache_isMissing then L9(FALSE) else L9(ignore_repo_cache);
  L9(ignore_repo_cache_orDefault):
    st ignore_repo_cache = ignore_repo_cache_orDefault;
    st max_repo_cache_age = max_repo_cache_age;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L10(TRUE) else L10(quiet);
  L10(quiet_orDefault):
    st quiet = quiet_orDefault;
    st `...` = ddd;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L119() else L120();
  L11(r11):
    r12 = `!`(r11);
    c1 = `as.logical`(r12);
    if c1 then L122() else L12();
  L119():
    type3 = ld type;
    check L121() else D0();
  L120():
    r10 = dyn base(<sym type>);
    goto L11(r10);
  D0():
    deopt 1 [type3];
  L12():
    goto L13();
  L13():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L126() else L127();
  L121():
    type4 = force? type3;
    checkMissing(type4);
    c = `is.character`(type4);
    goto L11(c);
  L122():
    stop = ldf stop;
    check L123() else D1();
  D1():
    deopt 6 [];
  L14(r16):
    st requiredFields = r16;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L132() else L133();
  L123():
    r13 = dyn stop("invalid 'type'; must be a character string");
    check L124() else D2();
  L126():
    ___ = ldf `:::`;
    check L128() else D3();
  L127():
    r15 = dyn base1(<lang `:::`(tools, .get_standard_repository_db_fields)()>, "File");
    goto L14(r15);
  D2():
    deopt 8 [r13];
  D3():
    deopt 14 [];
  L15(r22):
    c4 = `as.logical`(r22);
    if c4 then L135() else L16();
  L124():
    goto L13();
  L128():
    r17 = dyn ___("tools", ".get_standard_repository_db_fields");
    check L129() else D4();
  L132():
    fields1 = ld fields;
    check L134() else D7();
  L133():
    r21 = dyn base2(<sym fields>);
    goto L15(r21);
  D4():
    deopt 17 [r17];
  D7():
    deopt 25 [fields1];
  L16():
    stopifnot = ldf stopifnot;
    check L138() else D9();
  L17():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L142() else L143();
  L129():
    checkFun.0(r17);
    r18 = r17 as cls;
    r19 = dyn r18();
    check L130() else D5();
  L134():
    fields2 = force? fields1;
    checkMissing(fields2);
    c3 = `==`(fields2, NULL);
    goto L15(c3);
  L135():
    requiredFields = ld requiredFields;
    check L136() else D8();
  D5():
    deopt 19 [r19];
  D8():
    deopt 28 [requiredFields];
  D9():
    deopt 32 [];
  L18(r33):
    c7 = `as.logical`(r33);
    if c7 then L144() else L19();
  L130():
    c2 = ldf c in base;
    r20 = dyn c2(r19, "File");
    check L131() else D6();
  L136():
    requiredFields1 = force? requiredFields;
    checkMissing(requiredFields1);
    st fields = requiredFields1;
    goto L17();
  L138():
    p6 = prom<V +>{
      sym3 = ldf `is.character`;
      base3 = ldf `is.character` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      fields3 = ld fields;
      fields4 = force? fields3;
      checkMissing(fields4);
      c5 = `is.character`(fields4);
      goto L0(c5);
    L2():
      r23 = dyn base3(<sym fields>);
      goto L0(r23);
    };
    r26 = dyn stopifnot(p6);
    check L139() else D10();
  L142():
    missing = ldf missing in base;
    r34 = dyn missing(<sym max_repo_cache_age>);
    goto L18(r34);
  L143():
    r32 = dyn base5(<sym max_repo_cache_age>);
    goto L18(r32);
  D6():
    deopt 22 [r20];
  D10():
    deopt 34 [r26];
  L19():
    goto L21();
  L21():
    Sys_time = ldf `Sys.time`;
    check L151() else D16();
  L131():
    goto L14(r20);
  L139():
    unique = ldf unique;
    check L140() else D11();
  L144():
    sym6 = ldf `as.numeric`;
    base6 = ldf `as.numeric` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L145() else L146();
  D11():
    deopt 36 [];
  D16():
    deopt 56 [];
  L20(r36):
    st max_repo_cache_age = r36;
    goto L21();
  L140():
    p7 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      requiredFields3 = ld requiredFields;
      requiredFields4 = force? requiredFields3;
      checkMissing(requiredFields4);
      fields5 = ld fields;
      fields6 = force? fields5;
      checkMissing(fields6);
      c6 = ldf c in base;
      r29 = dyn c6(requiredFields4, fields6);
      goto L0(r29);
    L2():
      r27 = dyn base4(<sym requiredFields>, <sym fields>);
      goto L0(r27);
    };
    r31 = dyn unique(p7);
    check L141() else D12();
  L145():
    Sys_getenv = ldf `Sys.getenv`;
    check L147() else D13();
  L146():
    r35 = dyn base6(<lang Sys.getenv("R_AVAILABLE_PACKAGES_CACHE_CONTROL_MAX_AGE", "3600")>);
    goto L20(r35);
  L151():
    r40 = dyn Sys_time();
    check L152() else D17();
  D12():
    deopt 38 [r31];
  D13():
    deopt 46 [];
  D17():
    deopt 57 [r40];
  L141():
    st fields = r31;
    goto L17();
  L147():
    r37 = dyn Sys_getenv("R_AVAILABLE_PACKAGES_CACHE_CONTROL_MAX_AGE", "3600");
    check L148() else D14();
  L152():
    st timestamp = r40;
    matrix = ldf matrix;
    check L153() else D18();
  D14():
    deopt 49 [r37];
  D18():
    deopt 60 [];
  L148():
    as_numeric = ldf `as.numeric` in base;
    r38 = dyn as_numeric(r37);
    check L149() else D15();
  L153():
    p8 = prom<V +>{
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r42):
      r44 = `+`(r42, 1);
      return r44;
    L1():
      fields7 = ld fields;
      fields8 = force? fields7;
      checkMissing(fields8);
      length = ldf length in base;
      r43 = dyn length(fields8);
      goto L0(r43);
    L2():
      r41 = dyn base7(<sym fields>);
      goto L0(r41);
    };
    p9 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r47):
      return r47;
    L2():
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r46 = dyn base8(NULL, <lang c(fields, "Repository")>);
      goto L0(r46);
    L1(r49):
      list = ldf list in base;
      r51 = dyn list(NULL, r49);
      goto L0(r51);
    L4():
      fields9 = ld fields;
      fields10 = force? fields9;
      checkMissing(fields10);
      c8 = ldf c in base;
      r50 = dyn c8(fields10, "Repository");
      goto L1(r50);
    L5():
      r48 = dyn base9(<sym fields>, "Repository");
      goto L1(r48);
    };
    r53 = dyn matrix[, , , dimnames](NA_STR, 0, p8, p9);
    check L154() else D19();
  D15():
    deopt 51 [r38];
  D19():
    deopt 66 [r53];
  L149():
    goto L20(r38);
  L154():
    st res = r53;
    unique1 = ldf unique;
    check L155() else D20();
  D20():
    deopt 69 [];
  L155():
    p10 = prom<V +>{
      contriburl1 = ld contriburl;
      contriburl2 = force? contriburl1;
      checkMissing(contriburl2);
      return contriburl2;
    };
    r55 = dyn unique1(p10);
    check L156() else D21();
  D21():
    deopt 71 [r55];
  L156():
    s = toForSeq(r55);
    l = length(s);
    i = 0;
    goto L22(i);
  L22(i1):
    i2 = `+`.1(i1, 1);
    c9 = `<`.1(l, i2);
    if c9 then L157() else L89();
  L89():
    x = `[[`(s, i2, NULL, TRUE);
    st repos = x;
    startsWith = ldf startsWith;
    check L158() else D22();
  L157():
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L384() else L385();
  D22():
    deopt 73 [i2];
  L90(r302):
    r304 = `!`(r302);
    c43 = `as.logical`(r304);
    if c43 then L388() else L91();
  L158():
    p11 = prom<V +>{
      repos3 = ld repos;
      repos4 = force? repos3;
      checkMissing(repos4);
      return repos4;
    };
    r57 = dyn startsWith(p11, "file:");
    check L159() else D23();
  L384():
    res44 = ld res;
    check L386() else D147();
  L385():
    r301 = dyn base28(<sym res>);
    goto L90(r301);
  D23():
    deopt 76 [i2, r57];
  D147():
    deopt 526 [res44];
  L91():
    sym29 = ldf `is.null`;
    base29 = ldf `is.null` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L392() else L393();
  L159():
    st localcran = r57;
    localcran = ld localcran;
    check L160() else D24();
  L386():
    res45 = force? res44;
    checkMissing(res45);
    length8 = ldf length in base;
    r303 = dyn length8(res45);
    check L387() else D148();
  L388():
    res46 = ld res;
    check L389() else D149();
  D24():
    deopt 78 [i2, localcran];
  D148():
    deopt 529 [r303];
  D149():
    deopt 531 [res46];
  L93(r308):
    c45 = `as.logical`(r308);
    if c45 then L395() else L94();
  L160():
    localcran1 = force? localcran;
    checkMissing(localcran1);
    c10 = `as.logical`(localcran1);
    if c10 then L161() else L23();
  L387():
    goto L90(r303);
  L389():
    res47 = force? res46;
    checkMissing(res47);
    popenv;
    return res47;
  L392():
    filters1 = ld filters;
    check L394() else D150();
  L393():
    r307 = dyn base29(<sym filters>);
    goto L93(r307);
  D150():
    deopt 537 [filters1];
  L23():
    st used_dest = FALSE;
    ignore_repo_cache1 = ld ignore_repo_cache;
    check L207() else D48();
  L37(i36):
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L334() else L335();
  L94():
    goto L98();
  L98():
    sym31 = ldf `is.list`;
    base31 = ldf `is.list` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L405() else L406();
  L161():
    startsWith1 = ldf startsWith;
    check L162() else D25();
  L394():
    filters2 = force? filters1;
    checkMissing(filters2);
    c44 = `==`(filters2, NULL);
    goto L93(c44);
  L395():
    getOption3 = ldf getOption;
    check L396() else D151();
  D25():
    deopt 81 [i2];
  D48():
    deopt 157 [i2, ignore_repo_cache1];
  D151():
    deopt 541 [];
  L76(i117, r231):
    c35 = `as.logical`(r231);
    if c35 then L338() else L77();
  L99(r313):
    c48 = `as.logical`(r313);
    if c48 then L409() else L100();
  L162():
    p12 = prom<V +>{
      repos5 = ld repos;
      repos6 = force? repos5;
      checkMissing(repos6);
      return repos6;
    };
    r59 = dyn startsWith1(p12, "file:///");
    check L163() else D26();
  L207():
    ignore_repo_cache2 = force? ignore_repo_cache1;
    checkMissing(ignore_repo_cache2);
    c18 = `as.logical`(ignore_repo_cache2);
    if c18 then L208() else L38();
  L334():
    res20 = ld res0;
    check L336() else D120();
  L335():
    r230 = dyn base21(<sym res0>);
    goto L76(i36, r230);
  L396():
    r309 = dyn getOption3("available_packages_filters");
    check L397() else D152();
  L405():
    filters5 = ld filters;
    check L407() else D155();
  L406():
    r312 = dyn base31(<sym filters>);
    goto L99(r312);
  D26():
    deopt 84 [i2, r59];
  D120():
    deopt 422 [i36, res20];
  D152():
    deopt 543 [r309];
  D155():
    deopt 558 [filters5];
  L38():
    file_path = ldf `file.path`;
    check L212() else D51();
  L39(i39):
    used_dest = ld used_dest;
    check L240() else D68();
  L77():
    goto L88(i117);
  L88(i147):
    goto L22(i147);
  L100():
    goto L104();
  L104():
    filters13 = ld filters;
    check L424() else D162();
  L163():
    c11 = `as.logical`(r59);
    if c11 then L164() else L24();
  L208():
    tempfile = ldf tempfile;
    check L209() else D49();
  L336():
    res21 = force? res20;
    checkMissing(res21);
    length5 = ldf length in base;
    r232 = dyn length5(res21);
    check L337() else D121();
  L338():
    fields11 = ld fields;
    check L339() else D122();
  L397():
    st filters = r309;
    sym30 = ldf `is.null`;
    base30 = ldf `is.null` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L398() else L399();
  L407():
    filters6 = force? filters5;
    checkMissing(filters6);
    is_list = ldf `is.list` in base;
    r314 = dyn is_list(filters6);
    check L408() else D156();
  L409():
    isTRUE1 = ldf isTRUE;
    check L410() else D157();
  D49():
    deopt 160 [i2];
  D51():
    deopt 164 [i2];
  D68():
    deopt 218 [i39, used_dest];
  D121():
    deopt 425 [i36, r232];
  D122():
    deopt 426 [i117, fields11];
  D156():
    deopt 561 [r314];
  D157():
    deopt 563 [];
  D162():
    deopt 584 [filters13];
  L24():
    paste1 = ldf paste0;
    check L184() else D35();
  L30(i22):
    file_exists = ldf `file.exists`;
    check L186() else D37();
  L95(r311):
    c47 = `as.logical`(r311);
    if c47 then L401() else L96();
  L164():
    paste0 = ldf paste0;
    check L165() else D27();
  L209():
    r94 = dyn tempfile();
    check L210() else D50();
  L212():
    p23 = prom<V +>{
      tempdir = ldf tempdir;
      r96 = dyn tempdir();
      return r96;
    };
    p26 = prom<V +>{
      paste3 = ldf paste0;
      p25 = prom<V +>{
        URLencode = ldf URLencode;
        p24 = prom<V +>{
          repos11 = ld repos;
          repos12 = force? repos11;
          checkMissing(repos12);
          return repos12;
        };
        r99 = dyn URLencode(p24, TRUE);
        return r99;
      };
      r101 = dyn paste3("repos_", p25, ".rds");
      return r101;
    };
    r103 = dyn file_path(p23, p26);
    check L213() else D52();
  L240():
    used_dest1 = force? used_dest;
    checkMissing(used_dest1);
    r123 = `!`(used_dest1);
    c23 = `as.logical`(r123);
    if c23 then L241() else L47();
  L337():
    goto L76(i36, r232);
  L339():
    fields12 = force? fields11;
    checkMissing(fields12);
    c36 = `is.object`(fields12);
    if c36 then L340() else L341(i117, fields12);
  L398():
    filters3 = ld filters;
    check L400() else D153();
  L399():
    r310 = dyn base30(<sym filters>);
    goto L95(r310);
  L408():
    goto L99(r314);
  L410():
    p93 = prom<V +>{
      filters7 = ld filters;
      filters8 = force? filters7;
      checkMissing(filters8);
      c49 = `is.object`(filters8);
      if c49 then L1() else L2(filters8);
    L0(dx23):
      return dx23;
    L1():
      dr18 = tryDispatchBuiltin.1("$", filters8);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(filters10):
      r315 = `$`(filters10, <sym add>);
      goto L0(r315);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx22);
    };
    r317 = dyn isTRUE1(p93);
    check L411() else D158();
  L424():
    filters14 = force? filters13;
    checkMissing(filters14);
    s1 = toForSeq(filters14);
    l13 = length(s1);
    i148 = 0;
    goto L105(i148);
  D27():
    deopt 86 [i2];
  D35():
    deopt 116 [i2];
  D37():
    deopt 122 [i22];
  D50():
    deopt 161 [i2, r94];
  D52():
    deopt 167 [i2, r103];
  D153():
    deopt 546 [filters3];
  D158():
    deopt 565 [r317];
  L47():
    goto L37(i39);
  L78(i123, dx13):
    st missingFields = dx13;
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L345() else L346();
  L96():
    goto L97(NULL);
  L97(available_packages_filters_default2):
    goto L98();
  L105(i149):
    i150 = `+`.1(i149, 1);
    c53 = `<`.1(l13, i150);
    if c53 then L425() else L118();
  L165():
    p14 = prom<V +>{
      substring = ldf substring;
      p13 = prom<V +>{
        repos7 = ld repos;
        repos8 = force? repos7;
        checkMissing(repos8);
        return repos8;
      };
      r61 = dyn substring(p13, 8);
      return r61;
    };
    r63 = dyn paste0(p14, "/PACKAGES");
    check L166() else D28();
  L184():
    p18 = prom<V +>{
      substring2 = ldf substring;
      p17 = prom<V +>{
        repos9 = ld repos;
        repos10 = force? repos9;
        checkMissing(repos10);
        return repos10;
      };
      r77 = dyn substring2(p17, 6);
      return r77;
    };
    r79 = dyn paste1(p18, "/PACKAGES");
    check L185() else D36();
  L186():
    p20 = prom<V +>{
      paste2 = ldf paste0;
      p19 = prom<V +>{
        tmpf4 = ld tmpf;
        tmpf5 = force? tmpf4;
        checkMissing(tmpf5);
        return tmpf5;
      };
      r81 = dyn paste2(p19, ".rds");
      st dest = r81;
      invisible.0();
      return r81;
    };
    r83 = dyn file_exists(p20);
    check L187() else D38();
  L210():
    st dest = r94;
    goto L39(i2);
  L213():
    st dest = r103;
    file_exists1 = ldf `file.exists`;
    check L214() else D53();
  L241():
    st need_dest = FALSE;
    options = ldf options;
    check L242() else D69();
  L340():
    dr8 = tryDispatchBuiltin.1("[", fields12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L342() else L341(i117, dr8);
  L341(i121, fields14):
    _in_ = ldf `%in%`;
    check L343() else D123();
  L400():
    filters4 = force? filters3;
    checkMissing(filters4);
    c46 = `==`(filters4, NULL);
    goto L95(c46);
  L401():
    available_packages_filters_default = ld available_packages_filters_default;
    check L402() else D154();
  L411():
    c50 = `as.logical`(r317);
    if c50 then L412() else L101();
  D28():
    deopt 89 [i2, r63];
  D36():
    deopt 119 [i2, r79];
  D38():
    deopt 124 [i22, r83];
  D53():
    deopt 170 [i2];
  D69():
    deopt 225 [i39];
  D123():
    deopt 429 [i121, fields14];
  D154():
    deopt 549 [available_packages_filters_default];
  L79(i126, r241):
    c37 = `as.logical`(r241);
    if c37 then L349() else L80();
  L101():
    goto L103(NULL);
  L103(r326):
    goto L104();
  L108():
    res52 = ld res;
    check L456() else D174();
  L118():
    x1 = `[[`(s1, i150, NULL, TRUE);
    st f = x1;
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L426() else L427();
  L166():
    st tmpf = r63;
    _Platform = ld `.Platform`;
    check L167() else D29();
  L185():
    st tmpf = r79;
    goto L30(i2);
  L187():
    c15 = `as.logical`(r83);
    if c15 then L188() else L31();
  L214():
    p27 = prom<V +>{
      dest2 = ld dest;
      dest3 = force? dest2;
      checkMissing(dest3);
      return dest3;
    };
    r105 = dyn file_exists1(p27);
    check L215() else D54();
  L242():
    p34 = prom<V +>{
      return -1;
    };
    r125 = dyn options[warn](p34);
    check L243() else D70();
  L342():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L78(i117, dx12);
  L343():
    p75 = prom<V +>{
      fields15 = ld fields;
      fields16 = force? fields15;
      checkMissing(fields16);
      return fields16;
    };
    p77 = prom<V +>{
      colnames = ldf colnames;
      p76 = prom<V +>{
        res22 = ld res0;
        res23 = force? res22;
        checkMissing(res23);
        return res23;
      };
      r235 = dyn colnames(p76);
      return r235;
    };
    r237 = dyn _in_(p75, p77);
    check L344() else D124();
  L345():
    missingFields = ld missingFields;
    check L347() else D125();
  L346():
    r240 = dyn base22(<sym missingFields>);
    goto L79(i123, r240);
  L402():
    available_packages_filters_default1 = force? available_packages_filters_default;
    checkMissing(available_packages_filters_default1);
    st filters = available_packages_filters_default1;
    goto L97(available_packages_filters_default1);
  L412():
    l10 = ld filters;
    c51 = `is.object`(l10);
    if c51 then L414() else L415(NULL, l10);
  L425():
    goto L108();
  D29():
    deopt 91 [i2, _Platform];
  D54():
    deopt 172 [i2, r105];
  D70():
    deopt 228 [i39, r125];
  D124():
    deopt 432 [i121, fields14, r237];
  D125():
    deopt 438 [i123, missingFields];
  D174():
    deopt 633 [res52];
  L31():
    read_dcf = ldf `read.dcf`;
    check L192() else D41();
  L32(i25, r86):
    st res0 = r86;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L194() else L195();
  L80():
    goto L81(i126);
  L81(i129):
    _in_1 = ldf `%in%`;
    check L355() else D131();
  L106(i155, r329):
    r331 = `!`(r329);
    c54 = `as.logical`(r331);
    if c54 then L430() else L107();
  L167():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c12 = `is.object`(_Platform1);
    if c12 then L169() else L170(i2, _Platform1);
  L188():
    readRDS = ldf readRDS;
    check L189() else D39();
  L215():
    c19 = `as.logical`(r105);
    if c19 then L216() else L40();
  L243():
    st op = r125;
    tryCatch = ldf tryCatch;
    check L244() else D71();
  L344():
    r238 = `!`(r237);
    __3 = ldf `[` in base;
    r239 = dyn __3(fields14, r238);
    goto L78(i121, r239);
  L347():
    missingFields1 = force? missingFields;
    checkMissing(missingFields1);
    length6 = ldf length in base;
    r242 = dyn length6(missingFields1);
    check L348() else D126();
  L349():
    matrix1 = ldf matrix;
    check L350() else D127();
  L413(dx25):
    st filters = dx25;
    sym32 = ldf c;
    base32 = ldf c in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L417() else L418();
  L414():
    dr20 = tryDispatchBuiltin.0("$<-", l10, NULL);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L416() else L415(NULL, dr20);
  L415(r319, l12):
    r322 = `$<-`(l12, <sym add>, NULL);
    goto L413(r322);
  L426():
    res48 = ld res;
    check L428() else D163();
  L427():
    r328 = dyn base33(<sym res>);
    goto L106(i150, r328);
  L456():
    res53 = force? res52;
    checkMissing(res53);
    popenv;
    return res53;
  D39():
    deopt 126 [i22];
  D41():
    deopt 130 [i22];
  D71():
    deopt 231 [i39];
  D126():
    deopt 441 [i123, r242];
  D127():
    deopt 443 [i126];
  D131():
    deopt 462 [i129];
  D163():
    deopt 588 [i150, res48];
  L33(i28, r90):
    c16 = `as.logical`(r90);
    if c16 then L198() else L34();
  L40():
    goto L39(i2);
  L102(r324):
    st filters = r324;
    goto L103(r324);
  L107():
    sym34 = ldf `is.character`;
    base34 = ldf `is.character` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L433() else L434();
  L168(i12, dx1):
    r65 = `==`(dx1, "windows");
    c13 = `as.logical`(r65);
    if c13 then L172() else L25();
  L169():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L171() else L170(i2, dr);
  L170(i10, _Platform3):
    r64 = `$`(_Platform3, <sym OS.type>);
    goto L168(i10, r64);
  L189():
    p21 = prom<V +>{
      dest = ld dest;
      dest1 = force? dest;
      checkMissing(dest1);
      return dest1;
    };
    r85 = dyn readRDS(p21);
    check L190() else D40();
  L192():
    p22 = prom<V +>{
      tmpf6 = ld tmpf;
      tmpf7 = force? tmpf6;
      checkMissing(tmpf7);
      return tmpf7;
    };
    r88 = dyn read_dcf[file](p22);
    check L193() else D42();
  L194():
    res0 = ld res0;
    check L196() else D43();
  L195():
    r89 = dyn base11(<sym res0>);
    goto L33(i25, r89);
  L216():
    difftime = ldf difftime;
    check L217() else D55();
  L244():
    p40 = prom<V +>{
      download_file = ldf `download.file`;
      p36 = prom<V +>{
        paste4 = ldf paste0;
        p35 = prom<V +>{
          repos13 = ld repos;
          repos14 = force? repos13;
          checkMissing(repos14);
          return repos14;
        };
        r127 = dyn paste4(p35, "/PACKAGES.rds");
        return r127;
      };
      p37 = prom<V +>{
        dest10 = ld dest;
        dest11 = force? dest10;
        checkMissing(dest11);
        return dest11;
      };
      p38 = prom<V +>{
        method1 = ld method;
        method2 = force? method1;
        checkMissing(method2);
        return method2;
      };
      p39 = prom<V +>{
        quiet1 = ld quiet;
        quiet2 = force? quiet1;
        checkMissing(quiet2);
        return quiet2;
      };
      ddd1 = ld `...`;
      r132 = dyn download_file[url, destfile, method, cacheOK, quiet, mode, `...`](p36, p37, p38, FALSE, p39, "wb", ddd1);
      return r132;
    };
    p41 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r135 = dyn tryCatch[, error](p40, p41);
    check L245() else D72();
  L348():
    goto L79(i123, r242);
  L350():
    p79 = prom<V +>{
      nrow = ldf nrow;
      p78 = prom<V +>{
        res24 = ld res0;
        res25 = force? res24;
        checkMissing(res25);
        return res25;
      };
      r244 = dyn nrow(p78);
      return r244;
    };
    p80 = prom<V +>{
      sym23 = ldf length;
      base23 = ldf length in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r247):
      return r247;
    L1():
      missingFields2 = ld missingFields;
      missingFields3 = force? missingFields2;
      checkMissing(missingFields3);
      length7 = ldf length in base;
      r248 = dyn length7(missingFields3);
      goto L0(r248);
    L2():
      r246 = dyn base23(<sym missingFields>);
      goto L0(r246);
    };
    p81 = prom<V +>{
      sym24 = ldf list;
      base24 = ldf list in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L1() else L2();
    L0(r251):
      return r251;
    L1():
      missingFields4 = ld missingFields;
      missingFields5 = force? missingFields4;
      checkMissing(missingFields5);
      list1 = ldf list in base;
      r252 = dyn list1(NULL, missingFields5);
      goto L0(r252);
    L2():
      r250 = dyn base24(NULL, <sym missingFields>);
      goto L0(r250);
    };
    r254 = dyn matrix1[, nrow, ncol, dimnames](NA_STR, p79, p80, p81);
    check L351() else D128();
  L355():
    p85 = prom<V +>{
      colnames1 = ldf colnames;
      p84 = prom<V +>{
        res28 = ld res0;
        res29 = force? res28;
        checkMissing(res29);
        return res29;
      };
      r260 = dyn colnames1(p84);
      return r260;
    };
    r262 = dyn _in_1("Path", p85);
    check L356() else D132();
  L416():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L413(dx24);
  L417():
    available_packages_filters_default4 = ld available_packages_filters_default;
    check L419() else D159();
  L418():
    r323 = dyn base32(<sym available_packages_filters_default>, <sym filters>);
    goto L102(r323);
  L428():
    res49 = force? res48;
    checkMissing(res49);
    length9 = ldf length in base;
    r330 = dyn length9(res49);
    check L429() else D164();
  L430():
    goto L108();
  D40():
    deopt 128 [i22, r85];
  D42():
    deopt 133 [i22, r88];
  D43():
    deopt 137 [i25, res0];
  D55():
    deopt 174 [i2];
  D72():
    deopt 235 [i39, r135];
  D128():
    deopt 451 [i126, r254];
  D132():
    deopt 465 [i129, r262];
  D159():
    deopt 573 [available_packages_filters_default4];
  D164():
    deopt 591 [i150, r330];
  L25():
    goto L29(i12, NULL);
  L29(i21, r74):
    goto L30(i21);
  L34():
    goto L36(i28, NULL);
  L36(i35, dx4):
    goto L37(i35);
  L110(i163, r334):
    c56 = `as.logical`(r334);
    if c56 then L436() else L111();
  L171():
    dx = getTryDispatchBuiltinValue(dr);
    goto L168(i2, dx);
  L172():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L173() else L174();
  L190():
    goto L32(i22, r85);
  L193():
    goto L32(i22, r88);
  L196():
    res1 = force? res0;
    checkMissing(res1);
    length2 = ldf length in base;
    r91 = dyn length2(res1);
    check L197() else D44();
  L198():
    res2 = ld res0;
    check L199() else D45();
  L217():
    p28 = prom<V +>{
      timestamp = ld timestamp;
      timestamp1 = force? timestamp;
      checkMissing(timestamp1);
      return timestamp1;
    };
    p30 = prom<V +>{
      file_mtime = ldf `file.mtime`;
      p29 = prom<V +>{
        dest4 = ld dest;
        dest5 = force? dest4;
        checkMissing(dest5);
        return dest5;
      };
      r108 = dyn file_mtime(p29);
      return r108;
    };
    r110 = dyn difftime[, , units](p28, p30, "secs");
    check L218() else D56();
  L245():
    st z = r135;
    options1 = ldf options;
    check L246() else D73();
  L351():
    st toadd = r254;
    cbind = ldf cbind;
    check L352() else D129();
  L356():
    c38 = `as.logical`(r262);
    if c38 then L357() else L82();
  L419():
    available_packages_filters_default5 = force? available_packages_filters_default4;
    checkMissing(available_packages_filters_default5);
    filters11 = ld filters;
    check L420() else D160();
  L429():
    goto L106(i150, r330);
  L433():
    f = ld f;
    check L435() else D165();
  L434():
    r333 = dyn base34(<sym f>);
    goto L110(i155, r333);
  D44():
    deopt 140 [i25, r91];
  D45():
    deopt 141 [i28, res2];
  D56():
    deopt 179 [i2, r110];
  D73():
    deopt 238 [i39];
  D129():
    deopt 454 [i126];
  D160():
    deopt 575 [filters11];
  D165():
    deopt 598 [i155, f];
  L26(i17, r67):
    c14 = `as.logical`(r67);
    if c14 then L178() else L27();
  L82():
    repos25 = ld repos;
    check L378() else D142();
  L87(i146):
    cbind1 = ldf cbind;
    check L379() else D143();
  L111():
    goto L114(i163);
  L114(i174):
    sym35 = ldf `is.function`;
    base35 = ldf `is.function` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L446() else L447();
  L173():
    grep = ldf grep;
    check L175() else D30();
  L174():
    r66 = dyn base10(<lang grep("^/[A-Za-z]:", tmpf)>);
    goto L26(i12, r66);
  L197():
    goto L33(i25, r91);
  L199():
    res3 = force? res2;
    checkMissing(res3);
    c17 = `is.object`(res3);
    if c17 then L200() else L201(i28);
  L218():
    st age = r110;
    isTRUE = ldf isTRUE;
    check L219() else D57();
  L246():
    p42 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r137 = dyn options1(p42);
    check L247() else D74();
  L352():
    p82 = prom<V +>{
      res26 = ld res0;
      res27 = force? res26;
      checkMissing(res27);
      return res27;
    };
    p83 = prom<V +>{
      toadd = ld toadd;
      toadd1 = force? toadd;
      checkMissing(toadd1);
      return toadd1;
    };
    r257 = dyn cbind(p82, p83);
    check L353() else D130();
  L357():
    sym25 = ldf `rep.int`;
    base25 = ldf `rep.int` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L358() else L359();
  L420():
    filters12 = force? filters11;
    checkMissing(filters12);
    c52 = ldf c in base;
    r325 = dyn c52(available_packages_filters_default5, filters12);
    check L421() else D161();
  L435():
    f1 = force? f;
    checkMissing(f1);
    c55 = `is.character`(f1);
    goto L110(i155, c55);
  L436():
    available_packages_filters_db = ld available_packages_filters_db;
    check L437() else D166();
  D30():
    deopt 99 [i12];
  D57():
    deopt 182 [i2];
  D74():
    deopt 240 [i39, r137];
  D130():
    deopt 457 [i126, r257];
  D142():
    deopt 501 [i129, repos25];
  D143():
    deopt 505 [i146];
  D161():
    deopt 578 [r325];
  D166():
    deopt 601 [i163, available_packages_filters_db];
  L27():
    goto L28(i17, NULL);
  L28(i20, r73):
    goto L29(i20, r73);
  L35(i34, dx3):
    l1 = ld res0;
    rownames__ = ldf `rownames<-`;
    check L203() else D46();
  L83(i134, r264):
    st rp = r264;
    res32 = ld res0;
    check L364() else D137();
  L115(i177, r338):
    r340 = `!`(r338);
    c59 = `as.logical`(r340);
    if c59 then L450() else L116();
  L175():
    p15 = prom<V +>{
      tmpf = ld tmpf;
      tmpf1 = force? tmpf;
      checkMissing(tmpf1);
      return tmpf1;
    };
    r69 = dyn grep("^/[A-Za-z]:", p15);
    check L176() else D31();
  L178():
    substring1 = ldf substring;
    check L179() else D33();
  L200():
    dr2 = tryDispatchBuiltin.1("[", res3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L202() else L201(i28);
  L201(i32):
    __ = ldf `[` in base;
    r92 = dyn __(res3, <missing>, "Package");
    goto L35(i32, r92);
  L219():
    p31 = prom<V +>{
      age = ld age;
      age1 = force? age;
      checkMissing(age1);
      max_repo_cache_age1 = ld max_repo_cache_age;
      max_repo_cache_age2 = force? max_repo_cache_age1;
      checkMissing(max_repo_cache_age2);
      r111 = `<`(age1, max_repo_cache_age2);
      return r111;
    };
    r113 = dyn isTRUE(p31);
    check L220() else D58();
  L247():
    sym13 = ldf inherits;
    base13 = ldf inherits in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L248() else L249();
  L353():
    st res0 = r257;
    goto L81(i126);
  L358():
    repos21 = ld repos;
    check L360() else D133();
  L359():
    r263 = dyn base25(<sym repos>, <lang nrow(res0)>);
    goto L83(i129, r263);
  L378():
    repos26 = force? repos25;
    checkMissing(repos26);
    st rp = repos26;
    goto L87(i129);
  L379():
    p89 = prom<V +>{
      res36 = ld res0;
      res37 = force? res36;
      checkMissing(res37);
      c42 = `is.object`(res37);
      if c42 then L1() else L2();
    L0(dx21):
      return dx21;
    L1():
      dr16 = tryDispatchBuiltin.1("[", res37);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2();
    L2():
      fields17 = ld fields;
      fields18 = force? fields17;
      __6 = ldf `[` in base;
      r293 = dyn __6(res37, <missing>, fields18, FALSE);
      goto L0(r293);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx20);
    };
    p90 = prom<V +>{
      rp = ld rp;
      rp1 = force? rp;
      checkMissing(rp1);
      return rp1;
    };
    r296 = dyn cbind1[, Repository](p89, p90);
    check L380() else D144();
  L421():
    goto L102(r325);
  L437():
    available_packages_filters_db1 = force? available_packages_filters_db;
    checkMissing(available_packages_filters_db1);
    c57 = `is.object`(available_packages_filters_db1);
    if c57 then L438() else L439(i163, available_packages_filters_db1);
  L446():
    f6 = ld f;
    check L448() else D168();
  L447():
    r337 = dyn base35(<sym f>);
    goto L115(i174, r337);
  D31():
    deopt 102 [i12, r69];
  D33():
    deopt 106 [i17];
  D46():
    deopt 148 [i34, dx3, l1, dx3];
  D58():
    deopt 184 [i2, r113];
  D133():
    deopt 468 [i129, repos21];
  D137():
    deopt 477 [i134, res32];
  D144():
    deopt 509 [i146, r296];
  D168():
    deopt 614 [i174, f6];
  L48(i59, r139):
    r141 = `!`(r139);
    c24 = `as.logical`(r141);
    if c24 then L252() else L49();
  L112(i169, dx27):
    st f = dx27;
    goto L114(i169);
  L116():
    goto L117(i177);
  L117(i180):
    f8 = ldf f;
    check L454() else D172();
  L176():
    length1 = ldf length in base;
    r70 = dyn length1(r69);
    check L177() else D32();
  L179():
    p16 = prom<V +>{
      tmpf2 = ld tmpf;
      tmpf3 = force? tmpf2;
      checkMissing(tmpf3);
      return tmpf3;
    };
    r72 = dyn substring1(p16, 2);
    check L180() else D34();
  L202():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L35(i28, dx2);
  L203():
    r93 = dyn rownames__(l1, NULL, dx3);
    check L204() else D47();
  L220():
    c20 = `as.logical`(r113);
    if c20 then L221() else L41();
  L248():
    z = ld z;
    check L250() else D75();
  L249():
    r138 = dyn base13(<sym z>, "error");
    goto L48(i39, r138);
  L360():
    repos22 = force? repos21;
    checkMissing(repos22);
    nrow1 = ldf nrow;
    check L361() else D134();
  L364():
    res33 = force? res32;
    checkMissing(res33);
    c39 = `is.object`(res33);
    if c39 then L365() else L366(i134);
  L380():
    st res0 = r296;
    rbind = ldf rbind;
    check L381() else D145();
  L438():
    dr22 = tryDispatchBuiltin.1("[[", available_packages_filters_db1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L440() else L439(i163, dr22);
  L439(i167, available_packages_filters_db3):
    f2 = ld f;
    check L441() else D167();
  L448():
    f7 = force? f6;
    checkMissing(f7);
    is_function = ldf `is.function` in base;
    r339 = dyn is_function(f7);
    check L449() else D169();
  L450():
    stop1 = ldf stop;
    check L451() else D170();
  D32():
    deopt 104 [i12, r70];
  D34():
    deopt 109 [i17, r72];
  D47():
    deopt 150 [i34, dx3, r93];
  D75():
    deopt 243 [i39, z];
  D134():
    deopt 471 [i129];
  D145():
    deopt 512 [i146];
  D167():
    deopt 603 [i167, available_packages_filters_db3, f2];
  D169():
    deopt 617 [i174, r339];
  D170():
    deopt 620 [i177];
  D172():
    deopt 626 [i180];
  L41():
    unlink = ldf unlink;
    check L237() else D66();
  L46(i54, dx9):
    goto L39(i54);
  L49():
    goto L52(i59);
  L52(i65):
    sym14 = ldf inherits;
    base14 = ldf inherits in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L261() else L262();
  L84(i138, dx15):
    st path = dx15;
    paste7 = ldf paste;
    check L368() else D138();
  L177():
    goto L26(i12, r70);
  L180():
    st tmpf = r72;
    goto L28(i17, r72);
  L204():
    st res0 = r93;
    goto L36(i34, dx3);
  L221():
    readRDS1 = ldf readRDS;
    check L222() else D59();
  L250():
    z1 = force? z;
    checkMissing(z1);
    inherits = ldf inherits in base;
    r140 = dyn inherits(z1, "error", FALSE);
    check L251() else D76();
  L252():
    tryCatch1 = ldf tryCatch;
    check L253() else D77();
  L361():
    p86 = prom<V +>{
      res30 = ld res0;
      res31 = force? res30;
      checkMissing(res31);
      return res31;
    };
    r266 = dyn nrow1(p86);
    check L362() else D135();
  L365():
    dr10 = tryDispatchBuiltin.1("[", res33);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L367() else L366(i134);
  L366(i136):
    __4 = ldf `[` in base;
    r268 = dyn __4(res33, <missing>, "Path");
    goto L84(i136, r268);
  L381():
    p91 = prom<V +>{
      res40 = ld res;
      res41 = force? res40;
      checkMissing(res41);
      return res41;
    };
    p92 = prom<V +>{
      res42 = ld res0;
      res43 = force? res42;
      checkMissing(res43);
      return res43;
    };
    r299 = dyn rbind[, , `deparse.level`](p91, p92, 0);
    check L382() else D146();
  L440():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L112(i163, dx26);
  L441():
    f3 = force? f2;
    checkMissing(f3);
    c58 = `is.object`(f3);
    if c58 then L442() else L443(i167, available_packages_filters_db3, f3);
  L449():
    goto L115(i174, r339);
  L451():
    r341 = dyn stop1("invalid 'filters' argument.");
    check L452() else D171();
  L454():
    p94 = prom<V +>{
      res50 = ld res;
      res51 = force? res50;
      checkMissing(res51);
      return res51;
    };
    r344 = dyn f8(p94);
    check L455() else D173();
  D59():
    deopt 186 [i2];
  D66():
    deopt 213 [i2];
  D76():
    deopt 248 [i39, r140];
  D77():
    deopt 251 [i59];
  D135():
    deopt 473 [i129, r266];
  D138():
    deopt 485 [i138];
  D146():
    deopt 517 [i146, r299];
  D171():
    deopt 622 [i177, r341];
  D173():
    deopt 628 [i180, r344];
  L53(i68, r152):
    c26 = `as.logical`(r152);
    if c26 then L265() else L54();
  L113(i173, available_packages_filters_db7, dx29):
    __8 = ldf `[[` in base;
    r336 = dyn __8(available_packages_filters_db7, dx29);
    goto L112(i173, r336);
  L222():
    p32 = prom<V +>{
      dest6 = ld dest;
      dest7 = force? dest6;
      checkMissing(dest7);
      return dest7;
    };
    r115 = dyn readRDS1(p32);
    check L223() else D60();
  L237():
    p33 = prom<V +>{
      dest8 = ld dest;
      dest9 = force? dest8;
      checkMissing(dest9);
      return dest9;
    };
    r122 = dyn unlink(p33);
    check L238() else D67();
  L251():
    goto L48(i39, r140);
  L253():
    p44 = prom<V +>{
      readRDS2 = ldf readRDS;
      p43 = prom<V +>{
        dest12 = ld dest;
        dest13 = force? dest12;
        checkMissing(dest13);
        return dest13;
      };
      r143 = dyn readRDS2(p43);
      return r143;
    };
    p45 = prom<V +>{
      identity2 = ld identity;
      identity3 = force? identity2;
      checkMissing(identity3);
      return identity3;
    };
    r146 = dyn tryCatch1[, error](p44, p45);
    check L254() else D78();
  L261():
    z2 = ld z;
    check L263() else D82();
  L262():
    r151 = dyn base14(<sym z>, "error");
    goto L53(i65, r151);
  L362():
    rep_int = ldf `rep.int` in base;
    r267 = dyn rep_int(repos22, r266);
    check L363() else D136();
  L367():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L84(i134, dx14);
  L368():
    p87 = prom<V +>{
      repos23 = ld repos;
      repos24 = force? repos23;
      checkMissing(repos24);
      return repos24;
    };
    p88 = prom<V +>{
      path = ld path;
      path1 = force? path;
      checkMissing(path1);
      c40 = `is.object`(path1);
      if c40 then L2() else L3(path1);
    L0(dx17):
      return dx17;
    L2():
      dr12 = tryDispatchBuiltin.1("[", path1);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(path3):
      sym26 = ldf `is.na`;
      base26 = ldf `is.na` in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L5() else L6();
    L1(path6, r271):
      r273 = `!`(r271);
      __5 = ldf `[` in base;
      r274 = dyn __5(path6, r273);
      goto L0(r274);
    L4():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx16);
    L5():
      path7 = ld path;
      path8 = force? path7;
      checkMissing(path8);
      is_na = ldf `is.na` in base;
      r272 = dyn is_na(path8);
      goto L1(path3, r272);
    L6():
      r270 = dyn base26(<sym path>);
      goto L1(path3, r270);
    };
    r276 = dyn paste7[, , sep](p87, p88, "/");
    check L369() else D139();
  L382():
    st res = r299;
    goto L88(i146);
  L442():
    dr24 = tryDispatchBuiltin.1("[", f3);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L444() else L443(i167, available_packages_filters_db3, dr24);
  L443(i171, available_packages_filters_db5, f5):
    __7 = ldf `[` in base;
    r335 = dyn __7(f5, 1);
    goto L113(i171, available_packages_filters_db5, r335);
  L452():
    goto L117(i177);
  L455():
    st res = r344;
    goto L105(i180);
  D60():
    deopt 188 [i2, r115];
  D67():
    deopt 215 [i2, r122];
  D78():
    deopt 255 [i59, r146];
  D82():
    deopt 270 [i65, z2];
  D136():
    deopt 475 [i129, r267];
  D139():
    deopt 490 [i138, r276];
  L54():
    goto L65(i68);
  L65(i92):
    sym19 = ldf inherits;
    base19 = ldf inherits in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L300() else L301();
  L223():
    st res0 = r115;
    st used_dest = TRUE;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L224() else L225();
  L238():
    goto L46(i2, r122);
  L254():
    st res0 = r146;
    st z = r146;
    ignore_repo_cache3 = ld ignore_repo_cache;
    check L255() else D79();
  L263():
    z3 = force? z2;
    checkMissing(z3);
    inherits1 = ldf inherits in base;
    r153 = dyn inherits1(z3, "error", FALSE);
    check L264() else D83();
  L265():
    ignore_repo_cache5 = ld ignore_repo_cache;
    check L266() else D84();
  L363():
    goto L83(i129, r267);
  L369():
    l4 = ld rp;
    c41 = `is.object`(l4);
    if c41 then L370() else L371(i138, r276, l4);
  L444():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L113(i167, available_packages_filters_db3, dx28);
  D79():
    deopt 258 [i59, ignore_repo_cache3];
  D83():
    deopt 275 [i65, r153];
  D84():
    deopt 276 [i68, ignore_repo_cache5];
  L42(i46, r117):
    c21 = `as.logical`(r117);
    if c21 then L228() else L43();
  L66(i95, r205):
    c30 = `as.logical`(r205);
    if c30 then L304() else L67();
  L85(i142, r280, dx19):
    st rp = dx19;
    goto L87(i142);
  L224():
    res6 = ld res0;
    check L226() else D61();
  L225():
    r116 = dyn base12(<sym res0>);
    goto L42(i2, r116);
  L255():
    ignore_repo_cache4 = force? ignore_repo_cache3;
    checkMissing(ignore_repo_cache4);
    c25 = `as.logical`(ignore_repo_cache4);
    if c25 then L256() else L50();
  L264():
    goto L53(i65, r153);
  L266():
    ignore_repo_cache6 = force? ignore_repo_cache5;
    checkMissing(ignore_repo_cache6);
    r154 = `!`(ignore_repo_cache6);
    c27 = `as.logical`(r154);
    if c27 then L267() else L55();
  L300():
    z8 = ld z;
    check L302() else D103();
  L301():
    r204 = dyn base19(<sym z>, "error");
    goto L66(i92, r204);
  L370():
    dr14 = tryDispatchBuiltin.0("[<-", l4, r276);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L372() else L371(i138, r276, dr14);
  L371(i140, r278, l6):
    sym27 = ldf `is.na`;
    base27 = ldf `is.na` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L373() else L374();
  D61():
    deopt 195 [i2, res6];
  D103():
    deopt 355 [i92, z8];
  L43():
    goto L45(i46, NULL);
  L45(i53, dx8):
    goto L46(i53, dx8);
  L50():
    goto L51(i59, NULL);
  L51(i64, r149):
    goto L52(i64);
  L55():
    goto L56(i68);
  L56(i73):
    tempfile1 = ldf tempfile;
    check L269() else D85();
  L67():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L311() else L312();
  L86(i145, r286, l9, r287, r288):
    r290 = `!`(r288);
    ___1 = ldf `[<-` in base;
    r291 = dyn ___1(l9, r287, r290);
    goto L85(i145, r286, r291);
  L226():
    res7 = force? res6;
    checkMissing(res7);
    length3 = ldf length in base;
    r118 = dyn length3(res7);
    check L227() else D62();
  L228():
    res8 = ld res0;
    check L229() else D63();
  L256():
    unlink1 = ldf unlink;
    check L257() else D80();
  L267():
    st need_dest = TRUE;
    goto L56(i68);
  L302():
    z9 = force? z8;
    checkMissing(z9);
    inherits4 = ldf inherits in base;
    r206 = dyn inherits4(z9, "error", FALSE);
    check L303() else D104();
  L304():
    warning = ldf warning;
    check L305() else D105();
  L372():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L85(i138, r276, dx18);
  L373():
    path9 = ld path;
    check L375() else D140();
  L374():
    r285 = dyn base27(<sym path>);
    goto L86(i140, r278, l6, r276, r285);
  D62():
    deopt 198 [i2, r118];
  D63():
    deopt 199 [i46, res8];
  D80():
    deopt 261 [i59];
  D85():
    deopt 285 [i73];
  D104():
    deopt 360 [i92, r206];
  D105():
    deopt 362 [i95];
  D140():
    deopt 494 [i140, r278, l6, r276, path9];
  L69(i102, r218):
    c31 = `as.logical`(r218);
    if c31 then L315() else L70();
  L227():
    goto L42(i2, r118);
  L229():
    res9 = force? res8;
    checkMissing(res9);
    c22 = `is.object`(res9);
    if c22 then L230() else L231(i46);
  L257():
    p46 = prom<V +>{
      dest14 = ld dest;
      dest15 = force? dest14;
      checkMissing(dest15);
      return dest15;
    };
    r148 = dyn unlink1(p46);
    check L258() else D81();
  L269():
    r156 = dyn tempfile1();
    check L270() else D86();
  L303():
    goto L66(i92, r206);
  L305():
    p68 = prom<V +>{
      gettextf = ldf gettextf;
      p67 = prom<V +>{
        repos19 = ld repos;
        repos20 = force? repos19;
        checkMissing(repos20);
        return repos20;
      };
      r208 = dyn gettextf("unable to access index for repository %s", p67);
      return r208;
    };
    p70 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p69 = prom<V +>{
        z10 = ld z;
        z11 = force? z10;
        checkMissing(z11);
        return z11;
      };
      r211 = dyn conditionMessage(p69);
      return r211;
    };
    r213 = dyn warning[, , , `call.`, `immediate.`, domain](p68, ":\n  ", p70, FALSE, TRUE, NA_LGL);
    check L306() else D106();
  L311():
    res12 = ld res0;
    check L313() else D109();
  L312():
    r217 = dyn base20(<sym res0>);
    goto L69(i95, r217);
  L375():
    path10 = force? path9;
    checkMissing(path10);
    is_na1 = ldf `is.na` in base;
    r289 = dyn is_na1(path10);
    check L376() else D141();
  D81():
    deopt 263 [i59, r148];
  D86():
    deopt 286 [i73, r156];
  D106():
    deopt 372 [i95, r213];
  D109():
    deopt 383 [i95, res12];
  D141():
    deopt 497 [i140, r278, l6, r276, r289];
  L44(i52, dx7):
    l2 = ld res0;
    rownames__1 = ldf `rownames<-`;
    check L233() else D64();
  L70():
    need_dest2 = ld need_dest;
    check L328() else D117();
  L74(i112, r226):
    goto L37(i112);
  L230():
    dr4 = tryDispatchBuiltin.1("[", res9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L232() else L231(i46);
  L231(i50):
    __1 = ldf `[` in base;
    r119 = dyn __1(res9, <missing>, "Package");
    goto L44(i50, r119);
  L258():
    goto L51(i59, r148);
  L270():
    st tmpf = r156;
    sym15 = ldf `on.exit`;
    base15 = ldf `on.exit` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L271() else L272();
  L306():
    unlink3 = ldf unlink;
    check L307() else D107();
  L313():
    res13 = force? res12;
    checkMissing(res13);
    length4 = ldf length in base;
    r219 = dyn length4(res13);
    check L314() else D110();
  L315():
    res14 = ld res0;
    check L316() else D111();
  L376():
    goto L86(i140, r278, l6, r276, r289);
  D64():
    deopt 206 [i52, dx7, l2, dx7];
  D107():
    deopt 374 [i95];
  D110():
    deopt 386 [i95, r219];
  D111():
    deopt 387 [i102, res14];
  D117():
    deopt 409 [i102, need_dest2];
  L57(i76):
    options2 = ldf options;
    check L273() else D87();
  L232():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L44(i46, dx6);
  L233():
    r120 = dyn rownames__1(l2, NULL, dx7);
    check L234() else D65();
  L271():
    on_exit = ldf `on.exit` in base;
    r159 = dyn on_exit(<lang unlink(tmpf)>);
    goto L57(i73);
  L272():
    r157 = dyn base15(<lang unlink(tmpf)>);
    goto L57(i73);
  L307():
    p71 = prom<V +>{
      dest16 = ld dest;
      dest17 = force? dest16;
      checkMissing(dest17);
      return dest17;
    };
    r215 = dyn unlink3(p71);
    check L308() else D108();
  L314():
    goto L69(i95, r219);
  L316():
    res15 = force? res14;
    checkMissing(res15);
    c32 = `is.object`(res15);
    if c32 then L317() else L318(i102);
  L328():
    need_dest3 = force? need_dest2;
    checkMissing(need_dest3);
    r227 = `!`(need_dest3);
    c34 = `as.logical`(r227);
    if c34 then L329() else L75();
  D65():
    deopt 208 [i52, dx7, r120];
  D87():
    deopt 292 [i76];
  D108():
    deopt 376 [i95, r215];
  L71(i108, dx11):
    l3 = ld res0;
    rownames__2 = ldf `rownames<-`;
    check L320() else D112();
  L75():
    goto L74(i102, NULL);
  L234():
    st res0 = r120;
    goto L45(i52, dx7);
  L273():
    p47 = prom<V +>{
      return -1;
    };
    r161 = dyn options2[warn](p47);
    check L274() else D88();
  L308():
    goto L22(i95);
  L317():
    dr6 = tryDispatchBuiltin.1("[", res15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L319() else L318(i102);
  L318(i106):
    __2 = ldf `[` in base;
    r220 = dyn __2(res15, <missing>, "Package");
    goto L71(i106, r220);
  L329():
    unlink4 = ldf unlink;
    check L330() else D118();
  D88():
    deopt 295 [i76, r161];
  D112():
    deopt 394 [i108, dx11, l3, dx11];
  D118():
    deopt 413 [i102];
  L274():
    st op = r161;
    tryCatch2 = ldf tryCatch;
    check L275() else D89();
  L319():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L71(i102, dx10);
  L320():
    r221 = dyn rownames__2(l3, NULL, dx11);
    check L321() else D113();
  L330():
    p74 = prom<V +>{
      dest20 = ld dest;
      dest21 = force? dest20;
      checkMissing(dest21);
      return dest21;
    };
    r229 = dyn unlink4(p74);
    check L331() else D119();
  D89():
    deopt 298 [i76];
  D113():
    deopt 396 [i108, dx11, r221];
  D119():
    deopt 415 [i102, r229];
  L275():
    p53 = prom<V +>{
      download_file1 = ldf `download.file`;
      p49 = prom<V +>{
        paste5 = ldf paste0;
        p48 = prom<V +>{
          repos15 = ld repos;
          repos16 = force? repos15;
          checkMissing(repos16);
          return repos16;
        };
        r163 = dyn paste5(p48, "/PACKAGES.gz");
        return r163;
      };
      p50 = prom<V +>{
        tmpf8 = ld tmpf;
        tmpf9 = force? tmpf8;
        checkMissing(tmpf9);
        return tmpf9;
      };
      p51 = prom<V +>{
        method3 = ld method;
        method4 = force? method3;
        checkMissing(method4);
        return method4;
      };
      p52 = prom<V +>{
        quiet3 = ld quiet;
        quiet4 = force? quiet3;
        checkMissing(quiet4);
        return quiet4;
      };
      ddd2 = ld `...`;
      r168 = dyn download_file1[url, destfile, method, cacheOK, quiet, mode, `...`](p49, p50, p51, FALSE, p52, "wb", ddd2);
      return r168;
    };
    p54 = prom<V +>{
      identity4 = ld identity;
      identity5 = force? identity4;
      checkMissing(identity5);
      return identity5;
    };
    r171 = dyn tryCatch2[, error](p53, p54);
    check L276() else D90();
  L321():
    st res0 = r221;
    need_dest = ld need_dest;
    check L322() else D114();
  L331():
    goto L74(i102, r229);
  D90():
    deopt 302 [i76, r171];
  D114():
    deopt 398 [i108, need_dest];
  L276():
    st z = r171;
    sym16 = ldf inherits;
    base16 = ldf inherits in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L277() else L278();
  L322():
    need_dest1 = force? need_dest;
    checkMissing(need_dest1);
    c33 = `as.logical`(need_dest1);
    if c33 then L323() else L72();
  L58(i79, r173):
    c28 = `as.logical`(r173);
    if c28 then L281() else L59();
  L72():
    goto L73(i108, NULL);
  L73(i111, r225):
    goto L74(i111, r225);
  L277():
    z4 = ld z;
    check L279() else D91();
  L278():
    r172 = dyn base16(<sym z>, "error");
    goto L58(i76, r172);
  L323():
    saveRDS = ldf saveRDS;
    check L324() else D115();
  D91():
    deopt 306 [i76, z4];
  D115():
    deopt 401 [i108];
  L59():
    goto L60(i79);
  L60(i82):
    options3 = ldf options;
    check L285() else D95();
  L279():
    z5 = force? z4;
    checkMissing(z5);
    inherits2 = ldf inherits in base;
    r174 = dyn inherits2(z5, "error", FALSE);
    check L280() else D92();
  L281():
    tryCatch3 = ldf tryCatch;
    check L282() else D93();
  L324():
    p72 = prom<V +>{
      res18 = ld res0;
      res19 = force? res18;
      checkMissing(res19);
      return res19;
    };
    p73 = prom<V +>{
      dest18 = ld dest;
      dest19 = force? dest18;
      checkMissing(dest19);
      return dest19;
    };
    r224 = dyn saveRDS[, , compress](p72, p73, TRUE);
    check L325() else D116();
  D92():
    deopt 311 [i76, r174];
  D93():
    deopt 313 [i79];
  D95():
    deopt 322 [i82];
  D116():
    deopt 406 [i108, r224];
  L280():
    goto L58(i76, r174);
  L282():
    p60 = prom<V +>{
      download_file2 = ldf `download.file`;
      p56 = prom<V +>{
        paste6 = ldf paste0;
        p55 = prom<V +>{
          repos17 = ld repos;
          repos18 = force? repos17;
          checkMissing(repos18);
          return repos18;
        };
        r176 = dyn paste6(p55, "/PACKAGES");
        return r176;
      };
      p57 = prom<V +>{
        tmpf10 = ld tmpf;
        tmpf11 = force? tmpf10;
        checkMissing(tmpf11);
        return tmpf11;
      };
      p58 = prom<V +>{
        method5 = ld method;
        method6 = force? method5;
        checkMissing(method6);
        return method6;
      };
      p59 = prom<V +>{
        quiet5 = ld quiet;
        quiet6 = force? quiet5;
        checkMissing(quiet6);
        return quiet6;
      };
      ddd3 = ld `...`;
      r181 = dyn download_file2[url, destfile, method, cacheOK, quiet, mode, `...`](p56, p57, p58, FALSE, p59, "wb", ddd3);
      return r181;
    };
    p61 = prom<V +>{
      identity6 = ld identity;
      identity7 = force? identity6;
      checkMissing(identity7);
      return identity7;
    };
    r184 = dyn tryCatch3[, error](p60, p61);
    check L283() else D94();
  L285():
    p62 = prom<V +>{
      op2 = ld op;
      op3 = force? op2;
      checkMissing(op3);
      return op3;
    };
    r187 = dyn options3(p62);
    check L286() else D96();
  L325():
    goto L73(i108, r224);
  D94():
    deopt 317 [i79, r184];
  D96():
    deopt 324 [i82, r187];
  L283():
    st z = r184;
    goto L60(i79);
  L286():
    sym17 = ldf inherits;
    base17 = ldf inherits in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L287() else L288();
  L61(i85, r189):
    r191 = `!`(r189);
    c29 = `as.logical`(r191);
    if c29 then L291() else L62();
  L287():
    z6 = ld z;
    check L289() else D97();
  L288():
    r188 = dyn base17(<sym z>, "error");
    goto L61(i82, r188);
  D97():
    deopt 327 [i82, z6];
  L62():
    goto L63(i85);
  L63(i88):
    unlink2 = ldf unlink;
    check L295() else D101();
  L289():
    z7 = force? z6;
    checkMissing(z7);
    inherits3 = ldf inherits in base;
    r190 = dyn inherits3(z7, "error", FALSE);
    check L290() else D98();
  L291():
    tryCatch4 = ldf tryCatch;
    check L292() else D99();
  D98():
    deopt 332 [i82, r190];
  D99():
    deopt 335 [i85];
  D101():
    deopt 345 [i88];
  L290():
    goto L61(i82, r190);
  L292():
    p64 = prom<V +>{
      read_dcf1 = ldf `read.dcf`;
      p63 = prom<V +>{
        tmpf12 = ld tmpf;
        tmpf13 = force? tmpf12;
        checkMissing(tmpf13);
        return tmpf13;
      };
      r193 = dyn read_dcf1[file](p63);
      return r193;
    };
    p65 = prom<V +>{
      identity8 = ld identity;
      identity9 = force? identity8;
      checkMissing(identity9);
      return identity9;
    };
    r196 = dyn tryCatch4[, error](p64, p65);
    check L293() else D100();
  L295():
    p66 = prom<V +>{
      tmpf14 = ld tmpf;
      tmpf15 = force? tmpf14;
      checkMissing(tmpf15);
      return tmpf15;
    };
    r199 = dyn unlink2(p66);
    check L296() else D102();
  D100():
    deopt 339 [i85, r196];
  D102():
    deopt 347 [i88, r199];
  L293():
    st res0 = r196;
    st z = r196;
    goto L63(i85);
  L296():
    sym18 = ldf `on.exit`;
    base18 = ldf `on.exit` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L297() else L298();
  L64(i91, r201):
    goto L65(i91);
  L297():
    on_exit1 = ldf `on.exit` in base;
    r202 = dyn on_exit1();
    goto L64(i88, r202);
  L298():
    r200 = dyn base18();
    goto L64(i88, r200);
  }
}