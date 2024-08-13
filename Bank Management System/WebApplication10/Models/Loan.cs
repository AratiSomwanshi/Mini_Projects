using System;
using System.Collections.Generic;

using WebApplication10.Models;
namespace WebApplication10.Models;

    public partial class Loan
    {
        public int LoanId { get; set; }

        public int UserId { get; set; }

        public decimal Amount { get; set; }

        public double InterestRate { get; set; }

        public DateTime LoanDate { get; set; }

        public DateTime DueDate { get; set; }

        public string? Status { get; set; }
    
}