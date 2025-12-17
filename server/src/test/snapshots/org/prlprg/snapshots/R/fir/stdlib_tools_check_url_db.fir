fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner599262926;
    st check_url_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner599262926(db, remote, verbose, parallel, pool) {
  (reg db:*, reg remote:*, reg verbose:*, reg parallel:*, reg pool:*) -+> V { var db:*, var remote:*, reg remote_isMissing:L, reg remote_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var parallel:*, reg parallel_isMissing:L, reg parallel_orDefault:*, var pool:*, reg pool_isMissing:L, reg pool_orDefault:*, reg parallel1:*, reg parallel2:V, reg r:V, reg c:L, reg c2:V, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r1:V, reg p:p(V +), reg r3:V, reg c3:L, reg c4:V, reg c6:L, reg c8:V, reg requireNamespace:cls, reg r4:V, reg c9:L, reg c10:V, reg parallel3:*, reg parallel4:V, reg c12:L, reg c14:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg c17:L, reg r6:V, reg pool1:*, reg pool2:V, reg c18:V, reg c19:L, reg c20:V, reg c22:L, reg __:cls, reg r7:V, reg r8:cls, reg r9:V, reg r11:cls, reg parallel5:*, reg parallel6:V, reg c23:L, reg r12:cls, reg r13:cls, reg r14:cls, reg r15:cls, reg remote1:*, reg remote2:V, reg c24:L, reg r16:cls, reg r17:cls, reg r18:cls, reg r19:cls, reg r20:cls, reg _gather:cls, reg r21:V, reg NROW:cls, reg db1:*, reg db2:V, reg p1:p(V +), reg r23:V, reg r24:V, reg c25:L, reg bad:*, reg bad1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg __1:cls, reg r29:V, reg r30:cls, reg file_path:cls, reg R_home:cls, reg r31:V, reg p2:p(V +), reg r33:V, reg p3:p(V +), reg r35:V, reg c26:L, reg r37:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r38:V, reg c27:cls, reg r39:V, reg tolower:cls, reg sub:cls, reg mirrors:*, reg mirrors1:V, reg p4:p(V +), reg r41:V, reg p5:p(V +), reg r43:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r44:V, reg r45:V, reg db3:*, reg db4:V, reg inherits:cls, reg r46:V, reg c28:L, reg db5:*, reg db6:V, reg c29:L, reg db8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r47:V, reg db9:*, reg db10:V, reg c30:L, reg db12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r48:V, reg split:cls, reg db13:*, reg db14:V, reg c31:L, reg db16:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r49:V, reg p6:p(V +), reg db17:*, reg db18:V, reg c32:L, reg db20:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r51:V, reg p7:p(V +), reg r53:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r54:V, reg r55:V, reg parents:*, reg parents1:V, reg names:cls, reg r56:V, reg parse_URI_reference:cls, reg urls:*, reg urls1:V, reg p8:p(V +), reg r58:V, reg apply:cls, reg parts:*, reg parts1:V, reg r59:V, reg p9:p(V +), reg all:*, reg all1:V, reg p10:p(V +), reg r62:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r63:V, reg r64:V, reg ind:*, reg ind1:V, reg any:cls, reg r65:V, reg c33:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r66:V, reg r67:V, reg ind2:*, reg ind3:V, reg sum:cls, reg r68:V, reg rbind:cls, reg bad2:*, reg bad3:V, reg p11:p(V +), reg _gather1:cls, reg urls2:*, reg urls3:V, reg c34:L, reg urls5:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg ind4:*, reg ind5:V, reg __2:cls, reg r70:V, reg p12:p(V +), reg parents2:*, reg parents3:V, reg c35:L, reg parents5:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg ind6:*, reg ind7:V, reg __3:cls, reg r72:V, reg p13:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r74:V, reg r75:V, reg len:*, reg len1:V, reg rep_int:cls, reg r76:V, reg p14:p(V +), reg r78:V, reg p15:p(V +), reg r80:V, reg parts2:*, reg parts3:V, reg c36:L, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg __4:cls, reg r82:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r83:V, reg r84:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r85:V, reg r86:V, reg tolower1:cls, reg schemes:*, reg schemes1:V, reg p16:p(V +), reg r88:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r89:V, reg r90:V, reg IANA_URI_scheme_db:*, reg IANA_URI_scheme_db1:V, reg c37:L, reg IANA_URI_scheme_db3:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg r91:V, reg c38:cls, reg r92:V, reg match:cls, reg r93:V, reg is_na:cls, reg r94:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r95:V, reg r96:V, reg ind8:*, reg ind9:V, reg any1:cls, reg r97:V, reg c39:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r98:V, reg r99:V, reg ind10:*, reg ind11:V, reg sum1:cls, reg r100:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r101:V, reg r102:V, reg len2:*, reg len3:V, reg rep_int1:cls, reg r103:V, reg schemes2:*, reg schemes3:V, reg c40:L, reg schemes5:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg ind12:*, reg ind13:V, reg __5:cls, reg r104:V, reg r105:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r106:V, reg r107:V, reg doi:*, reg doi1:V, reg any2:cls, reg r108:V, reg c41:L, reg paste:cls, reg msg:*, reg msg1:V, reg c42:L, reg msg3:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg doi2:*, reg doi3:V, reg __6:cls, reg r109:V, reg p17:p(V +), reg r111:V, reg l:*, reg c43:L, reg r113:V, reg l2:*, reg dr22:V, reg dc11:L, reg dx23:V, reg r115:V, reg dx24:V, reg doi4:*, reg doi5:V, reg ___:cls, reg r116:V, reg rbind1:cls, reg bad4:*, reg bad5:V, reg p18:p(V +), reg _gather2:cls, reg urls6:*, reg urls7:V, reg c44:L, reg urls9:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg ind14:*, reg ind15:V, reg __7:cls, reg r119:V, reg p19:p(V +), reg parents6:*, reg parents7:V, reg c45:L, reg parents9:V, reg dr26:V, reg dc13:L, reg dx27:V, reg dx28:V, reg ind16:*, reg ind17:V, reg __8:cls, reg r121:V, reg p20:p(V +), reg msg4:*, reg msg5:V, reg p21:p(V +), reg r124:V, reg p22:p(V +), reg r126:V, reg which:cls, reg schemes6:*, reg schemes7:V, reg r128:V, reg p23:p(V +), reg r130:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r131:V, reg r132:V, reg pos:*, reg pos1:V, reg length:cls, reg r133:V, reg c46:L, reg c48:V, reg remote3:*, reg remote4:V, reg c49:L, reg c50:V, reg c52:L, reg urls10:*, reg urls11:V, reg c53:L, reg urls13:V, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg pos2:*, reg pos3:V, reg __9:cls, reg r134:V, reg _fetch_headers:cls, reg urlspos:*, reg urlspos1:V, reg p24:p(V +), reg r136:V, reg do_call:cls, reg rbind2:*, reg rbind3:V, reg p25:p(V +), reg Map:cls, reg _check_ftp:*, reg _check_ftp1:V, reg p26:p(V +), reg urlspos2:*, reg urlspos3:V, reg p27:p(V +), reg headers:*, reg headers1:V, reg p28:p(V +), reg r141:V, reg p29:p(V +), reg r143:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r144:V, reg r145:V, reg results:*, reg results1:V, reg c54:L, reg dr30:V, reg dc15:L, reg dx31:V, reg dx32:V, reg __10:cls, reg r146:V, reg as_numeric:cls, reg r147:V, reg status:*, reg status1:V, reg r148:V, reg status2:*, reg status3:V, reg r149:V, reg r150:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r151:V, reg r152:V, reg ind18:*, reg ind19:V, reg any3:cls, reg r153:V, reg c55:L, reg pos4:*, reg pos5:V, reg c56:L, reg pos7:V, reg dr32:V, reg dc16:L, reg dx33:V, reg dx34:V, reg ind20:*, reg ind21:V, reg __11:cls, reg r154:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r155:V, reg r156:V, reg status4:*, reg status5:V, reg c57:L, reg status7:V, reg dr34:V, reg dc17:L, reg dx35:V, reg dx36:V, reg ind22:*, reg ind23:V, reg __12:cls, reg r157:V, reg as_character:cls, reg r158:V, reg l3:*, reg c58:L, reg r160:S, reg l5:*, reg dr36:V, reg dc18:L, reg dx37:V, reg dx38:V, reg s:*, reg s1:V, reg r163:V, reg ___1:cls, reg r164:V, reg results4:*, reg results5:V, reg c59:L, reg results7:V, reg dr38:V, reg dc19:L, reg dx39:V, reg dx40:V, reg ind24:*, reg ind25:V, reg __13:cls, reg r165:V, reg l6:*, reg c60:L, reg r167:S, reg l8:*, reg dr40:V, reg dc20:L, reg dx41:V, reg dx42:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r174:V, reg r175:S, reg l11:*, reg r176:S, reg r177:V, reg m:*, reg m1:V, reg is_na1:cls, reg r178:V, reg ___2:cls, reg r179:V, reg rbind4:cls, reg bad6:*, reg bad7:V, reg p30:p(V +), reg _gather3:cls, reg urls14:*, reg urls15:V, reg c61:L, reg urls17:V, reg dr42:V, reg dc21:L, reg dx43:V, reg dx44:V, reg pos8:*, reg pos9:V, reg __14:cls, reg r181:V, reg p31:p(V +), reg parents10:*, reg parents11:V, reg c62:L, reg parents13:V, reg dr44:V, reg dc22:L, reg dx45:V, reg dx46:V, reg pos10:*, reg pos11:V, reg __15:cls, reg r183:V, reg p32:p(V +), reg s2:*, reg s3:V, reg p33:p(V +), reg m2:*, reg m3:V, reg p34:p(V +), reg r187:V, reg p35:p(V +), reg r189:V, reg r190:V, reg which1:cls, reg schemes8:*, reg schemes9:V, reg r192:V, reg schemes10:*, reg schemes11:V, reg r193:V, reg r194:V, reg p36:p(V +), reg r196:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r197:V, reg r198:V, reg pos12:*, reg pos13:V, reg length1:cls, reg r199:V, reg c63:L, reg c65:V, reg remote5:*, reg remote6:V, reg c66:L, reg c67:V, reg c69:L, reg urls18:*, reg urls19:V, reg c70:L, reg urls21:V, reg dr46:V, reg dc23:L, reg dx47:V, reg dx48:V, reg pos14:*, reg pos15:V, reg __16:cls, reg r200:V, reg parts6:*, reg parts7:V, reg c71:L, reg parts9:V, reg dr48:V, reg dc24:L, reg dx49:V, reg dx50:V, reg pos16:*, reg pos17:V, reg __17:cls, reg r201:V, reg myparts:*, reg myparts1:V, reg c72:L, reg dr50:V, reg dc25:L, reg dx51:V, reg dx52:V, reg __18:cls, reg r202:V, reg r203:V, reg myparts4:*, reg myparts5:V, reg c73:L, reg r205:V, reg dr52:V, reg dc26:L, reg dx53:V, reg r207:V, reg dx54:V, reg __19:cls, reg r208:V, reg r209:V, reg r210:V, reg startsWith:cls, reg myparts8:*, reg myparts9:V, reg c74:L, reg dr54:V, reg dc27:L, reg dx55:V, reg dx56:V, reg __20:cls, reg r211:V, reg p37:p(V +), reg r213:V, reg r214:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r217:V, reg r218:V, reg r219:V, reg myparts12:*, reg myparts13:V, reg c75:L, reg r221:V, reg dr56:V, reg dc28:L, reg dx57:V, reg r223:V, reg dx58:V, reg __21:cls, reg r224:V, reg nzchar:cls, reg r225:V, reg r226:V, reg r227:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r230:V, reg r231:V, reg r232:V, reg myparts16:*, reg myparts17:V, reg c76:L, reg r234:V, reg dr58:V, reg dc29:L, reg dx59:V, reg r236:V, reg dx60:V, reg __22:cls, reg r237:V, reg nzchar1:cls, reg r238:V, reg r239:V, reg r240:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r241:V, reg r242:V, reg ind26:*, reg ind27:V, reg any4:cls, reg r243:V, reg c77:L, reg paste1:cls, reg myparts20:*, reg myparts21:V, reg c78:L, reg myparts23:V, reg dr60:V, reg dc30:L, reg dx61:V, reg dx62:V, reg ind28:*, reg ind29:V, reg __23:cls, reg r244:V, reg p38:p(V +), reg r246:V, reg l12:*, reg c79:L, reg r248:V, reg l14:*, reg dr62:V, reg dc31:L, reg dx63:V, reg r250:V, reg dx64:V, reg ind30:*, reg ind31:V, reg ___3:cls, reg r251:V, reg _fetch_headers1:cls, reg urlspos4:*, reg urlspos5:V, reg p39:p(V +), reg r254:V, reg parallel7:*, reg parallel8:V, reg c80:L, reg c82:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r255:V, reg c85:L, reg r256:V, reg vapply:cls, reg headers2:*, reg headers3:V, reg p40:p(V +), reg r258:cls, reg p41:p(V +), reg r260:V, reg r261:V, reg any5:cls, reg r262:V, reg c86:L, reg c87:V, reg c89:L, reg _fetch_headers_via_curl:cls, reg urlspos6:*, reg urlspos7:V, reg c90:L, reg urlspos9:V, reg dr64:V, reg dc32:L, reg dx65:V, reg dx66:V, reg ind32:*, reg ind33:V, reg __24:cls, reg r263:V, reg p42:p(V +), reg verbose1:*, reg verbose2:V, reg p43:p(V +), reg pool3:*, reg pool4:V, reg p44:p(V +), reg r267:V, reg l15:*, reg c91:L, reg r269:V, reg l17:*, reg dr66:V, reg dc33:L, reg dx67:V, reg r271:V, reg dx68:V, reg ind34:*, reg ind35:V, reg ___4:cls, reg r272:V, reg do_call1:cls, reg rbind5:*, reg rbind6:V, reg p45:p(V +), reg Map1:cls, reg _check_http:*, reg _check_http1:V, reg p46:p(V +), reg urlspos10:*, reg urlspos11:V, reg p47:p(V +), reg headers4:*, reg headers5:V, reg p48:p(V +), reg r278:V, reg p49:p(V +), reg r280:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r281:V, reg r282:V, reg results8:*, reg results9:V, reg c92:L, reg dr68:V, reg dc34:L, reg dx69:V, reg dx70:V, reg __25:cls, reg r283:V, reg as_numeric1:cls, reg r284:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r285:V, reg r286:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r287:V, reg r288:V, reg status8:*, reg status9:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r289:V, reg r290:V, reg c93:cls, reg r291:V, reg match1:cls, reg r292:V, reg is_na2:cls, reg r293:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r296:V, reg r297:V, reg r298:V, reg results12:*, reg results13:V, reg c94:L, reg r300:V, reg dr70:V, reg dc35:L, reg dx71:V, reg r302:V, reg dx72:V, reg __26:cls, reg r303:V, reg nzchar2:cls, reg r304:V, reg r305:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r308:V, reg r309:V, reg r310:V, reg results16:*, reg results17:V, reg c95:L, reg r312:V, reg dr72:V, reg dc36:L, reg dx73:V, reg r314:V, reg dx74:V, reg __27:cls, reg r315:V, reg nzchar3:cls, reg r316:V, reg r317:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r320:V, reg r321:V, reg r322:V, reg results20:*, reg results21:V, reg c96:L, reg r324:V, reg dr74:V, reg dc37:L, reg dx75:V, reg r326:V, reg dx76:V, reg __28:cls, reg r327:V, reg nzchar4:cls, reg r328:V, reg r329:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r332:V, reg r333:V, reg r334:V, reg results24:*, reg results25:V, reg c97:L, reg r336:V, reg dr76:V, reg dc38:L, reg dx77:V, reg r338:V, reg dx78:V, reg __29:cls, reg r339:V, reg nzchar5:cls, reg r340:V, reg r341:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r342:V, reg r343:V, reg ind36:*, reg ind37:V, reg any6:cls, reg r344:V, reg c98:L, reg pos18:*, reg pos19:V, reg c99:L, reg pos21:V, reg dr78:V, reg dc39:L, reg dx79:V, reg dx80:V, reg ind38:*, reg ind39:V, reg __30:cls, reg r345:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r346:V, reg r347:V, reg status10:*, reg status11:V, reg c100:L, reg status13:V, reg dr80:V, reg dc40:L, reg dx81:V, reg dx82:V, reg ind40:*, reg ind41:V, reg __31:cls, reg r348:V, reg as_character1:cls, reg r349:V, reg l18:*, reg c101:L, reg r351:S, reg l20:*, reg dr82:V, reg dc41:L, reg dx83:V, reg dx84:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r358:V, reg r359:S, reg l23:*, reg r360:S, reg r361:V, reg s4:*, reg s5:V, reg is_na3:cls, reg r362:V, reg ___5:cls, reg r363:V, reg l24:*, reg c102:L, reg r365:S, reg l26:*, reg dr84:V, reg dc42:L, reg dx85:V, reg dx86:V, reg s6:*, reg s7:V, reg r368:V, reg ___6:cls, reg r369:V, reg results28:*, reg results29:V, reg c103:L, reg results31:V, reg dr86:V, reg dc43:L, reg dx87:V, reg dx88:V, reg ind42:*, reg ind43:V, reg __32:cls, reg r370:V, reg l27:*, reg c104:L, reg r372:S, reg l29:*, reg dr88:V, reg dc44:L, reg dx89:V, reg dx90:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r379:V, reg r380:S, reg l32:*, reg r381:S, reg r382:V, reg m4:*, reg m5:V, reg is_na4:cls, reg r383:V, reg ___7:cls, reg r384:V, reg _gather4:cls, reg urls22:*, reg urls23:V, reg c105:L, reg urls25:V, reg dr90:V, reg dc45:L, reg dx91:V, reg dx92:V, reg pos22:*, reg pos23:V, reg __33:cls, reg r385:V, reg p50:p(V +), reg parents14:*, reg parents15:V, reg c106:L, reg parents17:V, reg dr92:V, reg dc46:L, reg dx93:V, reg dx94:V, reg pos24:*, reg pos25:V, reg __34:cls, reg r387:V, reg p51:p(V +), reg s8:*, reg s9:V, reg p52:p(V +), reg m6:*, reg m7:V, reg p53:p(V +), reg results32:*, reg results33:V, reg c107:L, reg results35:V, reg dr94:V, reg dc47:L, reg dx95:V, reg dx96:V, reg ind44:*, reg ind45:V, reg __35:cls, reg r391:V, reg p54:p(V +), reg results36:*, reg results37:V, reg c108:L, reg results39:V, reg dr96:V, reg dc48:L, reg dx97:V, reg dx98:V, reg ind46:*, reg ind47:V, reg __36:cls, reg r393:V, reg p55:p(V +), reg results40:*, reg results41:V, reg c109:L, reg results43:V, reg dr98:V, reg dc49:L, reg dx99:V, reg dx100:V, reg ind48:*, reg ind49:V, reg __37:cls, reg r395:V, reg p56:p(V +), reg results44:*, reg results45:V, reg c110:L, reg results47:V, reg dr100:V, reg dc50:L, reg dx101:V, reg dx102:V, reg ind50:*, reg ind51:V, reg __38:cls, reg r397:V, reg p57:p(V +), reg r399:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r400:V, reg r401:V, reg c111:cls, reg r402:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r403:V, reg r404:V, reg c112:cls, reg r405:V, reg bad_https:*, reg bad_https1:V, reg c113:L, reg bad_https3:V, reg dr102:V, reg dc51:L, reg dx103:V, reg dx104:V, reg grepl:cls, reg paste2:cls, reg false_pos_db_403:*, reg false_pos_db_404:V, reg p58:p(V +), reg r407:V, reg p59:p(V +), reg bad_https4:*, reg bad_https5:V, reg c114:L, reg bad_https7:V, reg dr104:V, reg dc52:L, reg dx105:V, reg dx106:V, reg r409:V, reg p60:p(V +), reg r411:V, reg bad_https8:*, reg bad_https9:V, reg c115:L, reg bad_https12:V, reg r413:V, reg bad_https13:V, reg dr106:V, reg dc53:L, reg dx107:V, reg bad_https15:V, reg r415:V, reg dx108:V, reg r416:V, reg r417:V, reg r418:V, reg grepl1:cls, reg paste3:cls, reg false_pos_db_405:*, reg false_pos_db_406:V, reg p61:p(V +), reg r420:V, reg p62:p(V +), reg bad_https16:*, reg bad_https17:V, reg c116:L, reg bad_https19:V, reg dr108:V, reg dc54:L, reg dx109:V, reg dx110:V, reg r422:V, reg p63:p(V +), reg r424:V, reg bad_https20:*, reg bad_https21:V, reg c117:L, reg bad_https24:V, reg r427:V, reg r428:V, reg bad_https25:V, reg dr110:V, reg dc55:L, reg dx111:V, reg r431:V, reg r432:V, reg dx112:V, reg r433:V, reg r434:V, reg r435:V, reg r436:V, reg r437:V, reg __39:cls, reg r438:V, reg rbind7:cls, reg bad8:*, reg bad9:V, reg p64:p(V +), reg bad_https28:*, reg bad_https29:V, reg p65:p(V +), reg r441:V, reg r442:V, reg bad10:*, reg bad11:V |
    mkenv;
    st db = db;
    remote_isMissing = missing.0(remote);
    if remote_isMissing then L0(TRUE) else L0(remote);
  L0(remote_orDefault):
    st remote = remote_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L1(FALSE) else L1(verbose);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    parallel_isMissing = missing.0(parallel);
    if parallel_isMissing then L2(FALSE) else L2(parallel);
  L2(parallel_orDefault):
    st parallel = parallel_orDefault;
    pool_isMissing = missing.0(pool);
    if pool_isMissing then L3(NULL) else L3(pool);
  L3(pool_orDefault):
    st pool = pool_orDefault;
    parallel1 = ld parallel;
    check L105() else D0();
  D0():
    deopt 0 [parallel1];
  L105():
    parallel2 = force? parallel1;
    checkMissing(parallel2);
    r = `!`(parallel2);
    c = `as.logical`(r);
    if c then L106() else L4(c);
  L4(c2):
    c6 = `as.logical`(c2);
    if c6 then L110() else L5(c6);
  L106():
    config_val_to_logical = ldf config_val_to_logical;
    check L107() else D1();
  D1():
    deopt 4 [c];
  L5(c8):
    st use_curl = c8;
    parallel3 = ld parallel;
    check L114() else D5();
  L107():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r1 = dyn Sys_getenv("_R_CHECK_URLS_USE_CURL_", "TRUE");
      return r1;
    };
    r3 = dyn config_val_to_logical(p);
    check L108() else D2();
  L110():
    requireNamespace = ldf requireNamespace;
    check L111() else D3();
  D2():
    deopt 6 [c, r3];
  D3():
    deopt 9 [c6];
  D5():
    deopt 16 [parallel3];
  L108():
    c3 = `as.logical`(r3);
    c4 = `&&`(c, c3);
    goto L4(c4);
  L111():
    r4 = dyn requireNamespace[, quietly]("curl", TRUE);
    check L112() else D4();
  L114():
    parallel4 = force? parallel3;
    checkMissing(parallel4);
    c12 = `as.logical`(parallel4);
    if c12 then L115() else L6(c12);
  D4():
    deopt 13 [c6, r4];
  L6(c14):
    c22 = `as.logical`(c14);
    if c22 then L120() else L8();
  L112():
    c9 = `as.logical`(r4);
    c10 = `&&`(c6, c9);
    goto L5(c10);
  L115():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L116() else L117();
  L7(c17, r6):
    c19 = `as.logical`(r6);
    c20 = `&&`(c17, c19);
    goto L6(c20);
  L8():
    goto L9();
  L9():
    r11 = clos inner3112657695;
    st `.gather` = r11;
    parallel5 = ld parallel;
    check L125() else D10();
  L116():
    pool1 = ld pool;
    check L118() else D6();
  L117():
    r5 = dyn base(<sym pool>);
    goto L7(c12, r5);
  L120():
    __ = ldf `::`;
    check L121() else D7();
  D6():
    deopt 19 [c12, pool1];
  D7():
    deopt 24 [];
  D10():
    deopt 36 [parallel5];
  L118():
    pool2 = force? pool1;
    checkMissing(pool2);
    c18 = `==`(pool2, NULL);
    goto L7(c12, c18);
  L121():
    r7 = dyn __("curl", "new_pool");
    check L122() else D8();
  L125():
    parallel6 = force? parallel5;
    checkMissing(parallel6);
    c23 = `as.logical`(parallel6);
    if c23 then L126() else L10();
  D8():
    deopt 27 [r7];
  L10():
    r14 = clos inner2711021060;
    goto L11(r14);
  L11(r13):
    st `.fetch_headers` = r13;
    r15 = clos inner2374964927;
    st `.check_ftp` = r15;
    remote1 = ld remote;
    check L128() else D11();
  L122():
    checkFun.0(r7);
    r8 = r7 as cls;
    r9 = dyn r8();
    check L123() else D9();
  L126():
    r12 = clos inner2711021060;
    goto L11(r12);
  D9():
    deopt 29 [r9];
  D11():
    deopt 46 [remote1];
  L123():
    st pool = r9;
    goto L9();
  L128():
    remote2 = force? remote1;
    checkMissing(remote2);
    c24 = `as.logical`(remote2);
    if c24 then L129() else L12();
  L12():
    r18 = clos inner2374964927;
    goto L13(r18);
  L13(r17):
    st `.check_http` = r17;
    r19 = clos inner2374964927;
    st `.check_http_A` = r19;
    r20 = clos inner883694641;
    st `.check_http_B` = r20;
    _gather = ldf `.gather`;
    check L131() else D12();
  L129():
    r16 = clos inner2374964927;
    goto L13(r16);
  D12():
    deopt 60 [];
  L131():
    r21 = dyn _gather();
    check L132() else D13();
  D13():
    deopt 61 [r21];
  L132():
    st bad = r21;
    NROW = ldf NROW;
    check L133() else D14();
  D14():
    deopt 64 [];
  L133():
    p1 = prom<V +>{
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      return db2;
    };
    r23 = dyn NROW(p1);
    check L134() else D15();
  D15():
    deopt 66 [r23];
  L134():
    r24 = `!`(r23);
    c25 = `as.logical`(r24);
    if c25 then L135() else L14();
  L14():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L139() else L140();
  L135():
    bad = ld bad;
    check L136() else D16();
  D16():
    deopt 68 [bad];
  L16(r28):
    st mirrors = r28;
    tolower = ldf tolower;
    check L149() else D21();
  L136():
    bad1 = force? bad;
    checkMissing(bad1);
    popenv;
    return bad1;
  L139():
    __1 = ldf `::`;
    check L141() else D17();
  L140():
    r27 = dyn base1(<lang `$`(`::`(utils, read.csv)(file.path(R.home("doc"), "CRAN_mirrors.csv"), as.is=TRUE, encoding="UTF-8"), URL)>, "http://cran.rstudio.com/", "https://cran.rstudio.com/");
    goto L16(r27);
  D17():
    deopt 76 [];
  D21():
    deopt 94 [];
  L141():
    r29 = dyn __1("utils", "read.csv");
    check L142() else D18();
  L149():
    p5 = prom<V +>{
      sub = ldf sub;
      p4 = prom<V +>{
        mirrors = ld mirrors;
        mirrors1 = force? mirrors;
        checkMissing(mirrors1);
        return mirrors1;
      };
      r41 = dyn sub("/$", "", p4);
      return r41;
    };
    r43 = dyn tolower(p5);
    check L150() else D22();
  D18():
    deopt 79 [r29];
  D22():
    deopt 96 [r43];
  L142():
    checkFun.0(r29);
    r30 = r29 as cls;
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        R_home = ldf `R.home`;
        r31 = dyn R_home("doc");
        return r31;
      };
      r33 = dyn file_path(p2, "CRAN_mirrors.csv");
      return r33;
    };
    r35 = dyn r30[, `as.is`, encoding](p3, TRUE, "UTF-8");
    check L143() else D19();
  L150():
    st mirrors = r43;
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L151() else L152();
  D19():
    deopt 86 [r35];
  L17(r45):
    c28 = `as.logical`(r45);
    if c28 then L155() else L18();
  L143():
    c26 = `is.object`(r35);
    if c26 then L145() else L146(r35);
  L151():
    db3 = ld db;
    check L153() else D23();
  L152():
    r44 = dyn base2(<sym db>, "check_url_db");
    goto L17(r44);
  D23():
    deopt 100 [db3];
  L18():
    split = ldf split;
    check L167() else D27();
  L19():
    parse_URI_reference = ldf parse_URI_reference;
    check L173() else D31();
  L144(dx1):
    c27 = ldf c in base;
    r39 = dyn c27(dx1, "http://cran.rstudio.com/", "https://cran.rstudio.com/");
    check L148() else D20();
  L145():
    dr = tryDispatchBuiltin.1("$", r35);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L147() else L146(dr);
  L146(r37):
    r38 = `$`(r37, <sym URL>);
    goto L144(r38);
  L153():
    db4 = force? db3;
    checkMissing(db4);
    inherits = ldf inherits in base;
    r46 = dyn inherits(db4, "check_url_db", FALSE);
    check L154() else D24();
  L155():
    db5 = ld db;
    check L156() else D25();
  D20():
    deopt 91 [r39];
  D24():
    deopt 105 [r46];
  D25():
    deopt 106 [db5];
  D27():
    deopt 115 [];
  D31():
    deopt 128 [];
  L147():
    dx = getTryDispatchBuiltinValue(dr);
    goto L144(dx);
  L148():
    goto L16(r39);
  L154():
    goto L17(r46);
  L156():
    db6 = force? db5;
    checkMissing(db6);
    c29 = `is.object`(db6);
    if c29 then L158() else L159(db6);
  L167():
    p6 = prom<V +>{
      db13 = ld db;
      db14 = force? db13;
      checkMissing(db14);
      c31 = `is.object`(db14);
      if c31 then L1() else L2(db14);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("$", db14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(db16):
      r49 = `$`(db16, <sym Parent>);
      goto L0(r49);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    p7 = prom<V +>{
      db17 = ld db;
      db18 = force? db17;
      checkMissing(db18);
      c32 = `is.object`(db18);
      if c32 then L1() else L2(db18);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("$", db18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(db20):
      r51 = `$`(db20, <sym URL>);
      goto L0(r51);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    r53 = dyn split(p6, p7);
    check L168() else D28();
  L173():
    p8 = prom<V +>{
      urls = ld urls;
      urls1 = force? urls;
      checkMissing(urls1);
      return urls1;
    };
    r58 = dyn parse_URI_reference(p8);
    check L174() else D32();
  D28():
    deopt 118 [r53];
  D32():
    deopt 130 [r58];
  L157(dx3):
    st parents = dx3;
    db9 = ld db;
    check L161() else D26();
  L158():
    dr2 = tryDispatchBuiltin.1("$", db6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L160() else L159(dr2);
  L159(db8):
    r47 = `$`(db8, <sym From>);
    goto L157(r47);
  L168():
    st parents = r53;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L169() else L170();
  L174():
    st parts = r58;
    apply = ldf apply;
    check L175() else D33();
  D26():
    deopt 110 [db9];
  D33():
    deopt 133 [];
  L20(r55):
    st urls = r55;
    goto L19();
  L160():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L157(dx2);
  L161():
    db10 = force? db9;
    checkMissing(db10);
    c30 = `is.object`(db10);
    if c30 then L163() else L164(db10);
  L169():
    parents = ld parents;
    check L171() else D29();
  L170():
    r54 = dyn base3(<sym parents>);
    goto L20(r54);
  L175():
    p9 = prom<V +>{
      parts = ld parts;
      parts1 = force? parts;
      checkMissing(parts1);
      r59 = `==`(parts1, "");
      return r59;
    };
    p10 = prom<V +>{
      all = ld all;
      all1 = force? all;
      checkMissing(all1);
      return all1;
    };
    r62 = dyn apply(p9, 1, p10);
    check L176() else D34();
  D29():
    deopt 122 [parents];
  D34():
    deopt 137 [r62];
  L162(dx5):
    st urls = dx5;
    goto L19();
  L163():
    dr4 = tryDispatchBuiltin.1("$", db10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L165() else L164(dr4);
  L164(db12):
    r48 = `$`(db12, <sym URL>);
    goto L162(r48);
  L171():
    parents1 = force? parents;
    checkMissing(parents1);
    names = ldf names in base;
    r56 = dyn names(parents1);
    check L172() else D30();
  L176():
    st ind = r62;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L177() else L178();
  D30():
    deopt 125 [r56];
  L21(r64):
    c33 = `as.logical`(r64);
    if c33 then L181() else L22();
  L165():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L162(dx4);
  L172():
    goto L20(r56);
  L177():
    ind = ld ind;
    check L179() else D35();
  L178():
    r63 = dyn base4(<sym ind>);
    goto L21(r63);
  D35():
    deopt 141 [ind];
  L22():
    goto L24();
  L24():
    parts2 = ld parts;
    check L189() else D41();
  L179():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r65 = dyn any(ind1);
    check L180() else D36();
  L181():
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L182() else L183();
  D36():
    deopt 144 [r65];
  D41():
    deopt 160 [parts2];
  L23(r67):
    st len = r67;
    rbind = ldf rbind;
    check L186() else D39();
  L180():
    goto L21(r65);
  L182():
    ind2 = ld ind;
    check L184() else D37();
  L183():
    r66 = dyn base5(<sym ind>);
    goto L23(r66);
  L189():
    parts3 = force? parts2;
    checkMissing(parts3);
    c36 = `is.object`(parts3);
    if c36 then L190() else L191();
  D37():
    deopt 147 [ind2];
  D39():
    deopt 153 [];
  L25(dx16):
    st schemes = dx16;
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L193() else L194();
  L184():
    ind3 = force? ind2;
    checkMissing(ind3);
    sum = ldf sum in base;
    r68 = dyn sum(ind3);
    check L185() else D38();
  L186():
    p11 = prom<V +>{
      bad2 = ld bad;
      bad3 = force? bad2;
      checkMissing(bad3);
      return bad3;
    };
    p15 = prom<V +>{
      _gather1 = ldf `.gather`;
      p12 = prom<V +>{
        urls2 = ld urls;
        urls3 = force? urls2;
        checkMissing(urls3);
        c34 = `is.object`(urls3);
        if c34 then L1() else L2(urls3);
      L0(dx12):
        return dx12;
      L1():
        dr10 = tryDispatchBuiltin.1("[", urls3);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(urls5):
        ind4 = ld ind;
        ind5 = force? ind4;
        __2 = ldf `[` in base;
        r70 = dyn __2(urls5, ind5);
        goto L0(r70);
      L3():
        dx11 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx11);
      };
      p13 = prom<V +>{
        parents2 = ld parents;
        parents3 = force? parents2;
        checkMissing(parents3);
        c35 = `is.object`(parents3);
        if c35 then L1() else L2(parents3);
      L0(dx14):
        return dx14;
      L1():
        dr12 = tryDispatchBuiltin.1("[", parents3);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(parents5):
        ind6 = ld ind;
        ind7 = force? ind6;
        __3 = ldf `[` in base;
        r72 = dyn __3(parents5, ind7);
        goto L0(r72);
      L3():
        dx13 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx13);
      };
      p14 = prom<V +>{
        sym6 = ldf `rep.int`;
        base6 = ldf `rep.int` in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r75):
        return r75;
      L1():
        len = ld len;
        len1 = force? len;
        checkMissing(len1);
        rep_int = ldf `rep.int` in base;
        r76 = dyn rep_int("Empty URL", len1);
        goto L0(r76);
      L2():
        r74 = dyn base6("Empty URL", <sym len>);
        goto L0(r74);
      };
      r78 = dyn _gather1[, , m](p12, p13, p14);
      return r78;
    };
    r80 = dyn rbind(p11, p15);
    check L187() else D40();
  L190():
    dr14 = tryDispatchBuiltin.1("[", parts3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L192() else L191();
  L191():
    __4 = ldf `[` in base;
    r82 = dyn __4(parts3, <missing>, 1);
    goto L25(r82);
  D38():
    deopt 150 [r68];
  D40():
    deopt 156 [r80];
  L26(r84):
    st ind = r84;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L209() else L210();
  L185():
    goto L23(r68);
  L187():
    st bad = r80;
    goto L24();
  L192():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L25(dx15);
  L193():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L195() else L196();
  L194():
    r83 = dyn base7(<lang match(tolower(schemes), c("", `$`(IANA_URI_scheme_db, URI_Scheme), "arxiv", "isbn", "issn", "javascript"))>);
    goto L26(r83);
  L27(r86):
    is_na = ldf `is.na` in base;
    r94 = dyn is_na(r86);
    check L208() else D47();
  L29(r96):
    c39 = `as.logical`(r96);
    if c39 then L213() else L30();
  L195():
    tolower1 = ldf tolower;
    check L197() else D42();
  L196():
    r85 = dyn base8(<lang tolower(schemes)>, <lang c("", `$`(IANA_URI_scheme_db, URI_Scheme), "arxiv", "isbn", "issn", "javascript")>);
    goto L27(r85);
  L209():
    ind8 = ld ind;
    check L211() else D48();
  L210():
    r95 = dyn base10(<sym ind>);
    goto L29(r95);
  D42():
    deopt 172 [];
  D47():
    deopt 192 [r94];
  D48():
    deopt 196 [ind8];
  L30():
    goto L38();
  L38():
    which = ldf which;
    check L242() else D63();
  L197():
    p16 = prom<V +>{
      schemes = ld schemes;
      schemes1 = force? schemes;
      checkMissing(schemes1);
      return schemes1;
    };
    r88 = dyn tolower1(p16);
    check L198() else D43();
  L208():
    goto L26(r94);
  L211():
    ind9 = force? ind8;
    checkMissing(ind9);
    any1 = ldf any in base;
    r97 = dyn any1(ind9);
    check L212() else D49();
  L213():
    sym11 = ldf sum;
    base11 = ldf sum in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L214() else L215();
  D43():
    deopt 174 [r88];
  D49():
    deopt 199 [r97];
  D63():
    deopt 250 [];
  L31(r99):
    st len = r99;
    sym12 = ldf `rep.int`;
    base12 = ldf `rep.int` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L218() else L219();
  L198():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L199() else L200();
  L212():
    goto L29(r97);
  L214():
    ind10 = ld ind;
    check L216() else D50();
  L215():
    r98 = dyn base11(<sym ind>);
    goto L31(r98);
  L242():
    p23 = prom<V +>{
      schemes6 = ld schemes;
      schemes7 = force? schemes6;
      checkMissing(schemes7);
      r128 = `==`(schemes7, "ftp");
      return r128;
    };
    r130 = dyn which(p23);
    check L243() else D64();
  D50():
    deopt 202 [ind10];
  D64():
    deopt 252 [r130];
  L28(r90):
    match = ldf match in base;
    r93 = dyn match(r88, r90, NA_INT, NULL);
    check L207() else D46();
  L32(r102):
    st msg = r102;
    schemes2 = ld schemes;
    check L222() else D54();
  L199():
    IANA_URI_scheme_db = ld IANA_URI_scheme_db;
    check L201() else D44();
  L200():
    r89 = dyn base9("", <lang `$`(IANA_URI_scheme_db, URI_Scheme)>, "arxiv", "isbn", "issn", "javascript");
    goto L28(r89);
  L216():
    ind11 = force? ind10;
    checkMissing(ind11);
    sum1 = ldf sum in base;
    r100 = dyn sum1(ind11);
    check L217() else D51();
  L218():
    len2 = ld len;
    check L220() else D52();
  L219():
    r101 = dyn base12("Invalid URI scheme", <sym len>);
    goto L32(r101);
  L243():
    st pos = r130;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L244() else L245();
  D44():
    deopt 178 [IANA_URI_scheme_db];
  D46():
    deopt 190 [r93];
  D51():
    deopt 205 [r100];
  D52():
    deopt 210 [len2];
  D54():
    deopt 215 [schemes2];
  L39(r132):
    c46 = `as.logical`(r132);
    if c46 then L248() else L40(c46);
  L201():
    IANA_URI_scheme_db1 = force? IANA_URI_scheme_db;
    checkMissing(IANA_URI_scheme_db1);
    c37 = `is.object`(IANA_URI_scheme_db1);
    if c37 then L203() else L204(IANA_URI_scheme_db1);
  L207():
    goto L27(r93);
  L217():
    goto L31(r100);
  L220():
    len3 = force? len2;
    checkMissing(len3);
    rep_int1 = ldf `rep.int` in base;
    r103 = dyn rep_int1("Invalid URI scheme", len3);
    check L221() else D53();
  L222():
    schemes3 = force? schemes2;
    checkMissing(schemes3);
    c40 = `is.object`(schemes3);
    if c40 then L223() else L224(schemes3);
  L244():
    pos = ld pos;
    check L246() else D65();
  L245():
    r131 = dyn base14(<sym pos>);
    goto L39(r131);
  D53():
    deopt 213 [r103];
  D65():
    deopt 256 [pos];
  L33(dx20):
    r105 = `==`(dx20, "doi");
    st doi = r105;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L227() else L228();
  L40(c48):
    c52 = `as.logical`(c48);
    if c52 then L251() else L41();
  L202(dx18):
    c38 = ldf c in base;
    r92 = dyn c38("", dx18, "arxiv", "isbn", "issn", "javascript");
    check L206() else D45();
  L203():
    dr16 = tryDispatchBuiltin.1("$", IANA_URI_scheme_db1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L205() else L204(dr16);
  L204(IANA_URI_scheme_db3):
    r91 = `$`(IANA_URI_scheme_db3, <sym URI_Scheme>);
    goto L202(r91);
  L221():
    goto L32(r103);
  L223():
    dr18 = tryDispatchBuiltin.1("[", schemes3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L225() else L224(dr18);
  L224(schemes5):
    ind12 = ld ind;
    check L226() else D55();
  L246():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r133 = dyn length(pos1);
    check L247() else D66();
  L248():
    remote3 = ld remote;
    check L249() else D67();
  D45():
    deopt 186 [r92];
  D55():
    deopt 217 [schemes5, ind12];
  D66():
    deopt 259 [r133];
  D67():
    deopt 260 [c46, remote3];
  L34(r107):
    c41 = `as.logical`(r107);
    if c41 then L231() else L35();
  L41():
    goto L55();
  L55():
    which1 = ldf which;
    check L308() else D92();
  L205():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L202(dx17);
  L206():
    goto L28(r92);
  L225():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L33(dx19);
  L226():
    ind13 = force? ind12;
    __5 = ldf `[` in base;
    r104 = dyn __5(schemes5, ind13);
    goto L33(r104);
  L227():
    doi = ld doi;
    check L229() else D56();
  L228():
    r106 = dyn base13(<sym doi>);
    goto L34(r106);
  L247():
    goto L39(r133);
  L249():
    remote4 = force? remote3;
    checkMissing(remote4);
    c49 = `as.logical`(remote4);
    c50 = `&&`(c46, c49);
    goto L40(c50);
  L251():
    urls10 = ld urls;
    check L252() else D68();
  D56():
    deopt 225 [doi];
  D68():
    deopt 263 [urls10];
  D92():
    deopt 360 [];
  L35():
    goto L37();
  L37():
    rbind1 = ldf rbind;
    check L239() else D61();
  L229():
    doi1 = force? doi;
    checkMissing(doi1);
    any2 = ldf any in base;
    r108 = dyn any2(doi1);
    check L230() else D57();
  L231():
    paste = ldf paste;
    check L232() else D58();
  L252():
    urls11 = force? urls10;
    checkMissing(urls11);
    c53 = `is.object`(urls11);
    if c53 then L253() else L254(urls11);
  L308():
    p36 = prom<V +>{
      schemes8 = ld schemes;
      schemes9 = force? schemes8;
      checkMissing(schemes9);
      r192 = `==`(schemes9, "http");
      schemes10 = ld schemes;
      schemes11 = force? schemes10;
      checkMissing(schemes11);
      r193 = `==`(schemes11, "https");
      r194 = `||`(r192, r193);
      return r194;
    };
    r196 = dyn which1(p36);
    check L309() else D93();
  D57():
    deopt 228 [r108];
  D58():
    deopt 230 [];
  D61():
    deopt 242 [];
  D93():
    deopt 362 [r196];
  L42(dx30):
    st urlspos = dx30;
    _fetch_headers = ldf `.fetch_headers`;
    check L257() else D70();
  L230():
    goto L34(r108);
  L232():
    p17 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      c42 = `is.object`(msg1);
      if c42 then L1() else L2(msg1);
    L0(dx22):
      return dx22;
    L1():
      dr20 = tryDispatchBuiltin.1("[", msg1);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(msg3):
      doi2 = ld doi;
      doi3 = force? doi2;
      __6 = ldf `[` in base;
      r109 = dyn __6(msg3, doi3);
      goto L0(r109);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx21);
    };
    r111 = dyn paste(p17, "(use \\doi for DOIs in Rd markup)");
    check L233() else D59();
  L239():
    p18 = prom<V +>{
      bad4 = ld bad;
      bad5 = force? bad4;
      checkMissing(bad5);
      return bad5;
    };
    p22 = prom<V +>{
      _gather2 = ldf `.gather`;
      p19 = prom<V +>{
        urls6 = ld urls;
        urls7 = force? urls6;
        checkMissing(urls7);
        c44 = `is.object`(urls7);
        if c44 then L1() else L2(urls7);
      L0(dx26):
        return dx26;
      L1():
        dr24 = tryDispatchBuiltin.1("[", urls7);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L3() else L2(dr24);
      L2(urls9):
        ind14 = ld ind;
        ind15 = force? ind14;
        __7 = ldf `[` in base;
        r119 = dyn __7(urls9, ind15);
        goto L0(r119);
      L3():
        dx25 = getTryDispatchBuiltinValue(dr24);
        goto L0(dx25);
      };
      p20 = prom<V +>{
        parents6 = ld parents;
        parents7 = force? parents6;
        checkMissing(parents7);
        c45 = `is.object`(parents7);
        if c45 then L1() else L2(parents7);
      L0(dx28):
        return dx28;
      L1():
        dr26 = tryDispatchBuiltin.1("[", parents7);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(parents9):
        ind16 = ld ind;
        ind17 = force? ind16;
        __8 = ldf `[` in base;
        r121 = dyn __8(parents9, ind17);
        goto L0(r121);
      L3():
        dx27 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx27);
      };
      p21 = prom<V +>{
        msg4 = ld msg;
        msg5 = force? msg4;
        checkMissing(msg5);
        return msg5;
      };
      r124 = dyn _gather2[, , m](p19, p20, p21);
      return r124;
    };
    r126 = dyn rbind1(p18, p22);
    check L240() else D62();
  L253():
    dr28 = tryDispatchBuiltin.1("[", urls11);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L255() else L254(dr28);
  L254(urls13):
    pos2 = ld pos;
    check L256() else D69();
  L309():
    st pos = r196;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L310() else L311();
  D59():
    deopt 233 [r111];
  D62():
    deopt 245 [r126];
  D69():
    deopt 265 [urls13, pos2];
  D70():
    deopt 270 [];
  L56(r198):
    c63 = `as.logical`(r198);
    if c63 then L314() else L57(c63);
  L233():
    l = ld msg;
    c43 = `is.object`(l);
    if c43 then L234() else L235(r111, l);
  L240():
    st bad = r126;
    goto L38();
  L255():
    dx29 = getTryDispatchBuiltinValue(dr28);
    goto L42(dx29);
  L256():
    pos3 = force? pos2;
    __9 = ldf `[` in base;
    r134 = dyn __9(urls13, pos3);
    goto L42(r134);
  L257():
    p24 = prom<V +>{
      urlspos = ld urlspos;
      urlspos1 = force? urlspos;
      checkMissing(urlspos1);
      return urlspos1;
    };
    r136 = dyn _fetch_headers(p24);
    check L258() else D71();
  L310():
    pos12 = ld pos;
    check L312() else D94();
  L311():
    r197 = dyn base19(<sym pos>);
    goto L56(r197);
  D71():
    deopt 272 [r136];
  D94():
    deopt 366 [pos12];
  L36(r115, dx24):
    st msg = dx24;
    goto L37();
  L57(c65):
    c69 = `as.logical`(c65);
    if c69 then L317() else L58();
  L234():
    dr22 = tryDispatchBuiltin.0("[<-", l, r111);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L236() else L235(r111, dr22);
  L235(r113, l2):
    doi4 = ld doi;
    check L237() else D60();
  L258():
    st headers = r136;
    do_call = ldf `do.call`;
    check L259() else D72();
  L312():
    pos13 = force? pos12;
    checkMissing(pos13);
    length1 = ldf length in base;
    r199 = dyn length1(pos13);
    check L313() else D95();
  L314():
    remote5 = ld remote;
    check L315() else D96();
  D60():
    deopt 235 [r113, l2, r111, doi4];
  D72():
    deopt 275 [];
  D95():
    deopt 369 [r199];
  D96():
    deopt 370 [c63, remote5];
  L58():
    goto L104();
  L104():
    bad10 = ld bad;
    check L500() else D166();
  L236():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L36(r111, dx23);
  L237():
    doi5 = force? doi4;
    ___ = ldf `[<-` in base;
    r116 = dyn ___(l2, r111, doi5);
    goto L36(r113, r116);
  L259():
    p25 = prom<V +>{
      rbind2 = ld rbind;
      rbind3 = force? rbind2;
      checkMissing(rbind3);
      return rbind3;
    };
    p29 = prom<V +>{
      Map = ldf Map;
      p26 = prom<V +>{
        _check_ftp = ld `.check_ftp`;
        _check_ftp1 = force? _check_ftp;
        checkMissing(_check_ftp1);
        return _check_ftp1;
      };
      p27 = prom<V +>{
        urlspos2 = ld urlspos;
        urlspos3 = force? urlspos2;
        checkMissing(urlspos3);
        return urlspos3;
      };
      p28 = prom<V +>{
        headers = ld headers;
        headers1 = force? headers;
        checkMissing(headers1);
        return headers1;
      };
      r141 = dyn Map(p26, p27, p28);
      return r141;
    };
    r143 = dyn do_call(p25, p29);
    check L260() else D73();
  L313():
    goto L56(r199);
  L315():
    remote6 = force? remote5;
    checkMissing(remote6);
    c66 = `as.logical`(remote6);
    c67 = `&&`(c63, c66);
    goto L57(c67);
  L317():
    urls18 = ld urls;
    check L318() else D97();
  D73():
    deopt 278 [r143];
  D97():
    deopt 373 [urls18];
  D166():
    deopt 695 [bad10];
  L260():
    st results = r143;
    sym15 = ldf `as.numeric`;
    base15 = ldf `as.numeric` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L261() else L262();
  L318():
    urls19 = force? urls18;
    checkMissing(urls19);
    c70 = `is.object`(urls19);
    if c70 then L319() else L320(urls19);
  L500():
    bad11 = force? bad10;
    checkMissing(bad11);
    popenv;
    return bad11;
  L43(r145):
    st status = r145;
    status = ld status;
    check L268() else D76();
  L59(dx48):
    st urlspos = dx48;
    parts6 = ld parts;
    check L323() else D99();
  L261():
    results = ld results;
    check L263() else D74();
  L262():
    r144 = dyn base15(<lang `[`(results, , 1)>);
    goto L43(r144);
  L319():
    dr46 = tryDispatchBuiltin.1("[", urls19);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L321() else L320(dr46);
  L320(urls21):
    pos14 = ld pos;
    check L322() else D98();
  D74():
    deopt 282 [results];
  D76():
    deopt 291 [status];
  D98():
    deopt 375 [urls21, pos14];
  D99():
    deopt 379 [parts6];
  L263():
    results1 = force? results;
    checkMissing(results1);
    c54 = `is.object`(results1);
    if c54 then L264() else L265();
  L268():
    status1 = force? status;
    checkMissing(status1);
    r148 = `<`(status1, 0);
    status2 = ld status;
    check L269() else D77();
  L321():
    dx47 = getTryDispatchBuiltinValue(dr46);
    goto L59(dx47);
  L322():
    pos15 = force? pos14;
    __16 = ldf `[` in base;
    r200 = dyn __16(urls21, pos15);
    goto L59(r200);
  L323():
    parts7 = force? parts6;
    checkMissing(parts7);
    c71 = `is.object`(parts7);
    if c71 then L324() else L325(parts7);
  D77():
    deopt 294 [r148, status2];
  L44(dx32):
    as_numeric = ldf `as.numeric` in base;
    r147 = dyn as_numeric(dx32);
    check L267() else D75();
  L60(dx50):
    st myparts = dx50;
    myparts = ld myparts;
    check L328() else D101();
  L264():
    dr30 = tryDispatchBuiltin.1("[", results1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L266() else L265();
  L265():
    __10 = ldf `[` in base;
    r146 = dyn __10(results1, <missing>, 1);
    goto L44(r146);
  L269():
    status3 = force? status2;
    checkMissing(status3);
    r149 = `>=`(status3, 400);
    r150 = `||`(r148, r149);
    st ind = r150;
    sym16 = ldf any;
    base16 = ldf any in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L270() else L271();
  L324():
    dr48 = tryDispatchBuiltin.1("[", parts7);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L326() else L325(dr48);
  L325(parts9):
    pos16 = ld pos;
    check L327() else D100();
  D75():
    deopt 289 [r147];
  D100():
    deopt 381 [parts9, pos16];
  D101():
    deopt 389 [myparts];
  L45(r152):
    c55 = `as.logical`(r152);
    if c55 then L274() else L46();
  L266():
    dx31 = getTryDispatchBuiltinValue(dr30);
    goto L44(dx31);
  L267():
    goto L43(r147);
  L270():
    ind18 = ld ind;
    check L272() else D78();
  L271():
    r151 = dyn base16(<sym ind>);
    goto L45(r151);
  L326():
    dx49 = getTryDispatchBuiltinValue(dr48);
    goto L60(dx49);
  L327():
    pos17 = force? pos16;
    __17 = ldf `[` in base;
    r201 = dyn __17(parts7, pos17, <missing>, FALSE);
    goto L60(r201);
  L328():
    myparts1 = force? myparts;
    checkMissing(myparts1);
    c72 = `is.object`(myparts1);
    if c72 then L329() else L330();
  D78():
    deopt 302 [ind18];
  L46():
    goto L54(NULL);
  L54(r190):
    goto L55();
  L61(dx52):
    r203 = `==`(dx52, "doi.org");
    myparts4 = ld myparts;
    check L332() else D102();
  L272():
    ind19 = force? ind18;
    checkMissing(ind19);
    any3 = ldf any in base;
    r153 = dyn any3(ind19);
    check L273() else D79();
  L274():
    pos4 = ld pos;
    check L275() else D80();
  L329():
    dr50 = tryDispatchBuiltin.1("[", myparts1);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L331() else L330();
  L330():
    __18 = ldf `[` in base;
    r202 = dyn __18(myparts1, <missing>, 2);
    goto L61(r202);
  D79():
    deopt 305 [r153];
  D80():
    deopt 306 [pos4];
  D102():
    deopt 396 [r203, myparts4];
  L273():
    goto L45(r153);
  L275():
    pos5 = force? pos4;
    checkMissing(pos5);
    c56 = `is.object`(pos5);
    if c56 then L276() else L277(pos5);
  L331():
    dx51 = getTryDispatchBuiltinValue(dr50);
    goto L61(dx51);
  L332():
    myparts5 = force? myparts4;
    checkMissing(myparts5);
    c73 = `is.object`(myparts5);
    if c73 then L333() else L334(r203);
  L47(dx34):
    st pos = dx34;
    sym17 = ldf `as.character`;
    base17 = ldf `as.character` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L280() else L281();
  L62(r207, dx54):
    r209 = `==`(dx54, "dx.doi.org");
    r210 = `||`(r207, r209);
    startsWith = ldf startsWith;
    check L336() else D103();
  L276():
    dr32 = tryDispatchBuiltin.1("[", pos5);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L278() else L277(dr32);
  L277(pos7):
    ind20 = ld ind;
    check L279() else D81();
  L333():
    dr52 = tryDispatchBuiltin.1("[", myparts5);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L335() else L334(r203);
  L334(r205):
    __19 = ldf `[` in base;
    r208 = dyn __19(myparts5, <missing>, 2);
    goto L62(r205, r208);
  D81():
    deopt 308 [pos7, ind20];
  D103():
    deopt 405 [r210];
  L48(r156):
    st s = r156;
    l3 = ld s;
    c58 = `is.object`(l3);
    if c58 then L288() else L289("Error", l3);
  L278():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L47(dx33);
  L279():
    ind21 = force? ind20;
    __11 = ldf `[` in base;
    r154 = dyn __11(pos7, ind21);
    goto L47(r154);
  L280():
    status4 = ld status;
    check L282() else D82();
  L281():
    r155 = dyn base17(<lang `[`(status, ind)>);
    goto L48(r155);
  L335():
    dx53 = getTryDispatchBuiltinValue(dr52);
    goto L62(r203, dx53);
  L336():
    p37 = prom<V +>{
      myparts8 = ld myparts;
      myparts9 = force? myparts8;
      checkMissing(myparts9);
      c74 = `is.object`(myparts9);
      if c74 then L1() else L2();
    L0(dx56):
      return dx56;
    L1():
      dr54 = tryDispatchBuiltin.1("[", myparts9);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2();
    L2():
      __20 = ldf `[` in base;
      r211 = dyn __20(myparts9, <missing>, 3);
      goto L0(r211);
    L3():
      dx55 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx55);
    };
    r213 = dyn startsWith(p37, "/10.");
    check L337() else D104();
  D82():
    deopt 314 [status4];
  D104():
    deopt 408 [r210, r213];
  L50(dx38):
    st s = dx38;
    results4 = ld results;
    check L292() else D86();
  L282():
    status5 = force? status4;
    checkMissing(status5);
    c57 = `is.object`(status5);
    if c57 then L283() else L284(status5);
  L288():
    dr36 = tryDispatchBuiltin.0("[<-", l3, "Error");
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L290() else L289("Error", dr36);
  L289(r160, l5):
    s = ld s;
    check L291() else D85();
  L337():
    r214 = `&&`(r210, r213);
    sym20 = ldf nzchar;
    base20 = ldf nzchar in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L338() else L339();
  D85():
    deopt 325 [r160, l5, "Error", s];
  D86():
    deopt 331 [results4];
  L49(dx36):
    as_character = ldf `as.character` in base;
    r158 = dyn as_character(dx36);
    check L287() else D84();
  L63(r218, r219):
    r226 = `!`(r219);
    r227 = `&&`(r218, r226);
    sym21 = ldf nzchar;
    base21 = ldf nzchar in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L345() else L346();
  L283():
    dr34 = tryDispatchBuiltin.1("[", status5);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L285() else L284(dr34);
  L284(status7):
    ind22 = ld ind;
    check L286() else D83();
  L290():
    dx37 = getTryDispatchBuiltinValue(dr36);
    goto L50(dx37);
  L291():
    s1 = force? s;
    checkMissing(s1);
    r163 = `==`(s1, "-1");
    ___1 = ldf `[<-` in base;
    r164 = dyn ___1(l5, "Error", r163);
    goto L50(r164);
  L292():
    results5 = force? results4;
    checkMissing(results5);
    c59 = `is.object`(results5);
    if c59 then L293() else L294(results5);
  L338():
    myparts12 = ld myparts;
    check L340() else D105();
  L339():
    r217 = dyn base20(<lang `[`(myparts, , 4)>);
    goto L63(r214, r217);
  D83():
    deopt 316 [status7, ind22];
  D84():
    deopt 320 [r158];
  D105():
    deopt 411 [r214, myparts12];
  L51(dx40):
    st m = dx40;
    l6 = ld m;
    c60 = `is.object`(l6);
    if c60 then L297() else L298("", l6);
  L65(r231, r232):
    r239 = `!`(r232);
    r240 = `&&`(r231, r239);
    st ind = r240;
    sym22 = ldf any;
    base22 = ldf any in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L352() else L353();
  L285():
    dx35 = getTryDispatchBuiltinValue(dr34);
    goto L49(dx35);
  L286():
    ind23 = force? ind22;
    __12 = ldf `[` in base;
    r157 = dyn __12(status7, ind23);
    goto L49(r157);
  L287():
    goto L48(r158);
  L293():
    dr38 = tryDispatchBuiltin.1("[", results5);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L295() else L294(dr38);
  L294(results7):
    ind24 = ld ind;
    check L296() else D87();
  L340():
    myparts13 = force? myparts12;
    checkMissing(myparts13);
    c75 = `is.object`(myparts13);
    if c75 then L341() else L342(r214);
  L345():
    myparts16 = ld myparts;
    check L347() else D107();
  L346():
    r230 = dyn base21(<lang `[`(myparts, , 5)>);
    goto L65(r227, r230);
  D87():
    deopt 333 [results7, ind24];
  D107():
    deopt 422 [r227, myparts16];
  L52(dx42):
    st m = dx42;
    rbind4 = ldf rbind;
    check L304() else D90();
  L64(r223, dx58):
    nzchar = ldf nzchar in base;
    r225 = dyn nzchar(dx58);
    check L344() else D106();
  L67(r242):
    c77 = `as.logical`(r242);
    if c77 then L356() else L68();
  L295():
    dx39 = getTryDispatchBuiltinValue(dr38);
    goto L51(dx39);
  L296():
    ind25 = force? ind24;
    __13 = ldf `[` in base;
    r165 = dyn __13(results7, ind25, 2);
    goto L51(r165);
  L297():
    dr40 = tryDispatchBuiltin.0("[<-", l6, "");
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L299() else L298("", dr40);
  L298(r167, l8):
    sym18 = ldf `is.na`;
    base18 = ldf `is.na` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L300() else L301();
  L341():
    dr56 = tryDispatchBuiltin.1("[", myparts13);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L343() else L342(r214);
  L342(r221):
    __21 = ldf `[` in base;
    r224 = dyn __21(myparts13, <missing>, 4);
    goto L64(r221, r224);
  L347():
    myparts17 = force? myparts16;
    checkMissing(myparts17);
    c76 = `is.object`(myparts17);
    if c76 then L348() else L349(r227);
  L352():
    ind26 = ld ind;
    check L354() else D109();
  L353():
    r241 = dyn base22(<sym ind>);
    goto L67(r241);
  D90():
    deopt 350 [];
  D106():
    deopt 418 [r223, r225];
  D109():
    deopt 435 [ind26];
  L53(r175, l11, r176, r177):
    ___2 = ldf `[<-` in base;
    r179 = dyn ___2(l11, r176, r177);
    goto L52(r179);
  L66(r236, dx60):
    nzchar1 = ldf nzchar in base;
    r238 = dyn nzchar1(dx60);
    check L351() else D108();
  L68():
    goto L70();
  L70():
    _fetch_headers1 = ldf `.fetch_headers`;
    check L364() else D114();
  L299():
    dx41 = getTryDispatchBuiltinValue(dr40);
    goto L52(dx41);
  L300():
    m = ld m;
    check L302() else D88();
  L301():
    r174 = dyn base18(<sym m>);
    goto L53(r167, l8, "", r174);
  L304():
    p30 = prom<V +>{
      bad6 = ld bad;
      bad7 = force? bad6;
      checkMissing(bad7);
      return bad7;
    };
    p35 = prom<V +>{
      _gather3 = ldf `.gather`;
      p31 = prom<V +>{
        urls14 = ld urls;
        urls15 = force? urls14;
        checkMissing(urls15);
        c61 = `is.object`(urls15);
        if c61 then L1() else L2(urls15);
      L0(dx44):
        return dx44;
      L1():
        dr42 = tryDispatchBuiltin.1("[", urls15);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L3() else L2(dr42);
      L2(urls17):
        pos8 = ld pos;
        pos9 = force? pos8;
        __14 = ldf `[` in base;
        r181 = dyn __14(urls17, pos9);
        goto L0(r181);
      L3():
        dx43 = getTryDispatchBuiltinValue(dr42);
        goto L0(dx43);
      };
      p32 = prom<V +>{
        parents10 = ld parents;
        parents11 = force? parents10;
        checkMissing(parents11);
        c62 = `is.object`(parents11);
        if c62 then L1() else L2(parents11);
      L0(dx46):
        return dx46;
      L1():
        dr44 = tryDispatchBuiltin.1("[", parents11);
        dc22 = getTryDispatchBuiltinDispatched(dr44);
        if dc22 then L3() else L2(dr44);
      L2(parents13):
        pos10 = ld pos;
        pos11 = force? pos10;
        __15 = ldf `[` in base;
        r183 = dyn __15(parents13, pos11);
        goto L0(r183);
      L3():
        dx45 = getTryDispatchBuiltinValue(dr44);
        goto L0(dx45);
      };
      p33 = prom<V +>{
        s2 = ld s;
        s3 = force? s2;
        checkMissing(s3);
        return s3;
      };
      p34 = prom<V +>{
        m2 = ld m;
        m3 = force? m2;
        checkMissing(m3);
        return m3;
      };
      r187 = dyn _gather3(p31, p32, p33, p34);
      return r187;
    };
    r189 = dyn rbind4(p30, p35);
    check L305() else D91();
  L343():
    dx57 = getTryDispatchBuiltinValue(dr56);
    goto L64(r214, dx57);
  L344():
    goto L63(r223, r225);
  L348():
    dr58 = tryDispatchBuiltin.1("[", myparts17);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L350() else L349(r227);
  L349(r234):
    __22 = ldf `[` in base;
    r237 = dyn __22(myparts17, <missing>, 5);
    goto L66(r234, r237);
  L354():
    ind27 = force? ind26;
    checkMissing(ind27);
    any4 = ldf any in base;
    r243 = dyn any4(ind27);
    check L355() else D110();
  L356():
    paste1 = ldf paste0;
    check L357() else D111();
  D88():
    deopt 343 [r167, l8, "", m];
  D91():
    deopt 353 [r189];
  D108():
    deopt 429 [r236, r238];
  D110():
    deopt 438 [r243];
  D111():
    deopt 440 [];
  D114():
    deopt 452 [];
  L302():
    m1 = force? m;
    checkMissing(m1);
    is_na1 = ldf `is.na` in base;
    r178 = dyn is_na1(m1);
    check L303() else D89();
  L305():
    st bad = r189;
    goto L54(r189);
  L350():
    dx59 = getTryDispatchBuiltinValue(dr58);
    goto L66(r227, dx59);
  L351():
    goto L65(r236, r238);
  L355():
    goto L67(r243);
  L357():
    p38 = prom<V +>{
      myparts20 = ld myparts;
      myparts21 = force? myparts20;
      checkMissing(myparts21);
      c78 = `is.object`(myparts21);
      if c78 then L1() else L2(myparts21);
    L0(dx62):
      return dx62;
    L1():
      dr60 = tryDispatchBuiltin.1("[", myparts21);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(myparts23):
      ind28 = ld ind;
      ind29 = force? ind28;
      __23 = ldf `[` in base;
      r244 = dyn __23(myparts23, ind29, 3);
      goto L0(r244);
    L3():
      dx61 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx61);
    };
    r246 = dyn paste1("https://doi.org/api/handles", p38);
    check L358() else D112();
  L364():
    p39 = prom<V +>{
      urlspos4 = ld urlspos;
      urlspos5 = force? urlspos4;
      checkMissing(urlspos5);
      return urlspos5;
    };
    r254 = dyn _fetch_headers1(p39);
    check L365() else D115();
  D89():
    deopt 346 [r167, l8, "", r178];
  D112():
    deopt 443 [r246];
  D115():
    deopt 454 [r254];
  L303():
    goto L53(r167, l8, "", r178);
  L358():
    l12 = ld urlspos;
    c79 = `is.object`(l12);
    if c79 then L359() else L360(r246, l12);
  L365():
    st headers = r254;
    parallel7 = ld parallel;
    check L366() else D116();
  D116():
    deopt 456 [parallel7];
  L69(r250, dx64):
    st urlspos = dx64;
    goto L70();
  L359():
    dr62 = tryDispatchBuiltin.0("[<-", l12, r246);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L361() else L360(r246, dr62);
  L360(r248, l14):
    ind30 = ld ind;
    check L362() else D113();
  L366():
    parallel8 = force? parallel7;
    checkMissing(parallel8);
    c80 = `as.logical`(parallel8);
    if c80 then L367() else L71(c80);
  D113():
    deopt 445 [r248, l14, r246, ind30];
  L71(c82):
    c89 = `as.logical`(c82);
    if c89 then L374() else L73();
  L361():
    dx63 = getTryDispatchBuiltinValue(dr62);
    goto L69(r246, dx63);
  L362():
    ind31 = force? ind30;
    ___3 = ldf `[<-` in base;
    r251 = dyn ___3(l14, r246, ind31);
    goto L69(r248, r251);
  L367():
    sym23 = ldf any;
    base23 = ldf any in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L368() else L369();
  L72(c85, r256):
    c86 = `as.logical`(r256);
    c87 = `&&`(c85, c86);
    goto L71(c87);
  L73():
    goto L75();
  L75():
    do_call1 = ldf `do.call`;
    check L382() else D123();
  L368():
    vapply = ldf vapply;
    check L370() else D117();
  L369():
    r255 = dyn base23(<lang `<-`(ind, `!=`(vapply(headers, function((e=), {
              if(inherits(e, "error"), `-`(1), attr(e, "status"))
            }, NULL), 0), 200.0))>);
    goto L72(c80, r255);
  L374():
    _fetch_headers_via_curl = ldf `.fetch_headers_via_curl`;
    check L375() else D120();
  D117():
    deopt 461 [c80];
  D120():
    deopt 473 [];
  D123():
    deopt 487 [];
  L370():
    p40 = prom<V +>{
      headers2 = ld headers;
      headers3 = force? headers2;
      checkMissing(headers3);
      return headers3;
    };
    p41 = prom<V +>{
      r258 = clos inner3708401697;
      return r258;
    };
    r260 = dyn vapply(p40, p41, 0);
    check L371() else D118();
  L375():
    p42 = prom<V +>{
      urlspos6 = ld urlspos;
      urlspos7 = force? urlspos6;
      checkMissing(urlspos7);
      c90 = `is.object`(urlspos7);
      if c90 then L1() else L2(urlspos7);
    L0(dx66):
      return dx66;
    L1():
      dr64 = tryDispatchBuiltin.1("[", urlspos7);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(urlspos9):
      ind32 = ld ind;
      ind33 = force? ind32;
      __24 = ldf `[` in base;
      r263 = dyn __24(urlspos9, ind33);
      goto L0(r263);
    L3():
      dx65 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx65);
    };
    p43 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    p44 = prom<V +>{
      pool3 = ld pool;
      pool4 = force? pool3;
      checkMissing(pool4);
      return pool4;
    };
    r267 = dyn _fetch_headers_via_curl(p42, p43, p44, FALSE);
    check L376() else D121();
  L382():
    p45 = prom<V +>{
      rbind5 = ld rbind;
      rbind6 = force? rbind5;
      checkMissing(rbind6);
      return rbind6;
    };
    p49 = prom<V +>{
      Map1 = ldf Map;
      p46 = prom<V +>{
        _check_http = ld `.check_http`;
        _check_http1 = force? _check_http;
        checkMissing(_check_http1);
        return _check_http1;
      };
      p47 = prom<V +>{
        urlspos10 = ld urlspos;
        urlspos11 = force? urlspos10;
        checkMissing(urlspos11);
        return urlspos11;
      };
      p48 = prom<V +>{
        headers4 = ld headers;
        headers5 = force? headers4;
        checkMissing(headers5);
        return headers5;
      };
      r278 = dyn Map1(p46, p47, p48);
      return r278;
    };
    r280 = dyn do_call1(p45, p49);
    check L383() else D124();
  D118():
    deopt 465 [c80, r260];
  D121():
    deopt 478 [r267];
  D124():
    deopt 490 [r280];
  L371():
    r261 = `!=`(r260, 200.0);
    st ind = r261;
    any5 = ldf any in base;
    r262 = dyn any5(r261);
    check L372() else D119();
  L376():
    l15 = ld headers;
    c91 = `is.object`(l15);
    if c91 then L377() else L378(r267, l15);
  L383():
    st results = r280;
    sym24 = ldf `as.numeric`;
    base24 = ldf `as.numeric` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L384() else L385();
  D119():
    deopt 470 [c80, r262];
  L74(r271, dx68):
    st headers = dx68;
    goto L75();
  L76(r282):
    st status = r282;
    sym25 = ldf `is.na`;
    base25 = ldf `is.na` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L391() else L392();
  L372():
    goto L72(c80, r262);
  L377():
    dr66 = tryDispatchBuiltin.0("[<-", l15, r267);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L379() else L378(r267, dr66);
  L378(r269, l17):
    ind34 = ld ind;
    check L380() else D122();
  L384():
    results8 = ld results;
    check L386() else D125();
  L385():
    r281 = dyn base24(<lang `[`(results, , 1)>);
    goto L76(r281);
  D122():
    deopt 480 [r269, l17, r267, ind34];
  D125():
    deopt 494 [results8];
  L78(r286):
    sym28 = ldf nzchar;
    base28 = ldf nzchar in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L401() else L402();
  L379():
    dx67 = getTryDispatchBuiltinValue(dr66);
    goto L74(r267, dx67);
  L380():
    ind35 = force? ind34;
    ___4 = ldf `[<-` in base;
    r272 = dyn ___4(l17, r267, ind35);
    goto L74(r269, r272);
  L386():
    results9 = force? results8;
    checkMissing(results9);
    c92 = `is.object`(results9);
    if c92 then L387() else L388();
  L391():
    sym26 = ldf match;
    base26 = ldf match in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L393() else L394();
  L392():
    r285 = dyn base25(<lang match(status, c(200, 405, NA_LGL))>);
    goto L78(r285);
  L77(dx70):
    as_numeric1 = ldf `as.numeric` in base;
    r284 = dyn as_numeric1(dx70);
    check L390() else D126();
  L79(r288):
    is_na2 = ldf `is.na` in base;
    r293 = dyn is_na2(r288);
    check L400() else D130();
  L81(r297, r298):
    r305 = `||`(r297, r298);
    sym29 = ldf nzchar;
    base29 = ldf nzchar in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L408() else L409();
  L387():
    dr68 = tryDispatchBuiltin.1("[", results9);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L389() else L388();
  L388():
    __25 = ldf `[` in base;
    r283 = dyn __25(results9, <missing>, 1);
    goto L77(r283);
  L393():
    status8 = ld status;
    check L395() else D127();
  L394():
    r287 = dyn base26(<sym status>, <lang c(200, 405, NA_LGL)>);
    goto L79(r287);
  L401():
    results12 = ld results;
    check L403() else D131();
  L402():
    r296 = dyn base28(<lang `[`(results, , 3)>);
    goto L81(r286, r296);
  D126():
    deopt 501 [r284];
  D127():
    deopt 507 [status8];
  D130():
    deopt 521 [r293];
  D131():
    deopt 523 [r286, results12];
  L83(r309, r310):
    r317 = `||`(r309, r310);
    sym30 = ldf nzchar;
    base30 = ldf nzchar in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L415() else L416();
  L389():
    dx69 = getTryDispatchBuiltinValue(dr68);
    goto L77(dx69);
  L390():
    goto L76(r284);
  L395():
    status9 = force? status8;
    checkMissing(status9);
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L396() else L397();
  L400():
    goto L78(r293);
  L403():
    results13 = force? results12;
    checkMissing(results13);
    c94 = `is.object`(results13);
    if c94 then L404() else L405(r286);
  L408():
    results16 = ld results;
    check L410() else D133();
  L409():
    r308 = dyn base29(<lang `[`(results, , 4)>);
    goto L83(r305, r308);
  D133():
    deopt 533 [r305, results16];
  L80(r290):
    match1 = ldf match in base;
    r292 = dyn match1(status9, r290, NA_INT, NULL);
    check L399() else D129();
  L82(r302, dx72):
    nzchar2 = ldf nzchar in base;
    r304 = dyn nzchar2(dx72);
    check L407() else D132();
  L85(r321, r322):
    r329 = `||`(r321, r322);
    sym31 = ldf nzchar;
    base31 = ldf nzchar in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L422() else L423();
  L396():
    c93 = ldf c in base;
    r291 = dyn c93(200, 405, NA_LGL);
    check L398() else D128();
  L397():
    r289 = dyn base27(200, 405, NA_LGL);
    goto L80(r289);
  L404():
    dr70 = tryDispatchBuiltin.1("[", results13);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L406() else L405(r286);
  L405(r300):
    __26 = ldf `[` in base;
    r303 = dyn __26(results13, <missing>, 3);
    goto L82(r300, r303);
  L410():
    results17 = force? results16;
    checkMissing(results17);
    c95 = `is.object`(results17);
    if c95 then L411() else L412(r305);
  L415():
    results20 = ld results;
    check L417() else D135();
  L416():
    r320 = dyn base30(<lang `[`(results, , 5)>);
    goto L85(r317, r320);
  D128():
    deopt 515 [r291];
  D129():
    deopt 519 [r292];
  D132():
    deopt 530 [r302, r304];
  D135():
    deopt 543 [r317, results20];
  L84(r314, dx74):
    nzchar3 = ldf nzchar in base;
    r316 = dyn nzchar3(dx74);
    check L414() else D134();
  L87(r333, r334):
    r341 = `||`(r333, r334);
    st ind = r341;
    sym32 = ldf any;
    base32 = ldf any in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L429() else L430();
  L398():
    goto L80(r291);
  L399():
    goto L79(r292);
  L406():
    dx71 = getTryDispatchBuiltinValue(dr70);
    goto L82(r286, dx71);
  L407():
    goto L81(r302, r304);
  L411():
    dr72 = tryDispatchBuiltin.1("[", results17);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L413() else L412(r305);
  L412(r312):
    __27 = ldf `[` in base;
    r315 = dyn __27(results17, <missing>, 4);
    goto L84(r312, r315);
  L417():
    results21 = force? results20;
    checkMissing(results21);
    c96 = `is.object`(results21);
    if c96 then L418() else L419(r317);
  L422():
    results24 = ld results;
    check L424() else D137();
  L423():
    r332 = dyn base31(<lang `[`(results, , 6)>);
    goto L87(r329, r332);
  D134():
    deopt 540 [r314, r316];
  D137():
    deopt 553 [r329, results24];
  L86(r326, dx76):
    nzchar4 = ldf nzchar in base;
    r328 = dyn nzchar4(dx76);
    check L421() else D136();
  L89(r343):
    c98 = `as.logical`(r343);
    if c98 then L433() else L90();
  L413():
    dx73 = getTryDispatchBuiltinValue(dr72);
    goto L84(r305, dx73);
  L414():
    goto L83(r314, r316);
  L418():
    dr74 = tryDispatchBuiltin.1("[", results21);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L420() else L419(r317);
  L419(r324):
    __28 = ldf `[` in base;
    r327 = dyn __28(results21, <missing>, 5);
    goto L86(r324, r327);
  L424():
    results25 = force? results24;
    checkMissing(results25);
    c97 = `is.object`(results25);
    if c97 then L425() else L426(r329);
  L429():
    ind36 = ld ind;
    check L431() else D139();
  L430():
    r342 = dyn base32(<sym ind>);
    goto L89(r342);
  D136():
    deopt 550 [r326, r328];
  D139():
    deopt 565 [ind36];
  L88(r338, dx78):
    nzchar5 = ldf nzchar in base;
    r340 = dyn nzchar5(dx78);
    check L428() else D138();
  L90():
    goto L103(NULL);
  L103(r442):
    goto L104();
  L420():
    dx75 = getTryDispatchBuiltinValue(dr74);
    goto L86(r317, dx75);
  L421():
    goto L85(r326, r328);
  L425():
    dr76 = tryDispatchBuiltin.1("[", results25);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L427() else L426(r329);
  L426(r336):
    __29 = ldf `[` in base;
    r339 = dyn __29(results25, <missing>, 6);
    goto L88(r336, r339);
  L431():
    ind37 = force? ind36;
    checkMissing(ind37);
    any6 = ldf any in base;
    r344 = dyn any6(ind37);
    check L432() else D140();
  L433():
    pos18 = ld pos;
    check L434() else D141();
  D138():
    deopt 560 [r338, r340];
  D140():
    deopt 568 [r344];
  D141():
    deopt 569 [pos18];
  L427():
    dx77 = getTryDispatchBuiltinValue(dr76);
    goto L88(r329, dx77);
  L428():
    goto L87(r338, r340);
  L432():
    goto L89(r344);
  L434():
    pos19 = force? pos18;
    checkMissing(pos19);
    c99 = `is.object`(pos19);
    if c99 then L435() else L436(pos19);
  L91(dx80):
    st pos = dx80;
    sym33 = ldf `as.character`;
    base33 = ldf `as.character` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L439() else L440();
  L435():
    dr78 = tryDispatchBuiltin.1("[", pos19);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L437() else L436(dr78);
  L436(pos21):
    ind38 = ld ind;
    check L438() else D142();
  D142():
    deopt 571 [pos21, ind38];
  L92(r347):
    st s = r347;
    l18 = ld s;
    c101 = `is.object`(l18);
    if c101 then L447() else L448("", l18);
  L437():
    dx79 = getTryDispatchBuiltinValue(dr78);
    goto L91(dx79);
  L438():
    ind39 = force? ind38;
    __30 = ldf `[` in base;
    r345 = dyn __30(pos21, ind39);
    goto L91(r345);
  L439():
    status10 = ld status;
    check L441() else D143();
  L440():
    r346 = dyn base33(<lang `[`(status, ind)>);
    goto L92(r346);
  D143():
    deopt 577 [status10];
  L94(dx84):
    st s = dx84;
    l24 = ld s;
    c102 = `is.object`(l24);
    if c102 then L454() else L455("Error", l24);
  L441():
    status11 = force? status10;
    checkMissing(status11);
    c100 = `is.object`(status11);
    if c100 then L442() else L443(status11);
  L447():
    dr82 = tryDispatchBuiltin.0("[<-", l18, "");
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L449() else L448("", dr82);
  L448(r351, l20):
    sym34 = ldf `is.na`;
    base34 = ldf `is.na` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L450() else L451();
  L93(dx82):
    as_character1 = ldf `as.character` in base;
    r349 = dyn as_character1(dx82);
    check L446() else D145();
  L95(r359, l23, r360, r361):
    ___5 = ldf `[<-` in base;
    r363 = dyn ___5(l23, r360, r361);
    goto L94(r363);
  L96(dx86):
    st s = dx86;
    results28 = ld results;
    check L458() else D149();
  L442():
    dr80 = tryDispatchBuiltin.1("[", status11);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L444() else L443(dr80);
  L443(status13):
    ind40 = ld ind;
    check L445() else D144();
  L449():
    dx83 = getTryDispatchBuiltinValue(dr82);
    goto L94(dx83);
  L450():
    s4 = ld s;
    check L452() else D146();
  L451():
    r358 = dyn base34(<sym s>);
    goto L95(r351, l20, "", r358);
  L454():
    dr84 = tryDispatchBuiltin.0("[<-", l24, "Error");
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L456() else L455("Error", dr84);
  L455(r365, l26):
    s6 = ld s;
    check L457() else D148();
  D144():
    deopt 579 [status13, ind40];
  D145():
    deopt 583 [r349];
  D146():
    deopt 590 [r351, l20, "", s4];
  D148():
    deopt 599 [r365, l26, "Error", s6];
  D149():
    deopt 605 [results28];
  L444():
    dx81 = getTryDispatchBuiltinValue(dr80);
    goto L93(dx81);
  L445():
    ind41 = force? ind40;
    __31 = ldf `[` in base;
    r348 = dyn __31(status13, ind41);
    goto L93(r348);
  L446():
    goto L92(r349);
  L452():
    s5 = force? s4;
    checkMissing(s5);
    is_na3 = ldf `is.na` in base;
    r362 = dyn is_na3(s5);
    check L453() else D147();
  L456():
    dx85 = getTryDispatchBuiltinValue(dr84);
    goto L96(dx85);
  L457():
    s7 = force? s6;
    checkMissing(s7);
    r368 = `==`(s7, "-1");
    ___6 = ldf `[<-` in base;
    r369 = dyn ___6(l26, "Error", r368);
    goto L96(r369);
  L458():
    results29 = force? results28;
    checkMissing(results29);
    c103 = `is.object`(results29);
    if c103 then L459() else L460(results29);
  D147():
    deopt 593 [r351, l20, "", r362];
  L97(dx88):
    st m = dx88;
    l27 = ld m;
    c104 = `is.object`(l27);
    if c104 then L463() else L464("", l27);
  L453():
    goto L95(r351, l20, "", r362);
  L459():
    dr86 = tryDispatchBuiltin.1("[", results29);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L461() else L460(dr86);
  L460(results31):
    ind42 = ld ind;
    check L462() else D150();
  D150():
    deopt 607 [results31, ind42];
  L98(dx90):
    st m = dx90;
    _gather4 = ldf `.gather`;
    check L470() else D153();
  L461():
    dx87 = getTryDispatchBuiltinValue(dr86);
    goto L97(dx87);
  L462():
    ind43 = force? ind42;
    __32 = ldf `[` in base;
    r370 = dyn __32(results31, ind43, 2);
    goto L97(r370);
  L463():
    dr88 = tryDispatchBuiltin.0("[<-", l27, "");
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L465() else L464("", dr88);
  L464(r372, l29):
    sym35 = ldf `is.na`;
    base35 = ldf `is.na` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L466() else L467();
  D153():
    deopt 624 [];
  L99(r380, l32, r381, r382):
    ___7 = ldf `[<-` in base;
    r384 = dyn ___7(l32, r381, r382);
    goto L98(r384);
  L465():
    dx89 = getTryDispatchBuiltinValue(dr88);
    goto L98(dx89);
  L466():
    m4 = ld m;
    check L468() else D151();
  L467():
    r379 = dyn base35(<sym m>);
    goto L99(r372, l29, "", r379);
  L470():
    p50 = prom<V +>{
      urls22 = ld urls;
      urls23 = force? urls22;
      checkMissing(urls23);
      c105 = `is.object`(urls23);
      if c105 then L1() else L2(urls23);
    L0(dx92):
      return dx92;
    L1():
      dr90 = tryDispatchBuiltin.1("[", urls23);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L3() else L2(dr90);
    L2(urls25):
      pos22 = ld pos;
      pos23 = force? pos22;
      __33 = ldf `[` in base;
      r385 = dyn __33(urls25, pos23);
      goto L0(r385);
    L3():
      dx91 = getTryDispatchBuiltinValue(dr90);
      goto L0(dx91);
    };
    p51 = prom<V +>{
      parents14 = ld parents;
      parents15 = force? parents14;
      checkMissing(parents15);
      c106 = `is.object`(parents15);
      if c106 then L1() else L2(parents15);
    L0(dx94):
      return dx94;
    L1():
      dr92 = tryDispatchBuiltin.1("[", parents15);
      dc46 = getTryDispatchBuiltinDispatched(dr92);
      if dc46 then L3() else L2(dr92);
    L2(parents17):
      pos24 = ld pos;
      pos25 = force? pos24;
      __34 = ldf `[` in base;
      r387 = dyn __34(parents17, pos25);
      goto L0(r387);
    L3():
      dx93 = getTryDispatchBuiltinValue(dr92);
      goto L0(dx93);
    };
    p52 = prom<V +>{
      s8 = ld s;
      s9 = force? s8;
      checkMissing(s9);
      return s9;
    };
    p53 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    p54 = prom<V +>{
      results32 = ld results;
      results33 = force? results32;
      checkMissing(results33);
      c107 = `is.object`(results33);
      if c107 then L1() else L2(results33);
    L0(dx96):
      return dx96;
    L1():
      dr94 = tryDispatchBuiltin.1("[", results33);
      dc47 = getTryDispatchBuiltinDispatched(dr94);
      if dc47 then L3() else L2(dr94);
    L2(results35):
      ind44 = ld ind;
      ind45 = force? ind44;
      __35 = ldf `[` in base;
      r391 = dyn __35(results35, ind45, 3);
      goto L0(r391);
    L3():
      dx95 = getTryDispatchBuiltinValue(dr94);
      goto L0(dx95);
    };
    p55 = prom<V +>{
      results36 = ld results;
      results37 = force? results36;
      checkMissing(results37);
      c108 = `is.object`(results37);
      if c108 then L1() else L2(results37);
    L0(dx98):
      return dx98;
    L1():
      dr96 = tryDispatchBuiltin.1("[", results37);
      dc48 = getTryDispatchBuiltinDispatched(dr96);
      if dc48 then L3() else L2(dr96);
    L2(results39):
      ind46 = ld ind;
      ind47 = force? ind46;
      __36 = ldf `[` in base;
      r393 = dyn __36(results39, ind47, 4);
      goto L0(r393);
    L3():
      dx97 = getTryDispatchBuiltinValue(dr96);
      goto L0(dx97);
    };
    p56 = prom<V +>{
      results40 = ld results;
      results41 = force? results40;
      checkMissing(results41);
      c109 = `is.object`(results41);
      if c109 then L1() else L2(results41);
    L0(dx100):
      return dx100;
    L1():
      dr98 = tryDispatchBuiltin.1("[", results41);
      dc49 = getTryDispatchBuiltinDispatched(dr98);
      if dc49 then L3() else L2(dr98);
    L2(results43):
      ind48 = ld ind;
      ind49 = force? ind48;
      __37 = ldf `[` in base;
      r395 = dyn __37(results43, ind49, 5);
      goto L0(r395);
    L3():
      dx99 = getTryDispatchBuiltinValue(dr98);
      goto L0(dx99);
    };
    p57 = prom<V +>{
      results44 = ld results;
      results45 = force? results44;
      checkMissing(results45);
      c110 = `is.object`(results45);
      if c110 then L1() else L2(results45);
    L0(dx102):
      return dx102;
    L1():
      dr100 = tryDispatchBuiltin.1("[", results45);
      dc50 = getTryDispatchBuiltinDispatched(dr100);
      if dc50 then L3() else L2(dr100);
    L2(results47):
      ind50 = ld ind;
      ind51 = force? ind50;
      __38 = ldf `[` in base;
      r397 = dyn __38(results47, ind51, 6);
      goto L0(r397);
    L3():
      dx101 = getTryDispatchBuiltinValue(dr100);
      goto L0(dx101);
    };
    r399 = dyn _gather4(p50, p51, p52, p53, p54, p55, p56, p57);
    check L471() else D154();
  D151():
    deopt 617 [r372, l29, "", m4];
  D154():
    deopt 633 [r399];
  L468():
    m5 = force? m4;
    checkMissing(m5);
    is_na4 = ldf `is.na` in base;
    r383 = dyn is_na4(m5);
    check L469() else D152();
  L471():
    st bad_https = r399;
    sym36 = ldf c;
    base36 = ldf c in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L472() else L473();
  D152():
    deopt 620 [r372, l29, "", r383];
  L100(r401):
    st false_pos_db_403 = r401;
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L475() else L476();
  L469():
    goto L99(r372, l29, "", r383);
  L472():
    c111 = ldf c in base;
    r402 = dyn c111("^https?://twitter.com/", "^https?://www.jstor.org/", "^https?://.+\\.wiley.com/", "^https?://www.science.org/", "^https?://www.researchgate.net/", "^https?://www.tandfonline.com/", "^https?://pubs.acs.org/", "^https?://journals.aom.org/", "^https?://journals.sagepub.com/", "^https?://www.pnas.org/");
    check L474() else D155();
  L473():
    r400 = dyn base36("^https?://twitter.com/", "^https?://www.jstor.org/", "^https?://.+\\.wiley.com/", "^https?://www.science.org/", "^https?://www.researchgate.net/", "^https?://www.tandfonline.com/", "^https?://pubs.acs.org/", "^https?://journals.aom.org/", "^https?://journals.sagepub.com/", "^https?://www.pnas.org/");
    goto L100(r400);
  D155():
    deopt 648 [r402];
  L101(r404):
    st false_pos_db_404 = r404;
    bad_https = ld bad_https;
    check L478() else D157();
  L474():
    goto L100(r402);
  L475():
    c112 = ldf c in base;
    r405 = dyn c112("^https?://finance.yahoo.com/");
    check L477() else D156();
  L476():
    r403 = dyn base37("^https?://finance.yahoo.com/");
    goto L101(r403);
  D156():
    deopt 654 [r405];
  D157():
    deopt 656 [bad_https];
  L477():
    goto L101(r405);
  L478():
    bad_https1 = force? bad_https;
    checkMissing(bad_https1);
    c113 = `is.object`(bad_https1);
    if c113 then L479() else L480(bad_https1);
  L102(dx104):
    st bad_https = dx104;
    rbind7 = ldf rbind;
    check L496() else D164();
  L479():
    dr102 = tryDispatchBuiltin.1("[", bad_https1);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L481() else L480(dr102);
  L480(bad_https3):
    grepl = ldf grepl;
    check L482() else D158();
  D158():
    deopt 659 [bad_https3];
  D164():
    deopt 686 [];
  L481():
    dx103 = getTryDispatchBuiltinValue(dr102);
    goto L102(dx103);
  L482():
    p59 = prom<V +>{
      paste2 = ldf paste;
      p58 = prom<V +>{
        false_pos_db_403 = ld false_pos_db_403;
        false_pos_db_404 = force? false_pos_db_403;
        checkMissing(false_pos_db_404);
        return false_pos_db_404;
      };
      r407 = dyn paste2[, collapse](p58, "|");
      return r407;
    };
    p60 = prom<V +>{
      bad_https4 = ld bad_https;
      bad_https5 = force? bad_https4;
      checkMissing(bad_https5);
      c114 = `is.object`(bad_https5);
      if c114 then L1() else L2(bad_https5);
    L0(dx106):
      return dx106;
    L1():
      dr104 = tryDispatchBuiltin.1("$", bad_https5);
      dc52 = getTryDispatchBuiltinDispatched(dr104);
      if dc52 then L3() else L2(dr104);
    L2(bad_https7):
      r409 = `$`(bad_https7, <sym URL>);
      goto L0(r409);
    L3():
      dx105 = getTryDispatchBuiltinValue(dr104);
      goto L0(dx105);
    };
    r411 = dyn grepl(p59, p60);
    check L483() else D159();
  L496():
    p64 = prom<V +>{
      bad8 = ld bad;
      bad9 = force? bad8;
      checkMissing(bad9);
      return bad9;
    };
    p65 = prom<V +>{
      bad_https28 = ld bad_https;
      bad_https29 = force? bad_https28;
      checkMissing(bad_https29);
      return bad_https29;
    };
    r441 = dyn rbind7(p64, p65);
    check L497() else D165();
  D159():
    deopt 662 [bad_https3, r411];
  D165():
    deopt 689 [r441];
  L483():
    bad_https8 = ld bad_https;
    check L484() else D160();
  L497():
    st bad = r441;
    goto L103(r441);
  D160():
    deopt 662 [bad_https3, r411, bad_https8];
  L484():
    bad_https9 = force? bad_https8;
    checkMissing(bad_https9);
    c115 = `is.object`(bad_https9);
    if c115 then L486() else L487(bad_https3, r411, bad_https9);
  L485(bad_https15, r415, dx108):
    r417 = `==`(dx108, "403");
    r418 = `&&`(r415, r417);
    grepl1 = ldf grepl;
    check L489() else D161();
  L486():
    dr106 = tryDispatchBuiltin.1("$", bad_https9);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L488() else L487(bad_https3, r411, dr106);
  L487(bad_https12, r413, bad_https13):
    r416 = `$`(bad_https13, <sym Status>);
    goto L485(bad_https12, r413, r416);
  D161():
    deopt 668 [bad_https15, r418];
  L488():
    dx107 = getTryDispatchBuiltinValue(dr106);
    goto L485(bad_https3, r411, dx107);
  L489():
    p62 = prom<V +>{
      paste3 = ldf paste;
      p61 = prom<V +>{
        false_pos_db_405 = ld false_pos_db_404;
        false_pos_db_406 = force? false_pos_db_405;
        checkMissing(false_pos_db_406);
        return false_pos_db_406;
      };
      r420 = dyn paste3[, collapse](p61, "|");
      return r420;
    };
    p63 = prom<V +>{
      bad_https16 = ld bad_https;
      bad_https17 = force? bad_https16;
      checkMissing(bad_https17);
      c116 = `is.object`(bad_https17);
      if c116 then L1() else L2(bad_https17);
    L0(dx110):
      return dx110;
    L1():
      dr108 = tryDispatchBuiltin.1("$", bad_https17);
      dc54 = getTryDispatchBuiltinDispatched(dr108);
      if dc54 then L3() else L2(dr108);
    L2(bad_https19):
      r422 = `$`(bad_https19, <sym URL>);
      goto L0(r422);
    L3():
      dx109 = getTryDispatchBuiltinValue(dr108);
      goto L0(dx109);
    };
    r424 = dyn grepl1(p62, p63);
    check L490() else D162();
  D162():
    deopt 671 [bad_https15, r418, r424];
  L490():
    bad_https20 = ld bad_https;
    check L491() else D163();
  D163():
    deopt 671 [bad_https15, r418, r424, bad_https20];
  L491():
    bad_https21 = force? bad_https20;
    checkMissing(bad_https21);
    c117 = `is.object`(bad_https21);
    if c117 then L493() else L494(bad_https15, r418, r424, bad_https21);
  L492(r431, r432, dx112):
    r434 = `==`(dx112, "404");
    r435 = `&&`(r432, r434);
    r436 = `||`(r431, r435);
    r437 = `!`(r436);
    __39 = ldf `[` in base;
    r438 = dyn __39(bad_https1, r437, <missing>, FALSE);
    goto L102(r438);
  L493():
    dr110 = tryDispatchBuiltin.1("$", bad_https21);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L495() else L494(bad_https15, r418, r424, dr110);
  L494(bad_https24, r427, r428, bad_https25):
    r433 = `$`(bad_https25, <sym Status>);
    goto L492(r427, r428, r433);
  L495():
    dx111 = getTryDispatchBuiltinValue(dr110);
    goto L492(r418, r424, dx111);
  }
}
fun inner3112657695(u, p, s, m, new, cran, spaces, R) {
  (reg u:*, reg p:*, reg s:*, reg m:*, reg new:*, reg cran:*, reg spaces:*, reg R:*) -+> V { var u:*, reg u_isMissing:L, reg u_orDefault:*, reg character:cls, reg r:V, reg p1:p(V +), var p:*, reg p_isMissing:L, reg p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg p2:p(V +), var s:*, reg s_isMissing:L, reg s_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg u1:*, reg u2:V, reg length:cls, reg r10:V, reg rep_int:cls, reg r11:V, reg p3:p(V +), var m:*, reg m_isMissing:L, reg m_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg u3:*, reg u4:V, reg length1:cls, reg r17:V, reg rep_int1:cls, reg r18:V, reg p4:p(V +), var new:*, reg new_isMissing:L, reg new_orDefault:*, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg u5:*, reg u6:V, reg length2:cls, reg r24:V, reg rep_int2:cls, reg r25:V, reg p5:p(V +), var cran:*, reg cran_isMissing:L, reg cran_orDefault:*, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r29:V, reg r30:V, reg u7:*, reg u8:V, reg length3:cls, reg r31:V, reg rep_int3:cls, reg r32:V, reg p6:p(V +), var spaces:*, reg spaces_isMissing:L, reg spaces_orDefault:*, reg sym9:cls, reg base9:cls, reg guard9:L, reg r34:V, reg r35:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r36:V, reg r37:V, reg u9:*, reg u10:V, reg length4:cls, reg r38:V, reg rep_int4:cls, reg r39:V, reg p7:p(V +), var R:*, reg R_isMissing:L, reg R_orDefault:*, reg sym11:cls, reg base11:cls, reg guard11:L, reg r41:V, reg r42:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r43:V, reg r44:V, reg u11:*, reg u12:V, reg length5:cls, reg r45:V, reg rep_int5:cls, reg r46:V, reg p8:p(V +), reg list2DF:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r48:V, reg r49:V, reg u13:*, reg u14:V, reg p9:*, reg p10:V, reg s1:*, reg s2:V, reg m1:*, reg m2:V, reg new1:*, reg new2:V, reg cran1:*, reg cran2:V, reg spaces1:*, reg spaces2:V, reg R1:*, reg R2:V, reg list1:cls, reg r50:V, reg p11:p(V +), reg r52:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r53:V, reg r54:V, reg c:cls, reg r55:V, reg l:*, reg class__:cls, reg r56:V, reg y:*, reg y1:V |
    mkenv;
    u_isMissing = missing.0(u);
    if u_isMissing then L0() else L1(u);
  L0():
    p1 = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p1);
  L1(u_orDefault):
    st u = u_orDefault;
    p_isMissing = missing.0(p);
    if p_isMissing then L2() else L3(p);
  L2():
    p2 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      list = ldf list in base;
      r4 = dyn list();
      goto L0(r4);
    L2():
      r2 = dyn base();
      goto L0(r2);
    };
    goto L3(p2);
  L3(p_orDefault):
    st p = p_orDefault;
    s_isMissing = missing.0(s);
    if s_isMissing then L4() else L5(s);
  L4():
    p3 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r7):
      return r7;
    L2():
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r6 = dyn base1("", <lang length(u)>);
      goto L0(r6);
    L1(r9):
      rep_int = ldf `rep.int` in base;
      r11 = dyn rep_int("", r9);
      goto L0(r11);
    L4():
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      length = ldf length in base;
      r10 = dyn length(u2);
      goto L1(r10);
    L5():
      r8 = dyn base2(<sym u>);
      goto L1(r8);
    };
    goto L5(p3);
  L5(s_orDefault):
    st s = s_orDefault;
    m_isMissing = missing.0(m);
    if m_isMissing then L6() else L7(m);
  L6():
    p4 = prom<V +>{
      sym3 = ldf `rep.int`;
      base3 = ldf `rep.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r14):
      return r14;
    L2():
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r13 = dyn base3("", <lang length(u)>);
      goto L0(r13);
    L1(r16):
      rep_int1 = ldf `rep.int` in base;
      r18 = dyn rep_int1("", r16);
      goto L0(r18);
    L4():
      u3 = ld u;
      u4 = force? u3;
      checkMissing(u4);
      length1 = ldf length in base;
      r17 = dyn length1(u4);
      goto L1(r17);
    L5():
      r15 = dyn base4(<sym u>);
      goto L1(r15);
    };
    goto L7(p4);
  L7(m_orDefault):
    st m = m_orDefault;
    new_isMissing = missing.0(new);
    if new_isMissing then L8() else L9(new);
  L8():
    p5 = prom<V +>{
      sym5 = ldf `rep.int`;
      base5 = ldf `rep.int` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r21):
      return r21;
    L2():
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r20 = dyn base5("", <lang length(u)>);
      goto L0(r20);
    L1(r23):
      rep_int2 = ldf `rep.int` in base;
      r25 = dyn rep_int2("", r23);
      goto L0(r25);
    L4():
      u5 = ld u;
      u6 = force? u5;
      checkMissing(u6);
      length2 = ldf length in base;
      r24 = dyn length2(u6);
      goto L1(r24);
    L5():
      r22 = dyn base6(<sym u>);
      goto L1(r22);
    };
    goto L9(p5);
  L9(new_orDefault):
    st new = new_orDefault;
    cran_isMissing = missing.0(cran);
    if cran_isMissing then L10() else L11(cran);
  L10():
    p6 = prom<V +>{
      sym7 = ldf `rep.int`;
      base7 = ldf `rep.int` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r28):
      return r28;
    L2():
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r27 = dyn base7("", <lang length(u)>);
      goto L0(r27);
    L1(r30):
      rep_int3 = ldf `rep.int` in base;
      r32 = dyn rep_int3("", r30);
      goto L0(r32);
    L4():
      u7 = ld u;
      u8 = force? u7;
      checkMissing(u8);
      length3 = ldf length in base;
      r31 = dyn length3(u8);
      goto L1(r31);
    L5():
      r29 = dyn base8(<sym u>);
      goto L1(r29);
    };
    goto L11(p6);
  L11(cran_orDefault):
    st cran = cran_orDefault;
    spaces_isMissing = missing.0(spaces);
    if spaces_isMissing then L12() else L13(spaces);
  L12():
    p7 = prom<V +>{
      sym9 = ldf `rep.int`;
      base9 = ldf `rep.int` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r35):
      return r35;
    L2():
      sym10 = ldf length;
      base10 = ldf length in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L3():
      r34 = dyn base9("", <lang length(u)>);
      goto L0(r34);
    L1(r37):
      rep_int4 = ldf `rep.int` in base;
      r39 = dyn rep_int4("", r37);
      goto L0(r39);
    L4():
      u9 = ld u;
      u10 = force? u9;
      checkMissing(u10);
      length4 = ldf length in base;
      r38 = dyn length4(u10);
      goto L1(r38);
    L5():
      r36 = dyn base10(<sym u>);
      goto L1(r36);
    };
    goto L13(p7);
  L13(spaces_orDefault):
    st spaces = spaces_orDefault;
    R_isMissing = missing.0(R);
    if R_isMissing then L14() else L15(R);
  L14():
    p8 = prom<V +>{
      sym11 = ldf `rep.int`;
      base11 = ldf `rep.int` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r42):
      return r42;
    L2():
      sym12 = ldf length;
      base12 = ldf length in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L4() else L5();
    L3():
      r41 = dyn base11("", <lang length(u)>);
      goto L0(r41);
    L1(r44):
      rep_int5 = ldf `rep.int` in base;
      r46 = dyn rep_int5("", r44);
      goto L0(r46);
    L4():
      u11 = ld u;
      u12 = force? u11;
      checkMissing(u12);
      length5 = ldf length in base;
      r45 = dyn length5(u12);
      goto L1(r45);
    L5():
      r43 = dyn base12(<sym u>);
      goto L1(r43);
    };
    goto L15(p8);
  L15(R_orDefault):
    st R = R_orDefault;
    list2DF = ldf list2DF;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p11 = prom<V +>{
      sym13 = ldf list;
      base13 = ldf list in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      u13 = ld u;
      u14 = force? u13;
      checkMissing(u14);
      p9 = ld p;
      p10 = force? p9;
      checkMissing(p10);
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      new1 = ld new;
      new2 = force? new1;
      checkMissing(new2);
      cran1 = ld cran;
      cran2 = force? cran1;
      checkMissing(cran2);
      spaces1 = ld spaces;
      spaces2 = force? spaces1;
      checkMissing(spaces2);
      R1 = ld R;
      R2 = force? R1;
      checkMissing(R2);
      list1 = ldf list in base;
      r50 = dyn list1(u14, p10, s2, m2, new2, cran2, spaces2, R2);
      goto L0(r50);
    L2():
      r48 = dyn base13[URL, From, Status, Message, New, CRAN, Spaces, R](<sym u>, <sym p>, <sym s>, <sym m>, <sym new>, <sym cran>, <sym spaces>, <sym R>);
      goto L0(r48);
    };
    r52 = dyn list2DF(p11);
    check L18() else D1();
  D1():
    deopt 3 [r52];
  L18():
    st y = r52;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L19() else L20();
  L16(r54):
    l = ld y;
    class__ = ldf `class<-`;
    check L22() else D3();
  L19():
    c = ldf c in base;
    r55 = dyn c("check_url_db", "data.frame");
    check L21() else D2();
  L20():
    r53 = dyn base14("check_url_db", "data.frame");
    goto L16(r53);
  D2():
    deopt 10 [r55];
  D3():
    deopt 12 [r54, l, r54];
  L21():
    goto L16(r55);
  L22():
    r56 = dyn class__(l, NULL, r54);
    check L23() else D4();
  D4():
    deopt 14 [r54, r56];
  L23():
    st y = r56;
    y = ld y;
    check L24() else D5();
  D5():
    deopt 16 [y];
  L24():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}
fun inner2711021060(urls) {
  (reg urls:*) -+> V { var urls:*, reg _fetch_headers_via_curl:cls, reg urls1:*, reg urls2:V, reg p:p(V +), reg verbose:*, reg verbose1:V, reg p1:p(V +), reg pool:*, reg pool1:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st urls = urls;
    _fetch_headers_via_curl = ldf `.fetch_headers_via_curl`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      urls1 = ld urls;
      urls2 = force? urls1;
      checkMissing(urls2);
      return urls2;
    };
    p1 = prom<V +>{
      verbose = ld verbose;
      verbose1 = force? verbose;
      checkMissing(verbose1);
      return verbose1;
    };
    p2 = prom<V +>{
      pool = ld pool;
      pool1 = force? pool;
      checkMissing(pool1);
      return pool1;
    };
    r3 = dyn _fetch_headers_via_curl(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner2374964927(u, h) {
  (reg u:*, reg h:*) -+> V { var u:*, var h:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg h1:*, reg h2:V, reg inherits:cls, reg r2:V, reg c:L, reg sub:cls, reg conditionMessage:cls, reg h3:*, reg h4:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg h5:*, reg h6:V, reg attr:cls, reg r12:V, reg as_character:cls, reg r13:V, reg table_of_FTP_server_return_codes:*, reg table_of_FTP_server_return_codes1:V, reg c1:L, reg table_of_FTP_server_return_codes3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg s:*, reg s1:V, reg __:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg s2:*, reg s3:V, reg msg:*, reg msg1:V, reg c2:cls, reg r17:V |
    mkenv;
    st u = u;
    st h = h;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c = `as.logical`(r1);
    if c then L11() else L1();
  L7():
    h1 = ld h;
    check L9() else D0();
  L8():
    r = dyn base(<sym h>, "error");
    goto L0(r);
  D0():
    deopt 2 [h1];
  L1():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L2():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L9():
    h2 = force? h1;
    checkMissing(h2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(h2, "error", FALSE);
    check L10() else D1();
  L11():
    st s = "-1";
    sub = ldf sub;
    check L12() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 12 [];
  L3(r9):
    st s = r9;
    table_of_FTP_server_return_codes = ld table_of_FTP_server_return_codes;
    check L22() else D7();
  L6(r16):
    popenv;
    return r16;
  L10():
    goto L0(r2);
  L12():
    p1 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p = prom<V +>{
        h3 = ld h;
        h4 = force? h3;
        checkMissing(h4);
        return h4;
      };
      r4 = dyn conditionMessage(p);
      return r4;
    };
    r6 = dyn sub("[[:space:]]*$", "", p1);
    check L13() else D3();
  L15():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L16():
    r8 = dyn base1(<lang attr(h, "status")>);
    goto L3(r8);
  L27():
    s2 = ld s;
    check L29() else D9();
  L28():
    r15 = dyn base3(<sym s>, <sym msg>, "", "");
    goto L6(r15);
  D3():
    deopt 16 [r6];
  D7():
    deopt 30 [table_of_FTP_server_return_codes];
  D9():
    deopt 38 [s2];
  L4(r11):
    as_character = ldf `as.character` in base;
    r13 = dyn as_character(r11);
    check L21() else D6();
  L13():
    st msg = r6;
    goto L2();
  L17():
    h5 = ld h;
    check L19() else D4();
  L18():
    r10 = dyn base2(<sym h>, "status");
    goto L4(r10);
  L22():
    table_of_FTP_server_return_codes1 = force? table_of_FTP_server_return_codes;
    checkMissing(table_of_FTP_server_return_codes1);
    c1 = `is.object`(table_of_FTP_server_return_codes1);
    if c1 then L23() else L24(table_of_FTP_server_return_codes1);
  L29():
    s3 = force? s2;
    checkMissing(s3);
    msg = ld msg;
    check L30() else D10();
  D4():
    deopt 22 [h5];
  D6():
    deopt 28 [r13];
  D10():
    deopt 40 [msg];
  L5(dx1):
    st msg = dx1;
    goto L2();
  L19():
    h6 = force? h5;
    checkMissing(h6);
    attr = ldf attr in base;
    r12 = dyn attr(h6, "status");
    check L20() else D5();
  L21():
    goto L3(r13);
  L23():
    dr = tryDispatchBuiltin.1("[", table_of_FTP_server_return_codes1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(table_of_FTP_server_return_codes3):
    s = ld s;
    check L26() else D8();
  L30():
    msg1 = force? msg;
    checkMissing(msg1);
    c2 = ldf c in base;
    r17 = dyn c2(s3, msg1, "", "");
    check L31() else D11();
  D5():
    deopt 26 [r12];
  D8():
    deopt 32 [table_of_FTP_server_return_codes3, s];
  D11():
    deopt 45 [r17];
  L20():
    goto L4(r12);
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L26():
    s1 = force? s;
    __ = ldf `[` in base;
    r14 = dyn __(table_of_FTP_server_return_codes3, s1);
    goto L5(r14);
  L31():
    goto L6(r17);
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg tolower:cls, reg u1:*, reg u2:V, reg p:p(V +), reg r1:V, reg grepl:cls, reg ul:*, reg ul1:V, reg p1:p(V +), reg r3:V, reg c:L, reg c2:V, reg grepl1:cls, reg ul2:*, reg ul3:V, reg p2:p(V +), reg r5:V, reg r6:V, reg c3:L, reg c4:V, reg c6:L, reg c7:V, reg grepl2:cls, reg ul4:*, reg ul5:V, reg p3:p(V +), reg r8:V, reg c9:L, reg c10:V, reg c12:L, reg c13:V, reg startsWith:cls, reg ul6:*, reg ul7:V, reg p4:p(V +), reg r10:V, reg c15:L, reg c16:V, reg c18:L, reg c19:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg c23:L, reg r12:V, reg startsWith1:cls, reg ul8:*, reg ul9:V, reg p5:p(V +), reg mirrors:*, reg mirrors1:V, reg p6:p(V +), reg r15:V, reg any:cls, reg r16:V, reg c24:L, reg c25:V, reg grepl3:cls, reg ul10:*, reg ul11:V, reg p7:p(V +), reg r18:V, reg grepl4:cls, reg u3:*, reg u4:V, reg p8:p(V +), reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg cran:*, reg cran1:V, reg c27:L, reg u5:*, reg u6:V, reg u7:V, reg spaces:*, reg spaces1:V, reg c28:L, reg u8:*, reg u9:V, reg u10:V, reg R:*, reg R1:V, reg c29:L, reg u11:*, reg u12:V, reg u13:V, reg c30:cls, reg r23:V |
    mkenv;
    st u = u;
    tolower = ldf tolower;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      return u2;
    };
    r1 = dyn tolower(p);
    check L13() else D1();
  D1():
    deopt 3 [r1];
  L13():
    st ul = r1;
    grepl = ldf grepl;
    check L14() else D2();
  D2():
    deopt 6 [];
  L14():
    p1 = prom<V +>{
      ul = ld ul;
      ul1 = force? ul;
      checkMissing(ul1);
      return ul1;
    };
    r3 = dyn grepl("^https?://cran.r-project.org/web/packages", p1);
    check L15() else D3();
  D3():
    deopt 9 [r3];
  L15():
    c = `as.logical`(r3);
    if c then L16() else L0(c);
  L0(c2):
    c6 = `as.logical`(c2);
    if c6 then L1(c6) else L20();
  L16():
    grepl1 = ldf grepl;
    check L17() else D4();
  D4():
    deopt 11 [c];
  L1(c7):
    c12 = `as.logical`(c7);
    if c12 then L2(c12) else L24();
  L17():
    p2 = prom<V +>{
      ul2 = ld ul;
      ul3 = force? ul2;
      checkMissing(ul3);
      return ul3;
    };
    r5 = dyn grepl1("^https?://cran.r-project.org/web/packages/([.[:alnum:]_]+(html|pdf|rds))?$", p2);
    check L18() else D5();
  L20():
    grepl2 = ldf grepl;
    check L21() else D6();
  D5():
    deopt 14 [c, r5];
  D6():
    deopt 18 [c6];
  L2(c13):
    c18 = `as.logical`(c13);
    if c18 then L3(c18) else L28();
  L18():
    r6 = `!`(r5);
    c3 = `as.logical`(r6);
    c4 = `&&`(c, c3);
    goto L0(c4);
  L21():
    p3 = prom<V +>{
      ul4 = ld ul;
      ul5 = force? ul4;
      checkMissing(ul5);
      return ul5;
    };
    r8 = dyn grepl2("^https?://cran.r-project.org/web/views/[[:alnum:]]+[.]html$", p3);
    check L22() else D7();
  L24():
    startsWith = ldf startsWith;
    check L25() else D8();
  D7():
    deopt 21 [c6, r8];
  D8():
    deopt 24 [c12];
  L3(c19):
    st cran = c19;
    grepl3 = ldf grepl;
    check L35() else D13();
  L22():
    c9 = `as.logical`(r8);
    c10 = `||`(c6, c9);
    goto L1(c10);
  L25():
    p4 = prom<V +>{
      ul6 = ld ul;
      ul7 = force? ul6;
      checkMissing(ul7);
      return ul7;
    };
    r10 = dyn startsWith(p4, "http://cran.r-project.org");
    check L26() else D9();
  L28():
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  D9():
    deopt 27 [c12, r10];
  D13():
    deopt 41 [];
  L4(c23, r12):
    c24 = `as.logical`(r12);
    c25 = `||`(c23, c24);
    goto L3(c25);
  L26():
    c15 = `as.logical`(r10);
    c16 = `||`(c12, c15);
    goto L2(c16);
  L29():
    startsWith1 = ldf startsWith;
    check L31() else D10();
  L30():
    r11 = dyn base(<lang startsWith(ul, mirrors)>);
    goto L4(c18, r11);
  L35():
    p7 = prom<V +>{
      ul10 = ld ul;
      ul11 = force? ul10;
      checkMissing(ul11);
      return ul11;
    };
    r18 = dyn grepl3("^http://(www|bugs|journal).r-project.org", p7);
    check L36() else D14();
  D10():
    deopt 32 [c18];
  D14():
    deopt 44 [r18];
  L31():
    p5 = prom<V +>{
      ul8 = ld ul;
      ul9 = force? ul8;
      checkMissing(ul9);
      return ul9;
    };
    p6 = prom<V +>{
      mirrors = ld mirrors;
      mirrors1 = force? mirrors;
      checkMissing(mirrors1);
      return mirrors1;
    };
    r15 = dyn startsWith1(p5, p6);
    check L32() else D11();
  L36():
    st R = r18;
    grepl4 = ldf grepl;
    check L37() else D15();
  D11():
    deopt 35 [c18, r15];
  D15():
    deopt 47 [];
  L32():
    any = ldf any in base;
    r16 = dyn any(r15);
    check L33() else D12();
  L37():
    p8 = prom<V +>{
      u3 = ld u;
      u4 = force? u3;
      checkMissing(u4);
      return u4;
    };
    r20 = dyn grepl4(" ", p8);
    check L38() else D16();
  D12():
    deopt 37 [c18, r16];
  D16():
    deopt 50 [r20];
  L33():
    goto L4(c18, r16);
  L38():
    st spaces = r20;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L5(r22):
    popenv;
    return r22;
  L39():
    cran = ld cran;
    check L41() else D17();
  L40():
    r21 = dyn base1(<lang if(cran, u, "")>, <lang if(spaces, u, "")>, <lang if(R, u, "")>);
    goto L5(r21);
  D17():
    deopt 54 [cran];
  L41():
    cran1 = force? cran;
    checkMissing(cran1);
    c27 = `as.logical`(cran1);
    if c27 then L42() else L6();
  L6():
    goto L7("");
  L7(u7):
    spaces = ld spaces;
    check L45() else D19();
  L42():
    u5 = ld u;
    check L43() else D18();
  D18():
    deopt 56 [u5];
  D19():
    deopt 60 [spaces];
  L43():
    u6 = force? u5;
    checkMissing(u6);
    goto L7(u6);
  L45():
    spaces1 = force? spaces;
    checkMissing(spaces1);
    c28 = `as.logical`(spaces1);
    if c28 then L46() else L8();
  L8():
    goto L9("");
  L9(u10):
    R = ld R;
    check L49() else D21();
  L46():
    u8 = ld u;
    check L47() else D20();
  D20():
    deopt 62 [u8];
  D21():
    deopt 66 [R];
  L47():
    u9 = force? u8;
    checkMissing(u9);
    goto L9(u9);
  L49():
    R1 = force? R;
    checkMissing(R1);
    c29 = `as.logical`(R1);
    if c29 then L50() else L10();
  L10():
    goto L11("");
  L11(u13):
    c30 = ldf c in base;
    r23 = dyn c30(u7, u10, u13);
    check L53() else D23();
  L50():
    u11 = ld u;
    check L51() else D22();
  D22():
    deopt 68 [u11];
  D23():
    deopt 73 [r23];
  L51():
    u12 = force? u11;
    checkMissing(u12);
    goto L11(u12);
  L53():
    goto L5(r23);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg inherits:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg e3:*, reg e4:V, reg attr:cls, reg r5:V |
    mkenv;
    st e = e;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    e1 = ld e;
    check L5() else D0();
  L4():
    r = dyn base(<sym e>, "error");
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    e2 = force? e1;
    checkMissing(e2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(e2, "error", FALSE);
    check L6() else D1();
  L7():
    popenv;
    return -1;
  D1():
    deopt 7 [r2];
  L2(r4):
    popenv;
    return r4;
  L6():
    goto L0(r2);
  L9():
    e3 = ld e;
    check L11() else D2();
  L10():
    r3 = dyn base1(<sym e>, "status");
    goto L2(r3);
  D2():
    deopt 12 [e3];
  L11():
    e4 = force? e3;
    checkMissing(e4);
    attr = ldf attr in base;
    r5 = dyn attr(e4, "status");
    check L12() else D3();
  D3():
    deopt 16 [r5];
  L12():
    goto L2(r5);
  }
}