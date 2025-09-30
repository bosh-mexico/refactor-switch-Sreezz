#ifndef PAYMENTCHECKOUT_H_
#define PAYMENTCHECKOUT_H_

// Enum for Payment Modes
typedef enum {
    PayPal,
    GooglePay,
    CreditCard,
    Unknown,
    PaymentModeCount
} PaymentMode;

void checkout(PaymentMode mode, double amount);

#endif// PAYMENTCHECKOUT_H_
