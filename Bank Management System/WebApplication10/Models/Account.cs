using System;
using System.Collections.Generic;

using WebApplication10.Models;
namespace WebApplication10.Models;

public partial class Account
{
    public int AccountId { get; set; }

    public int UserId { get; set; }

    public string AccountNumber { get; set; } = null!;

    public decimal Balance { get; set; }

    public virtual ICollection<Transaction> Transactions { get; set; } = new List<Transaction>();
}