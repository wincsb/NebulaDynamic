/*******************************************************************************
 * Project:  Nebula
 * @file     StepOne.hpp
 * @brief    
 * @author   Bwar
 * @date:    2019年6月22日
 * @note
 * Modify history:
 ******************************************************************************/
#ifndef STEPONE_HPP_
#define STEPONE_HPP_

#include <actor/step/PbStep.hpp>

namespace hello
{

class StepOne: public neb::PbStep, public neb::DynamicCreator<StepOne>
{
public:
    StepOne();
    virtual ~StepOne();

    virtual neb::E_CMD_STATUS Emit(int iErrno = neb::ERR_OK, const std::string& strErrMsg = "", void* data = NULL);
    virtual neb::E_CMD_STATUS Callback(
                    std::shared_ptr<neb::SocketChannel> pUpstreamChannel,
                    const MsgHead& oInMsgHead,
                    const MsgBody& oInMsgBody,
                    void* data = NULL);

    virtual neb::E_CMD_STATUS Timeout();
};

} /* namespace hello*/

#endif /* STEPONE_HPP_ */

